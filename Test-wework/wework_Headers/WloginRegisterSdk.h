//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WloginTranCallbackProtocol-Protocol.h"

@class NSString;

@interface WloginRegisterSdk : NSObject <WloginTranCallbackProtocol>
{
}

- (id)phoneNoForReg;
- (void)tranFailed:(int)arg1 withMsg:(id)arg2;
- (void)tranSuccessWithData:(id)arg1;
- (int)registerGetAccount:(id)arg1;
- (int)registerSubmitSmsCode:(id)arg1;
- (int)registerResendSms;
- (int)registerCheckUpSmsState:(id)arg1;
- (int)registerCheckPicCode:(id)arg1 andType:(unsigned char)arg2;
- (int)registerCheckAccount:(id)arg1 andType:(int)arg2;
- (void)resetRegProcess;
- (void)setPicType:(int)arg1;
- (void)setCountry:(int)arg1 andLanguage:(int)arg2;
- (void)dealloc;
- (id)initWithRegWtloginSdk:(id)arg1 andCountry:(int)arg2 andLang:(int)arg3 andAppid:(unsigned int)arg4 andDelegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

