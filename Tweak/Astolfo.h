#import <UIKit/UIKit.h>
#import "GcUniversal/GcImagePickerUtils.h"
#import <Cephei/HBPreferences.h>

#define SYSTEM_VERSION_LESS_THAN(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)

HBPreferences* preferences;

extern BOOL enabled;

UIImageView* astolfoImageView;
UIVisualEffectView* blurView;
UIBlurEffect* blur;

// image customization
BOOL useCustomAstolfoImageSwitch = NO;
BOOL fillScreenSwitch = NO;
NSString* astolfoXPositionValue = @"0.0";
NSString* astolfoYPositionValue = @"150.0";
NSString* astolfoAlphaValue = @"1.0";

// background blur
NSString* blurValue = @"1";
NSString* blurAmountValue = @"0.0";

@interface SiriUIBackgroundBlurViewController : UIViewController
@end

@interface AFUISiriViewController : UIViewController
@end