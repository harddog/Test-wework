//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXCNetWorkDelegate-Protocol.h"

@class CTTelephonyNetworkInfo, NSMutableDictionary, NSString;

@interface WXCUserNetTypeMgr : NSObject <WXCNetWorkDelegate>
{
    NSMutableDictionary *_userNetTypeCacheDic;
    CTTelephonyNetworkInfo *_telephonyNetworkInfo;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) CTTelephonyNetworkInfo *telephonyNetworkInfo; // @synthesize telephonyNetworkInfo=_telephonyNetworkInfo;
@property(retain, nonatomic) NSMutableDictionary *userNetTypeCacheDic; // @synthesize userNetTypeCacheDic=_userNetTypeCacheDic;
- (id)getUserKey:(int)arg1;
- (void)onRespData:(id)arg1 taskId:(int)arg2 retCode:(int)arg3 retBuf:(id)arg4 backfillData:(id)arg5;
- (int)getNetTypeBelowIOS7;
- (int)getNetTypeByNetworkStatus:(_Bool)arg1;
- (int)getNetTypeAboveIOS7;
- (int)getSelfNetType;
- (void)refreshUserNetType:(int)arg1;
- (id)getVoipBadWording:(int)arg1;
- (_Bool)isVoipBadNetwork:(int)arg1;
- (int)getUserNetType:(int)arg1;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

