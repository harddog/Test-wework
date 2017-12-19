//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSMutableArray, WWKCorpAppInfoHeaderView;

@interface WWKCorpAppInfoController : UITableViewController
{
    NSMutableArray *_cellTypes;
    struct WSNewCorpAppDetail _corpAppDetail;
    WWKCorpAppInfoHeaderView *_headerView;
    struct AppVisibleRangeData _visible_info;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)notifyAppInfoChange;
- (void)onEditOwnApp;
- (void)editOwnApp;
- (void)deleteThirdApp;
- (void)onEditThirdApp;
- (void)removeCellType:(unsigned long long)arg1;
- (id)visibleRangeStr;
- (id)indexPathWithType:(unsigned long long)arg1;
- (id)p_mutableCopyWithCellTypes:(id)arg1;
- (id)p_cellSubTitlesWithType:(unsigned long long)arg1;
- (id)p_cellTitlesWithType:(unsigned long long)arg1;
- (id)footerTextWithSection:(long long)arg1;
- (_Bool)hasCorpMail;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)headerView;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)backButtonTitle;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setData:(const struct WSNewCorpAppDetail *)arg1;
- (id)initWithApp:(const struct WSNewCorpAppDetail *)arg1;

@end

