//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSDictionary, UIColor, UIImageView, UIView;

@interface WWKSimpleTableViewCell : UITableViewCell
{
    UIView *_separatorView;
    UIView *_topSeparator;
    double _topSeparatorLineLeftEdge;
    double _separatorLeftEdge;
    double _separatorLineLeftEdge;
    unsigned long long _textLabelFontSize;
    unsigned long long _detailTextLabelFontSize;
    UIImageView *_redPoint;
    UIView *_backgroundView;
    UIColor *_separatorColor;
    UIColor *_topSeparatorColor;
    NSDictionary *_userInfo;
    UIColor *_cellBackgroundColor;
    UIColor *_cellHighlightedBackgroundColor;
}

@property(retain, nonatomic) UIColor *cellHighlightedBackgroundColor; // @synthesize cellHighlightedBackgroundColor=_cellHighlightedBackgroundColor;
@property(retain, nonatomic) UIColor *cellBackgroundColor; // @synthesize cellBackgroundColor=_cellBackgroundColor;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)adjustSeparatorPosForApproval;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setShowRedPoint:(_Bool)arg1;
- (void)setCellDisable:(_Bool)arg1;
- (void)setDetailLabelFontSize:(double)arg1;
- (void)setLabelFontSize:(unsigned long long)arg1;
- (void)setSeparatorLineLeftEdge:(double)arg1;
- (void)setSeparatorLeftEdge:(double)arg1;
- (void)setBottomSeparatorColor:(id)arg1;
- (void)showSeparator:(_Bool)arg1;
- (void)setTopSeparatorLeftEdge:(double)arg1;
- (void)setTopSeparatorColor:(id)arg1;
- (void)showTopSeparator:(_Bool)arg1;
- (void)initSubview;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

