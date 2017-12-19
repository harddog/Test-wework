//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXApiManagerDelegate-Protocol.h"

@class NSString;
@protocol WWCorpPaymentPAYProtocol;

@interface WWCorpPaymentMgr : NSObject <WXApiManagerDelegate>
{
    int _wxpayStatus;
    id <WWCorpPaymentPAYProtocol> _payDelegate;
    NSString *_currPrepayId;
}

+ (id)msgContentDetailFromCorpPayAccountedInfo:(const struct PayAccountedInfo *)arg1;
+ (void)jumpToDetailCtrlrFromQRItemDao:(const struct ReceiptItemDao *)arg1 naviCtrlr:(id)arg2;
+ (void)jumpToDetailCtrlrFromAccountedInfo:(const struct PayAccountedInfo *)arg1 naviCtrlr:(id)arg2;
+ (id)amountStringFromCorpPayAccountedInfo:(const struct PayAccountedInfo *)arg1;
+ (void)fetchCreatorAccountedInfoAndJumpToInfoControllerWithProjectId:(const struct PayAccountedInfo *)arg1 naviCtrlr:(id)arg2;
+ (_Bool)wechatScanQRPayAndLaunchSao1saoWithURLString:(id)arg1;
+ (void)fetchReceiptItemAndJumpToInfoControllerWithProjectId:(struct C2BMsgInfo)arg1 naviCtrlr:(id)arg2;
+ (vector_30e076f0)getReceiptPeopleListFromItemDao:(const struct ReceiptItemDao *)arg1;
+ (struct ReceiptPerson)getFirstPersonFromItemDao:(const struct ReceiptItemDao *)arg1;
+ (struct ReceiptPerson)getSelfReceiptPersonFromItemDao:(const struct ReceiptItemDao *)arg1;
+ (_Bool)ackMsgSupportForExtType:(int)arg1;
+ (_Bool)msgSupportForExtType:(int)arg1;
+ (_Bool)featureEnabled;
+ (_Bool)isCorpPaymentAccountedOrReceiptOrQRScanReceiptMessage:(const scoped_refptr_c1fa851d *)arg1;
+ (void)p_showAlertWithLocalCode:(int)arg1 svrCode:(int)arg2 otherInfo:(id)arg3;
+ (void)p_showDebugPayAlertWithLocalCode:(int)arg1 svrCode:(int)arg2 otherInfo:(id)arg3;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *currPrepayId; // @synthesize currPrepayId=_currPrepayId;
@property(nonatomic) int wxpayStatus; // @synthesize wxpayStatus=_wxpayStatus;
@property(nonatomic) __weak id <WWCorpPaymentPAYProtocol> payDelegate; // @synthesize payDelegate=_payDelegate;
- (void).cxx_destruct;
- (void)managerPayRespResult:(int)arg1;
- (_Bool)p_checkWxHasInstallAndBind:(_Bool)arg1;
- (void)p_onBecomeActive;
- (void)doWxPayWithQueryResult:(const struct QueryWXPrepayResult *)arg1;
- (void)p_unRegisterForegroundNotification;
- (void)p_registerForegroundNotification;
- (void)clearCorpWXPayStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

