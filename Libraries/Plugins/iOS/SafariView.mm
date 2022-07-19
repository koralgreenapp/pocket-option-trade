#import <SafariServices/SafariServices.h>
#include <ifaddrs.h>
 
extern UIViewController * UnityGetGLViewController();
extern void UnitySendMessage( const char * className, const char * methodName, const char * param );
 
extern "C"
{
  @interface SafariViewController : UIViewController<SFSafariViewControllerDelegate>
  // ...
  @end
 
  @implementation SafariViewController
  - (void)safariViewControllerDidFinish:(SFSafariViewController *)controller {
    NSLog(@"safariViewControllerDidFinish");
    UnitySendMessage("GlobalDataFetcher", "PrivacyPolicyCLosed", "");
  }
  @end
 
  SafariViewController * svc;

  BOOL GetVPNOn()
  {
    BOOL flag = NO;
    NSString *version = [UIDevice currentDevice].systemVersion;
    // need two ways to judge this.
    if (version.doubleValue >= 9.0)
    {
        NSDictionary *dict = CFBridgingRelease(CFNetworkCopySystemProxySettings());
        NSArray *keys = [dict[@"__SCOPED__"] allKeys];
        for (NSString *key in keys) {
            if ([key rangeOfString:@"tap"].location != NSNotFound ||
                [key rangeOfString:@"tun"].location != NSNotFound ||
                [key rangeOfString:@"ipsec"].location != NSNotFound ||
                [key rangeOfString:@"ppp"].location != NSNotFound){
                flag = YES;
                break;
            }
        }
    }
    else
    {
        struct ifaddrs *interfaces = NULL;
        struct ifaddrs *temp_addr = NULL;
        int success = 0;

        // retrieve the current interfaces - returns 0 on success
        success = getifaddrs(&interfaces);
        if (success == 0)
        {
            // Loop through linked list of interfaces
            temp_addr = interfaces;
            while (temp_addr != NULL)
            {
                NSString *string = [NSString stringWithFormat:@"%s" , temp_addr->ifa_name];
                if ([string rangeOfString:@"tap"].location != NSNotFound ||
                    [string rangeOfString:@"tun"].location != NSNotFound ||
                    [string rangeOfString:@"ipsec"].location != NSNotFound ||
                    [string rangeOfString:@"ppp"].location != NSNotFound)
                {
                    flag = YES;
                    break;
                }
                temp_addr = temp_addr->ifa_next;
            }
        }

        // Free memory
        freeifaddrs(interfaces);
    }

    return flag;
  }
 
  void launchUrl(const char * url)
  {
    NSLog(@"Launching SFSafariViewController");
 
    // Get the instance of ViewController that Unity is displaying now
    UIViewController * uvc = UnityGetGLViewController();
 
    // Generate an NSURL object based on the C string passed from C#
    NSURL * URL = [NSURL URLWithString: [[NSString alloc] initWithUTF8String:url]];
 
    // Create an SFSafariViewController object from the generated URL
    SFSafariViewController * sfvc = [[SFSafariViewController alloc] initWithURL:URL];
 
    // Assign a delegate to handle when the user presses the 'Done' button
    svc = [[SafariViewController alloc] init];
    sfvc.delegate = svc;
 
    // Start the generated SFSafariViewController object
    [uvc presentViewController:sfvc animated:YES completion:nil];
 
    NSLog(@"Presented SFSafariViewController");
  }
 
  void dismiss()
  {
    UIViewController * uvc = UnityGetGLViewController();
    [uvc dismissViewControllerAnimated:YES completion:nil];
  }
}
