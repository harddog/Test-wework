//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKOrganizationCell.h"

@class UIImageView;

@interface WXCOrganUserMultiSelectCell : WWKOrganizationCell
{
    UIImageView *_checkView;
    long long _checkState;
}

@property(nonatomic) long long checkState; // @synthesize checkState=_checkState;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateUI;
- (void)setDepartmentItem:(scoped_refptr_85c18dd7)arg1;
- (void)setUserItem:(const scoped_refptr_e1f85e48 *)arg1 showCompleteName:(_Bool)arg2;
- (void)setUserItem:(const scoped_refptr_e1f85e48 *)arg1 underDepartmentID:(unsigned long long)arg2;
- (void)_setupCheckView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

