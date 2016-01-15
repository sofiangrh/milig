#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface StatusBarNotification : NSObject

+ (void)showWithMessage:(NSString*)message backgroundColor:(UIColor*)bgColor autoHide:(BOOL)autoHide;
+ (void)hide;
+ (UIColor*)errorColor;
+ (UIColor*)warningColor;
+ (UIColor*)successColor;
+ (UIColor*)infoColor;

@end
