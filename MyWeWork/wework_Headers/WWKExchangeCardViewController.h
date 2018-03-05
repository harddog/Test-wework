//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKBaseLayeredCardViewController.h"

@class WWKSendApplicationCard;

@interface WWKExchangeCardViewController : WWKBaseLayeredCardViewController
{
    WWKSendApplicationCard *_myCardView;
    WWKSendApplicationCard *_otherCardView;
    scoped_refptr_e1f85e48 _user;
    CDUnknownBlockType _handler;
}

@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) scoped_refptr_e1f85e48 user; // @synthesize user=_user;
@property(retain, nonatomic) WWKSendApplicationCard *otherCardView; // @synthesize otherCardView=_otherCardView;
@property(retain, nonatomic) WWKSendApplicationCard *myCardView; // @synthesize myCardView=_myCardView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (double)scrollDismissThreshold;
- (double)scrollFadeThreshold;
- (double)scrollContentHeight;
- (double)buttonMargin;
- (void)settingDidClick:(id)arg1;
- (void)dismissLayout;
- (void)stableLayout;
- (void)privacyFinishLayout;
- (void)privacyIdleLayout;
- (void)finishSendLayout2;
- (void)finishSendLayout1;
- (void)doSendLayout;
- (void)prepareSendLayout;
- (void)idleLayout3;
- (void)idleLayout2;
- (void)initialLayout;
- (void)scrollViewDidScroll:(id)arg1;
- (void)cancelDidClick:(id)arg1;
- (void)sendDidClick:(id)arg1;
- (void)privacyDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUser:(scoped_refptr_e1f85e48)arg1 handler:(CDUnknownBlockType)arg2;

@end
