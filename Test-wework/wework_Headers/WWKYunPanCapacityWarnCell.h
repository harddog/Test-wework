//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface WWKYunPanCapacityWarnCell : UITableViewCell
{
    UIImageView *_warnImageVw;
    UILabel *_warnLabel;
}

@property(retain, nonatomic) UILabel *warnLabel; // @synthesize warnLabel=_warnLabel;
@property(retain, nonatomic) UIImageView *warnImageVw; // @synthesize warnImageVw=_warnImageVw;
- (void).cxx_destruct;
- (void)showWarningWithTips:(id)arg1;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

