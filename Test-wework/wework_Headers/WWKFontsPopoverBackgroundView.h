//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPopoverBackgroundView.h>

@class UIImageView;

@interface WWKFontsPopoverBackgroundView : UIPopoverBackgroundView
{
    UIImageView *_borderImageView;
    UIImageView *_arrowView;
    double _arrowOffset;
    unsigned long long _arrowDirection;
}

+ (_Bool)wantsDefaultContentAppearance;
+ (double)arrowBase;
+ (double)arrowHeight;
+ (struct UIEdgeInsets)contentViewInsets;
- (void).cxx_destruct;
- (void)setArrowDirection:(unsigned long long)arg1;
- (unsigned long long)arrowDirection;
- (void)setArrowOffset:(double)arg1;
- (double)arrowOffset;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

