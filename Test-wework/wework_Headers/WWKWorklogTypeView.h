//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView;
@protocol WWKWorklogTypeViewDelegate;

@interface WWKWorklogTypeView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UIView *_maskView;
    UIView *_gestureView;
    UIView *_topContainerView;
    NSArray *_typeArray;
    int _index;
    id <WWKWorklogTypeViewDelegate> _delegate;
    UITableView *_tableView;
}

@property(nonatomic) int index; // @synthesize index=_index;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WWKWorklogTypeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showOrDimiss:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onTapView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 selectedIndex:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

