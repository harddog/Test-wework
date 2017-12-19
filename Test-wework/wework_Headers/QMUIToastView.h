//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, QMUIToastAnimator;
@protocol QMUIToastViewDelegate;

@interface QMUIToastView : UIView
{
    _Bool _removeFromSuperViewWhenHide;
    UIView *_parentView;
    id <QMUIToastViewDelegate> _delegate;
    QMUIToastAnimator *_toastAnimator;
    long long _toastPosition;
    UIView *_maskView;
    UIView *_backgroundView;
    UIView *_contentView;
    NSTimer *_hideDelayTimer;
    struct CGPoint _offset;
    struct UIEdgeInsets _marginInsets;
}

+ (void)setDefaultAppearance;
+ (void)initialize;
+ (id)allToastInView:(id)arg1;
+ (id)toastInView:(id)arg1;
+ (_Bool)hideAllToastInView:(id)arg1 animated:(_Bool)arg2;
@property(nonatomic) __weak NSTimer *hideDelayTimer; // @synthesize hideDelayTimer=_hideDelayTimer;
@property(nonatomic) struct UIEdgeInsets marginInsets; // @synthesize marginInsets=_marginInsets;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) _Bool removeFromSuperViewWhenHide; // @synthesize removeFromSuperViewWhenHide=_removeFromSuperViewWhenHide;
@property(nonatomic) long long toastPosition; // @synthesize toastPosition=_toastPosition;
@property(retain, nonatomic) QMUIToastAnimator *toastAnimator; // @synthesize toastAnimator=_toastAnimator;
@property(nonatomic) __weak id <QMUIToastViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
- (void).cxx_destruct;
- (void)handleHideTimer:(id)arg1;
- (void)hideAnimated:(_Bool)arg1 afterDelay:(double)arg2;
- (void)didHide;
- (void)hideAnimated:(_Bool)arg1;
- (void)didShow;
- (void)showAnimated:(_Bool)arg1;
- (void)statusBarOrientationDidChange:(id)arg1;
- (void)removeNotifications;
- (void)registerNotifications;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (id)defaultContentView;
- (id)defaultBackgrondView;
- (id)defaultAnimator;
- (void)commonInit;
- (void)dealloc;
- (id)initWithView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

