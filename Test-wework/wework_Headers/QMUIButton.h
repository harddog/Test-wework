//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CALayer, UIColor;

@interface QMUIButton : UIButton
{
    _Bool _adjustsTitleTintColorAutomatically;
    _Bool _adjustsImageTintColorAutomatically;
    _Bool _adjustsButtonWhenHighlighted;
    _Bool _adjustsButtonWhenDisabled;
    int _imagePosition;
    UIColor *_highlightedBackgroundColor;
    UIColor *_highlightedBorderColor;
    CALayer *_highlightedBackgroundLayer;
    UIColor *_originBorderColor;
}

@property(retain, nonatomic) UIColor *originBorderColor; // @synthesize originBorderColor=_originBorderColor;
@property(retain, nonatomic) CALayer *highlightedBackgroundLayer; // @synthesize highlightedBackgroundLayer=_highlightedBackgroundLayer;
@property(nonatomic) int imagePosition; // @synthesize imagePosition=_imagePosition;
@property(retain, nonatomic) UIColor *highlightedBorderColor; // @synthesize highlightedBorderColor=_highlightedBorderColor;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(nonatomic) _Bool adjustsButtonWhenDisabled; // @synthesize adjustsButtonWhenDisabled=_adjustsButtonWhenDisabled;
@property(nonatomic) _Bool adjustsButtonWhenHighlighted; // @synthesize adjustsButtonWhenHighlighted=_adjustsButtonWhenHighlighted;
@property(nonatomic) _Bool adjustsImageTintColorAutomatically; // @synthesize adjustsImageTintColorAutomatically=_adjustsImageTintColorAutomatically;
@property(nonatomic) _Bool adjustsTitleTintColorAutomatically; // @synthesize adjustsTitleTintColorAutomatically=_adjustsTitleTintColorAutomatically;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)updateImageRenderingModeIfNeeded;
- (void)updateTitleColorIfNeeded;
- (void)adjustsButtonHighlighted;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didInitialized;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

