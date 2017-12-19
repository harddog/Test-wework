//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "WWKInputTeamDescriptionControllerDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface WWKManageTeamController : UITableViewController <WWKInputTeamDescriptionControllerDelegate>
{
    NSMutableArray *_cellTypes;
    struct CorpConfig corp_config_;
    shared_ptr_0a91a37f application_records_;
    _Bool _needUpdateUI;
    _Bool _enableAutoNotify;
    scoped_refptr_fd92d7bf _corpConversation;
    _Bool _needLargePaddingAutoNotifyCell;
}

@property(nonatomic) _Bool needLargePaddingAutoNotifyCell; // @synthesize needLargePaddingAutoNotifyCell=_needLargePaddingAutoNotifyCell;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)subclassNeedResponsToCellType:(long long)arg1;
- (void)removeCellType:(long long)arg1;
- (id)mutableCopyWithCellTypes:(id)arg1;
- (long long)applyBadgeNumber;
- (id)indexPathWithCellType:(long long)arg1;
- (void)inputTeamDescriptionController:(id)arg1 willFinishEditWithText:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)fontSizeChange;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)cellTitleForIndexPath:(id)arg1;
- (long long)cellTypeWithIndexPath:(id)arg1;
- (void)onAcceptMemberValueChanged:(_Bool)arg1;
- (void)onAcceptMemberValueChanged:(_Bool)arg1 animated:(_Bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)autoNotifyTipText;
- (id)InviteTipText;
- (id)CorpConvDescriptionTipText;
- (id)initWithStyle:(long long)arg1;
- (id)initWithCellTypes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

