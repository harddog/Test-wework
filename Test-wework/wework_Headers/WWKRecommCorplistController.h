//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "WWKBottomButtonCellDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol WWKRecommCorplistControllerDelegate;

@interface WWKRecommCorplistController : UITableViewController <WWKBottomButtonCellDelegate>
{
    vector_ae5f2530 _recommCorpList;
    long long _selectedCorpIndex;
    NSMutableDictionary *_heightOfRows;
    _Bool _loading;
    id <WWKRecommCorplistControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WWKRecommCorplistControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)p_updateErrorMsg:(id)arg1;
- (void)p_endLoginWithDelay:(double)arg1;
- (void)p_beginLogin;
- (void)onBottomButtonClicked;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)p_pushToVirtualVerifyCodeController:(id)arg1 isMailAddr:(_Bool)arg2;
- (void)onJoinCorp;
- (void)setRecommCorpList:(const vector_ae5f2530 *)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

