//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class WWCMRButton;

@interface WWCMRVCardTopBar : UIView
{
    WWCMRButton *_backBtn;
    WWCMRButton *_opBtn;
}

@property(retain, nonatomic) WWCMRButton *opBtn; // @synthesize opBtn=_opBtn;
@property(retain, nonatomic) WWCMRButton *backBtn; // @synthesize backBtn=_backBtn;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)p_createBarBtnWithTitle:(id)arg1;
- (void)btn_onOp;
- (void)btn_onBack;
- (void)p_init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

