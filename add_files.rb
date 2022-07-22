require 'xcodeproj'
product_name = 'Unity-iPhone'
project_file = product_name + '.xcodeproj'
project = Xcodeproj::Project.open(project_file)

# project.native_targets.each do |target|
#     puts target.name
#     target.build_phases.each do |ch|
#         puts ch.display_name
#     end
# end

# Add a file to the project in the main group
# file_name = 'GoogleService-Info.plist'
# group_name = product_name
# file = project.new_file(file_name)
# project.native_targets.first.add_resources([file])

product_name = project.root_object.build_configuration_list.build_configurations.first.build_settings['PRODUCT_NAME_APP']

# capa_file = 'Unity-iPhone/' + product_name + '.entitlements'
# project.root_object.build_configuration_list.build_configurations.each do |target|
#     target.build_settings['CODE_SIGN_ENTITLEMENTS'] = capa_file
#     # target.build_settings['ARCHS'] = "$(ARCHS_STANDARD)"
# end

# open(capa_file, 'w') { |f|
# f << '<?xml version="1.0" encoding="UTF-8"?>'
# f << "\n"
# f <<'<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">'
# f << "\n"
# f << '<plist version="1.0">'
# f << "\n"
# f << '<dict>'
# f << "\n"
# f << '      <key>aps-environment</key>'
# f << "\n"
# f << '     <string>production</string>'
# f << "\n"
# f << '</dict>'
# f << "\n"
# f << '</plist>'
# }
# capa = project.new_file(capa_file)

# Adding Frameworks
unity_framework_target = project.native_targets.select {|target| target.name.eql?("UnityFramework")}.first
sdk_path_request_out = %x|xcrun --sdk macosx --show-sdk-path|
# sdk_path_request_out = "/cc/sdsd/awewer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.1.sdk"
puts sdk_path_request_out.lines.last
sdk_path = sdk_path_request_out.lines.last[%r[(/Platforms.*)], 1][1..-1]
puts sdk_path
ios_support_frameworks_path = sdk_path + '/System/iOSSupport/System/Library/Frameworks/'
frameworks_path = sdk_path + '/System/Library/Frameworks/'
puts ios_support_frameworks_path

# project.files().select {|file| file.name.eql?("libAppsFlyerLib.a")}.each {|file_ref| file_ref.remove_from_project()}

safari_services_framework_name = "SafariServices.framework"
safari_services_framework_path = ios_support_frameworks_path + safari_services_framework_name
puts safari_services_framework_path
safari_services_framework_ref = project.new_file(safari_services_framework_name, "DEVELOPER_DIR")
safari_services_framework_ref.name = safari_services_framework_name
safari_services_framework_ref.path = safari_services_framework_path
unity_framework_target.frameworks_build_phase.add_file_reference(safari_services_framework_ref)
project.frameworks_group << safari_services_framework_ref

core_telephony_framework_name = "CoreTelephony.framework"
core_telephony_framework_path = frameworks_path + core_telephony_framework_name
puts core_telephony_framework_path
core_telephony_framework_ref = project.new_file(core_telephony_framework_name, "DEVELOPER_DIR")
core_telephony_framework_ref.name = core_telephony_framework_name
core_telephony_framework_ref.path = core_telephony_framework_path
unity_framework_target.frameworks_build_phase.add_file_reference(core_telephony_framework_ref)
project.frameworks_group << core_telephony_framework_ref

project.save(project_file)
# project.save("test.xcodeproj")

# fix Info.plist encoding issue
info_plist_content = File.open("Info.plist", "r:bom|utf-8", &:read)
File.write('Info.plist', info_plist_content)

plist = Xcodeproj::Plist.read_from_path('Info.plist')

plist['NSAppTransportSecurity'] = {'NSExceptionDomains' => {ENV["APP_DOMAIN"] => {'NSExceptionAllowsInsecureHTTPLoads' => true, 'NSIncludesSubdomains' => true}}}
plist['NSLocationWhenInUseUsageDescription'] = "The app needs access to this location in order to receive up-to-date information for your location"
plist['CFBundleDisplayName'] = ENV["APP_DISPLAY_NAME"]
plist['CFBundleShortVersionString'] = ENV["APP_VERSION"]
plist['CFBundleVersion'] = ENV["APP_BUILD"]

Xcodeproj::Plist.write_to_path(plist, 'Info.plist')