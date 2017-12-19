//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WWKThirdAppFloatViewDelegate-Protocol.h"

@class NSString, UIButton;
@protocol WWKThirdAppInputToolbarViewDelegate;

@interface WWKThirdAppInputToolbarView : UIView <WWKThirdAppFloatViewDelegate>
{
    struct unique_ptr<CRTX::WSMenuInfo, std::__1::default_delete<CRTX::WSMenuInfo>> _menuInfo;
    id <WWKThirdAppInputToolbarViewDelegate> _delegate;
    UIButton *_switchToNormalButton;
    scoped_refptr_fd92d7bf _conversation;
}

@property(nonatomic) scoped_refptr_fd92d7bf conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) UIButton *switchToNormalButton; // @synthesize switchToNormalButton=_switchToNormalButton;
@property(nonatomic) __weak id <WWKThirdAppInputToolbarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)wwkThirdAppFloatViewDidClickSubButton:(struct WSMenuInfo_Button)arg1;
- (void)p_onThirdPartyButtonClick:(id)arg1;
- (void)p_onPressSwitchAppNormalButton:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andConv:(scoped_refptr_fd92d7bf)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

