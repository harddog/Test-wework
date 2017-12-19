//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UITableView;
@protocol WWKMarketCategoryListViewDelegate;

@interface WWKMarketCategoryListView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UIView *_maskView;
    UIView *_gestureView;
    UIView *_topContainerView;
    long long _categoryId;
    vector_afc6b55d _dataSource;
    _Bool _isAnimating;
    id <WWKMarketCategoryListViewDelegate> _delegate;
    UITableView *_tableView;
}

@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WWKMarketCategoryListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateUI;
- (double)_tableHeight;
- (id)_categoryTitle:(id)arg1 withCategoryCount:(unsigned long long)arg2;
- (void)showOrDimiss:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateSelectedCategory:(int)arg1;
- (void)onTapView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)layoutSubviews;
- (void)updateDataSource:(vector_afc6b55d)arg1;
- (id)initWithFrame:(struct CGRect)arg1 dataSource:(vector_afc6b55d)arg2 selectedIndex:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

