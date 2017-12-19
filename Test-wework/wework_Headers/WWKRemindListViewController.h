//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NotificationProxyObserverDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WWKRemindDetailViewControllerDelegate-Protocol.h"

@class NSString, UITableView, WWKCommonEmptyView;

@interface WWKRemindListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, NotificationProxyObserverDelegate, WWKRemindDetailViewControllerDelegate>
{
    struct vector<WWKRemindStruct, std::__1::allocator<WWKRemindStruct>> _dataVec;
    struct vector<pb::Alert, std::__1::allocator<pb::Alert>> _alert_vector;
    double _cacheCellHeight;
    _Bool _hasFooter;
    _Bool _hasHistoryRemind;
    struct unique_ptr<NotificationProxyObserver, std::__1::default_delete<NotificationProxyObserver>> _notification_observer;
    UITableView *_tableView;
    WWKCommonEmptyView *_placeHolderView;
}

@property(retain, nonatomic) WWKCommonEmptyView *placeHolderView; // @synthesize placeHolderView=_placeHolderView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onNotification:(int)arg1 source:(const struct NotificationSource *)arg2 details:(const struct NotificationDetails *)arg3;
- (void)p_hideHud:(id)arg1 afterDelay:(double)arg2;
- (id)p_showHudWithMode:(long long)arg1 text:(id)arg2;
- (void)p_reloadTableView;
- (__wrap_iter_8791b205)p_findAlert:(unsigned long long)arg1;
- (void)p_delete_remind:(id)arg1;
- (void)p_loadData:(_Bool)arg1;
- (void)p_sortRemindListByTimeAndId;
- (void)scrollToBottomWithAnimation:(_Bool)arg1;
- (void)p_initNavigation;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

