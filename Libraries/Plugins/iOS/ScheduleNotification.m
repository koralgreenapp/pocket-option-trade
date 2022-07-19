#import <UserNotifications/UserNotifications.h>

void Plugin_ScheduleLocalNotification(char* instanceId, char* title, char* subtitle, char* body, char* attachmentFile, int timeIntervalSecs)
{
    UNMutableNotificationContent* content = [[UNMutableNotificationContent alloc] init];

    content.title = [NSString stringWithUTF8String:title];
    content.subtitle = [NSString stringWithUTF8String:subtitle];
    content.body = [NSString stringWithUTF8String:body];
        

    if (attachmentFile != nil){
        NSString *attachmentRes =  [NSString stringWithUTF8String:attachmentFile];
        NSFileManager* fileMgr = [NSFileManager defaultManager];
        BOOL fileExists = [fileMgr fileExistsAtPath:attachmentRes];
        if (fileExists == NO){
            NSLog(@"Missing Attachment %@", attachmentRes);
        }else{
            NSLog(@"Attachment %@", attachmentRes);
            NSURL *URL = [NSURL fileURLWithPath:attachmentRes];
            NSError *attachmentError = nil;
            //note when you attach the file is automatically deleted
            UNNotificationAttachment* attachment = [UNNotificationAttachment attachmentWithIdentifier: [attachmentRes lastPathComponent]
                                                    URL:URL
                                                    options:nil
                                                     error:&attachmentError];
            if (attachmentError)
            {
                NSLog(@"%@", attachmentError.localizedDescription);
                NSLog(@"Attachment BAD %@", attachmentRes);
            }else{
                content.attachments = @[attachment];
                NSLog(@"Attachment OK %@", attachmentRes);
            }
        }        
    }
    
    UNNotificationTrigger* trigger = [UNTimeIntervalNotificationTrigger triggerWithTimeInterval: timeIntervalSecs repeats:NO];
    
    UNNotificationRequest* request = [UNNotificationRequest requestWithIdentifier: @(instanceId) content: content trigger: trigger];

    UNUserNotificationCenter* center = [UNUserNotificationCenter currentNotificationCenter];
    [center addNotificationRequest: request withCompletionHandler:^(NSError * _Nullable error) {
        if (error != NULL){
            NSLog(@"%@", [error localizedDescription]);
        }            
    }];
}

void Plugin_ScheduleLocalNotification_DATE(char* instanceId, char* title, char* subtitle, char* body, char* attachmentFile, int hour)
{
    UNMutableNotificationContent* content = [[UNMutableNotificationContent alloc] init];

    content.title = [NSString stringWithUTF8String:title];
    content.subtitle = [NSString stringWithUTF8String:subtitle];
    content.body = [NSString stringWithUTF8String:body];
        

    if (attachmentFile != nil){
        NSString *attachmentRes =  [NSString stringWithUTF8String:attachmentFile];
        NSFileManager* fileMgr = [NSFileManager defaultManager];
        BOOL fileExists = [fileMgr fileExistsAtPath:attachmentRes];
        if (fileExists == NO){
            NSLog(@"Missing Attachment %@", attachmentRes);
        }else{
            NSLog(@"Attachment %@", attachmentRes);
            NSURL *URL = [NSURL fileURLWithPath:attachmentRes];
            NSError *attachmentError = nil;
            //note when you attach the file is automatically deleted
            UNNotificationAttachment* attachment = [UNNotificationAttachment attachmentWithIdentifier: [attachmentRes lastPathComponent]
                                                    URL:URL
                                                    options:nil
                                                     error:&attachmentError];
            if (attachmentError)
            {
                NSLog(@"%@", attachmentError.localizedDescription);
                NSLog(@"Attachment BAD %@", attachmentRes);
            }else{
                content.attachments = @[attachment];
                NSLog(@"Attachment OK %@", attachmentRes);
            }
        }        
    }
    
    NSDate *now = [NSDate date];
    now = [now dateByAddingTimeInterval:hour];
    NSCalendar *calendar = [[NSCalendar alloc] initWithCalendarIdentifier:NSGregorianCalendar];
    [calendar setTimeZone:[NSTimeZone localTimeZone]];
    NSDateComponents *components = [calendar components:NSYearCalendarUnit|NSMonthCalendarUnit|NSDayCalendarUnit|NSHourCalendarUnit|NSMinuteCalendarUnit|NSSecondCalendarUnit|NSTimeZoneCalendarUnit fromDate:now];
    UNNotificationTrigger* trigger = [UNCalendarNotificationTrigger triggerWithDateMatchingComponents: components repeats:YES];
    
    UNNotificationRequest* request = [UNNotificationRequest requestWithIdentifier: @(instanceId) content: content trigger: trigger];

    UNUserNotificationCenter* center = [UNUserNotificationCenter currentNotificationCenter];
    [center addNotificationRequest: request withCompletionHandler:^(NSError * _Nullable error) {
        if (error != NULL){
            NSLog(@"%@", [error localizedDescription]);
        }            
    }];
}
