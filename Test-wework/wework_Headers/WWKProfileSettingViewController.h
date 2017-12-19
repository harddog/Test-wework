//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKCommonTableViewController.h"

#import "NotificationProxyObserverDelegate-Protocol.h"
#import "WWKEditTextDelegate-Protocol.h"
#import "WWKVerifyMobileDialogControllerDelegate-Protocol.h"
#import "WXApiManagerDelegate-Protocol.h"

@class MBProgressHUD, NSMutableArray, NSString;

@interface WWKProfileSettingViewController : WWKCommonTableViewController <NotificationProxyObserverDelegate, WWKVerifyMobileDialogControllerDelegate, WXApiManagerDelegate, WWKEditTextDelegate>
{
    NSMutableArray *_dataSource;
    MBProgressHUD *_bindWxHud;
    scoped_refptr_e1f85e48 _user;
    struct unique_ptr<NotificationProxyObserver, std::__1::default_delete<NotificationProxyObserver>> _push_notification_observer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)managerBindWxFinish;
- (void)managerEndLoginRequest;
- (void)managerBeginLoginRequest;
- (void)verifyMobileSuccessful:(struct PhoneItem)arg1;
- (void)verifyMobileDialog:(id)arg1 didCheckMobileSuccessful:(id)arg2;
- (void)onNotification:(int)arg1 source:(const struct NotificationSource *)arg2 details:(const struct NotificationDetails *)arg3;
- (void)editTextController:(id)arg1 didClickSaveItemWithText:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)initDataSource;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

