//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WWKUpdateMobileControllerDelegate-Protocol.h"

@class CTCallCenter, NSString, UIViewController, WWPstnTalkWindow;
@protocol WWPstnTalkMgrDelegate;

@interface WWPstnTalkMgr : NSObject <WWKUpdateMobileControllerDelegate>
{
    unsigned int _mRoomID;
    unsigned long long _mRoomKey;
    unsigned long long _mPstnClientID;
    long long _statusBarStyle;
    id <WWPstnTalkMgrDelegate> _mDelegate;
    WWPstnTalkWindow *_mPstnTalkWindow;
    CTCallCenter *_mCallCenter;
    CDUnknownBlockType _mCallHandler;
    UIViewController *_mGuideViewRootController;
    double _mCallDurationStart;
    double _mCallDurationEnd;
}

+ (_Bool)isPstnMissCallLogMsg:(struct Message *)arg1;
+ (id)shareInstance;
@property(nonatomic) double mCallDurationEnd; // @synthesize mCallDurationEnd=_mCallDurationEnd;
@property(nonatomic) double mCallDurationStart; // @synthesize mCallDurationStart=_mCallDurationStart;
@property(nonatomic) __weak UIViewController *mGuideViewRootController; // @synthesize mGuideViewRootController=_mGuideViewRootController;
@property(copy, nonatomic) CDUnknownBlockType mCallHandler; // @synthesize mCallHandler=_mCallHandler;
@property(retain, nonatomic) CTCallCenter *mCallCenter; // @synthesize mCallCenter=_mCallCenter;
@property(retain, nonatomic) WWPstnTalkWindow *mPstnTalkWindow; // @synthesize mPstnTalkWindow=_mPstnTalkWindow;
@property(nonatomic) id <WWPstnTalkMgrDelegate> mDelegate; // @synthesize mDelegate=_mDelegate;
- (void).cxx_destruct;
- (void)makeCallInConversationBubbleForIpadWithPhoneNumber:(id)arg1;
- (void)makeCallForIpadWithPhoneNumber:(id)arg1 withUser:(scoped_refptr_e1f85e48)arg2 otherParas:(id)arg3;
- (id)getKeyForCrop:(id)arg1;
- (_Bool)hasShownFirstUsePstnAlert;
- (void)markHasShownFirstUsePstnAlert;
- (_Bool)isNeedShowFirstUsePstnAlert;
- (_Bool)isPstnHasRemain;
- (_Bool)checkConditionCanMakePstnCall;
- (_Bool)canDirectPstnCall:(scoped_refptr_e1f85e48)arg1 phoneNumber:(id)arg2 isSureSeatNumber:(_Bool)arg3;
- (id)userOfficePhoneNumber:(scoped_refptr_e1f85e48)arg1 userCorpInfo:(const struct CorpBriefInfo *)arg2;
- (_Bool)userPstnOfficePhoneEnabled:(scoped_refptr_e1f85e48)arg1 userCorpInfo:(const struct CorpBriefInfo *)arg2;
- (_Bool)p_isCorpBriefInfoOfficePhoneEnabled:(const struct CorpBriefInfo *)arg1;
- (_Bool)isUserCorpHideOfficePhone:(scoped_refptr_e1f85e48)arg1;
- (_Bool)isUserHideOfficePhoneForOutSideContact:(scoped_refptr_e1f85e48)arg1;
- (void)verifyMobileSuccessful:(struct PhoneItem)arg1;
- (void)manualSetStatusBarStyle:(long long)arg1;
- (id)currentControllerFromNavigationController:(id)arg1;
- (id)currentControllerFromTabbarController:(id)arg1;
- (id)currentViewController;
- (void)jumpToPstnPhoneGuideController;
- (_Bool)checkUserHaveMobilePhoneAtDialViewController:(id)arg1;
- (_Bool)checkUserHaveMobilePhoneAtController:(id)arg1;
- (_Bool)checkIsInTalking;
- (_Bool)_calleeIsSelfAtPeerID:(unsigned long long)arg1 peerNumber:(id)arg2 localContactID:(id)arg3;
- (_Bool)_networkAvailableAtPeerID:(unsigned long long)arg1 peerNumber:(id)arg2 localContactID:(id)arg3 otherParas:(id)arg4;
- (_Bool)isInSystemCall;
- (void)unregistNormalCallBack;
- (void)registNormalCallBack;
- (void)checkAndClosePstnSingleTalkWindowWithRoomID:(unsigned int)arg1 roomKey:(unsigned long long)arg2 callerVid:(unsigned long long)arg3;
- (_Bool)isSvrOpenUsePstnCallDirectly;
- (_Bool)isPstnOfficePhoneEnabled;
- (_Bool)isPSTNFeatureEnabled;
- (_Bool)isInSingleCalling;
- (void)_showInvalidPhoneTips:(id)arg1;
- (void)closePstnTalkView;
- (void)_talkWindowHideAnim:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)_talkWindowShowAnim:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)openPstnTalkView:(unsigned long long)arg1 peerNumber:(id)arg2 localContactID:(id)arg3 otherParas:(id)arg4 showAnimCompleteAction:(CDUnknownBlockType)arg5;
- (void)openPstnTalkView:(unsigned long long)arg1 peerNumber:(id)arg2 localContactID:(id)arg3 otherInfo:(id)arg4 showAnimCompleteAction:(CDUnknownBlockType)arg5;
- (void)openPstnTalkView:(unsigned long long)arg1 peerNumber:(id)arg2 localContactID:(id)arg3 otherParas:(id)arg4;
- (_Bool)p_checkPstnRangeLimitedWithVid:(unsigned long long)arg1 phoneNumber:(id)arg2;
- (void)openPstnTalkView:(scoped_refptr_e1f85e48)arg1 peerNumber:(id)arg2 otherParas:(id)arg3 showAnimCompleteAction:(CDUnknownBlockType)arg4;
- (void)showFirstUsePstnAlert:(scoped_refptr_e1f85e48)arg1 phoneNumber:(id)arg2 otherParas:(id)arg3 isMobilePhone:(_Bool)arg4;
- (void)doCallPstn:(scoped_refptr_e1f85e48)arg1 phoneNumber:(id)arg2 otherParas:(id)arg3 isMobilePhone:(_Bool)arg4;
- (_Bool)isPhoneCanUsePstn:(id)arg1 isCheckMobileVaild:(_Bool)arg2;
- (void)makePhoneCallWithUser:(scoped_refptr_e1f85e48)arg1 phoneNumber:(id)arg2 otherParas:(id)arg3 isMobilePhone:(_Bool)arg4 showUserChooseActionsheet:(CDUnknownBlockType)arg5 systemCallBlock:(CDUnknownBlockType)arg6;
- (void)resetTalkInfo;
- (void)resetMgr;
- (void)p_checkAndReportOnce;
- (id)init;
- (unsigned long long)genPstnClientID;
- (void)sendPstnReportReq:(int)arg1 curRoomID:(unsigned int)arg2 roomKey:(unsigned long long)arg3 reportInfo:(const struct WWPstnCBReportInfo *)arg4;
- (void)sendPstnCancelReq;
- (void)sendPstnInviteReq:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

