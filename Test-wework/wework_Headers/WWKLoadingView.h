//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface WWKLoadingView : UIView
{
    _Bool _animating;
    UIActivityIndicatorView *_activity;
    UILabel *_tipTextLabel;
}

@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) UILabel *tipTextLabel; // @synthesize tipTextLabel=_tipTextLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activity; // @synthesize activity=_activity;
- (void).cxx_destruct;
- (void)stop;
- (_Bool)isAnimating;
- (void)start;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

