//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "WWKBatchInstallSettingViewDelegate-Protocol.h"
#import "WWKSelectContactsViewControllerDelegate-Protocol.h"
#import "WWKWXWebViewControllerDelegate-Protocol.h"
#import "WWKYunPanSettingViewControlerDelegate-Protocol.h"

@class NSString, WWKBatchInstallSettingView, WWKSelectContactsViewController;

@interface WWKBatchSettingViewController : UIViewController <WWKSelectContactsViewControllerDelegate, WWKYunPanSettingViewControlerDelegate, WWKBatchInstallSettingViewDelegate, WWKWXWebViewControllerDelegate>
{
    vector_c253e700 _installApps;
    shared_ptr_acde9f7b _providerCorpInfo;
    _Bool _isSingleAppInstall;
    _Bool _isAnimating;
    CDUnknownBlockType _installFinishBlock;
    WWKSelectContactsViewController *_selectContactController;
    WWKBatchInstallSettingView *_batchSettingView;
    WWKBatchInstallSettingView *_splitSettingView;
    WWKBatchInstallSettingView *_currentSettingView;
    unsigned long long _handleSection;
}

@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) unsigned long long handleSection; // @synthesize handleSection=_handleSection;
@property(retain, nonatomic) WWKBatchInstallSettingView *currentSettingView; // @synthesize currentSettingView=_currentSettingView;
@property(retain, nonatomic) WWKBatchInstallSettingView *splitSettingView; // @synthesize splitSettingView=_splitSettingView;
@property(retain, nonatomic) WWKBatchInstallSettingView *batchSettingView; // @synthesize batchSettingView=_batchSettingView;
@property(retain, nonatomic) WWKSelectContactsViewController *selectContactController; // @synthesize selectContactController=_selectContactController;
@property(copy, nonatomic) CDUnknownBlockType installFinishBlock; // @synthesize installFinishBlock=_installFinishBlock;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_doAfterInstallSuccess;
- (void)_extchangeToNextSettingStyle;
- (void)_gotoNextAfterSelectMember:(vector_89e6321f)arg1 withDepartmentList:(vector_a024b487)arg2 selectContactViewController:(id)arg3;
- (void)_selectNewMembersWithMembers:(vector_53938b46)arg1;
- (void)_selectMembersUseH5:(vector_53938b46)arg1;
- (void)_jumpToSettingViewControllerWithMember:(vector_53938b46)arg1;
- (void)_updateFinishItemEnableState;
- (id)_creatSettingViewForType:(unsigned long long)arg1;
- (struct AppVisibleRangeData)createVisibleRangeInfo:(id)arg1 isSelectAll:(_Bool)arg2;
- (struct AppVisibleRangeData)addDataWithRangeItems:(id)arg1 selectAll:(_Bool)arg2;
- (void)webViewController:(id)arg1 writeData:(id)arg2;
- (void)webViewController:(id)arg1 readData:(id *)arg2;
- (void)didWWKYunPanSettingViewControlerConfirmTotalMembers:(id)arg1 totalCppMembers:(vector_53938b46)arg2;
- (_Bool)canSelectDepartmentInSelectContactsViewController:(id)arg1;
- (void)selectContactsViewController:(id)arg1 didConfirmToSelectContacts:(vector_89e6321f)arg2;
- (void)selectContactsViewController:(id)arg1 didConfirmToSelectContacts:(vector_89e6321f)arg2 andDepartments:(vector_a024b487)arg3;
- (long long)numberOfMaxSelectedContacts:(id)arg1;
- (void)didBatchInstallSettingViewAskJumpToNextSettingStyle:(id)arg1;
- (void)didBatchInstallSettingViewAskJumpToMemberListViewController:(id)arg1 forSection:(unsigned long long)arg2 withMembers:(vector_53938b46)arg3;
- (void)didBatchInstallSettingViewAskSelectMember:(id)arg1 forSection:(unsigned long long)arg2 withMembers:(vector_53938b46)arg3;
- (void)onClickFinish:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)backButtonTitle;
- (void)viewDidLoad;
- (id)initWithApps:(vector_c253e700)arg1 isSingleAppInstall:(_Bool)arg2 serviceCorpInfomation:(shared_ptr_acde9f7b)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

