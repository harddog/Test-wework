//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "NotificationProxyObserverDelegate-Protocol.h"
#import "PKPushRegistryDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "UNUserNotificationCenterDelegate-Protocol.h"

@class AppRootControllerProcess, CXProvider, NSDate, NSMutableArray, NSString, NSUUID, TencentOAuth, UIWindow, WWKScreenshotSharer, WWKShareExtensionHost, WeAppWrapper;

@interface AppDelegate : UIResponder <NotificationProxyObserverDelegate, PKPushRegistryDelegate, UIApplicationDelegate, UNUserNotificationCenterDelegate>
{
    struct unique_ptr<NotificationProxyObserver, std::__1::default_delete<NotificationProxyObserver>> _notification_observer;
    AppRootControllerProcess *_appRootControllerProcess;
    NSMutableArray *_handleUrls;
    _Bool _backgroundEnter;
    _Bool _canClickNotificationPushToNewConversation;
    unsigned long long _backgroundTask;
    TencentOAuth *_tencentOAuth;
    NSMutableArray *_queuedPreloadingImageUrls;
    struct Time _will_foreground;
    NSDate *_become_foreground;
    WWKShareExtensionHost *_shareExtensionHost;
    WeAppWrapper *_weAppWrapper;
    struct unique_ptr<base::CancelableCallback<void ()>, std::__1::default_delete<base::CancelableCallback<void ()>>> _background_closure;
    UIWindow *_window;
    CXProvider *_callProvider;
    NSUUID *_cxUUID;
    WWKScreenshotSharer *_screenshotSharer;
}

@property(retain, nonatomic) WWKScreenshotSharer *screenshotSharer; // @synthesize screenshotSharer=_screenshotSharer;
@property(retain, nonatomic) NSUUID *cxUUID; // @synthesize cxUUID=_cxUUID;
@property(retain, nonatomic) CXProvider *callProvider; // @synthesize callProvider=_callProvider;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)loadDebugSetting;
- (void)p_localeSettingDidChange:(id)arg1;
- (void)p_tryPreloadWeApp;
- (_Bool)isApprovalFeatureEnabled;
- (_Bool)needMainPageLoading;
- (void)p_setWeAppProfile;
- (void)p_securityLogout;
- (void)p_didTakeScreensshot:(id)arg1;
- (void)p_makeFakePush:(id)arg1;
- (void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3;
- (void)pushRegistry:(id)arg1 didUpdatePushCredentials:(id)arg2 forType:(id)arg3;
- (void)registVoipPushKit;
- (void)clearWebViewCacheAndCookies;
- (void)logWhenSplashAppear;
- (void)showSuggestUpdateVersionWith:(const struct systemconfig *)arg1;
- (void)showForceUpdateVersionWith:(const struct systemconfig *)arg1;
- (void)showAlertViewWithString:(id)arg1;
- (void)onNotification:(int)arg1 source:(const struct NotificationSource *)arg2 details:(const struct NotificationDetails *)arg3;
- (void)TryNotifyGidRemotePushObserver;
- (void)presentLocalNotificationWithAlertBody:(id)arg1 roomID:(long long)arg2 senderID:(long long)arg3;
- (void)handleActionWithIdentifier:(id)arg1 roomID:(long long)arg2 senderID:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)isValidPushRootController;
- (struct Key)conversationKeyWithRoomID:(long long)arg1 senderID:(long long)arg2;
- (void)handleReceiveNotificationWithRemindID:(unsigned long long)arg1;
- (void)handleReceiveAttendanceLocalNotificationWithID:(id)arg1 andIsWork:(_Bool)arg2 andRemindSecond:(long long)arg3 andSendTime:(unsigned int)arg4;
- (void)handleReceiveNotificationWithRoomID:(unsigned long long)arg1 senderID:(unsigned long long)arg2 mailTips:(struct NewMailTips *)arg3 msgContentType:(long long)arg4;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)remoteNotificationCompletionHandlerWrapperWithNonParameterHandler:(CDUnknownBlockType)arg1;
- (void)remoteNotificationCompletionHandlerWrapper:(CDUnknownBlockType)arg1;
- (void)handleDidReceiveNotification:(id)arg1 withNoParameterCompletionHandler:(CDUnknownBlockType)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)handleAction:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (unsigned long long)freeMemory;
- (void)logFreeMemory:(id)arg1;
- (void)logMemoryUsage:(id)arg1;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)registerRemotePushInApplication:(id)arg1;
- (void)registerRemotePushInApplicationByOldInterface:(id)arg1;
- (void)registerRemotePushInApplicationiOS10:(id)arg1;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setupApplicationShortcutItems;
- (void)resetRootViewController;
@property(readonly, nonatomic) id mainController;
- (void)updateDeviceToken;
- (void)setAppState:(id)arg1;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (_Bool)handleOpenURL:(id)arg1 sourceApplication:(id)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)reportWakeup;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)fetchOneKeyLoginRequest;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)registerBackgroundFetchMode:(id)arg1;
- (void)startReport;
- (void)firstReport;
- (void)beginReport;
- (void)checkSpace;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)needLogin;
- (void)coverTestCreateFolder;
- (_Bool)p_isInVoipCall;
- (void)p_parseCallLogFromVideoCallIntent:(id)arg1;
- (void)p_parseCallLogFromAudioCallIntent:(id)arg1;
- (void)application:(id)arg1 didUpdateUserActivity:(id)arg2;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)setReportVid:(id)arg1;
- (void)initVidObserver;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

