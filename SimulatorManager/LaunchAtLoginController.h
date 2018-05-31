//
//  LaunchAtLoginController.h

@interface LaunchAtLoginController : NSObject {}

@property(assign) BOOL launchAtLogin;

- (BOOL) willLaunchAtLogin: (NSURL*) itemURL;
- (void) setLaunchAtLogin: (BOOL) enabled forURL: (NSURL*) itemURL;

@end
