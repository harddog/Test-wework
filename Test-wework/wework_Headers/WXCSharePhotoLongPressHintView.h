//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXCPopupView.h"

@class QMUILabel, UIImageView;

@interface WXCSharePhotoLongPressHintView : WXCPopupView
{
    QMUILabel *_hintLabel;
    UIImageView *_iconImgView;
}

- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateType:(long long)arg1;
- (void)updateTips:(id)arg1;
- (void)p_initIconImgView;
- (void)initUIWithText:(id)arg1;
- (id)initWithPopupSourcePosition:(struct CGPoint)arg1 IntroText:(id)arg2;

@end

