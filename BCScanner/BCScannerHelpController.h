#import <UIKit/UIKit.h>

@class BCScannerHelpController;

@protocol BCScannerDelegate
@optional

- (void) helpControllerDidFinish: (BCScannerHelpController*) help;

@end


// failure dialog w/a few useful tips

@interface BCScannerHelpController : UIViewController
                              < UIWebViewDelegate,
                                UIAlertViewDelegate >
{
    id delegate;
    UIWebView *webView;
    UIToolbar *toolbar;
    UIBarButtonItem *doneBtn, *backBtn, *space;
    NSURL *linkURL;
    NSUInteger orientations;
}

@property (nonatomic, assign) id<BCScannerDelegate> delegate;

- (BOOL) isInterfaceOrientationSupported: (UIInterfaceOrientation) orientation;
- (void) setInterfaceOrientation: (UIInterfaceOrientation) orientation
                       supported: (BOOL) supported;

@end
