//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NativeCodeHandlerBase.h"

#import "WebviewJSVoiceHelperRecordDelegate-Protocol.h"

@class JWeixinCallWrapper, NSString;

@interface JWeixinNativeCodeHandler_startRecord : NativeCodeHandlerBase <WebviewJSVoiceHelperRecordDelegate>
{
    JWeixinCallWrapper *jWeixinCallWrapper_;
}

- (void).cxx_destruct;
- (void)WebviewJSVoiceHelperStopRecordFail;
- (void)WebviewJSVoiceHelperStopRecordTooShort;
- (void)WebviewJSVoiceHelperRecordTooLong:(id)arg1;
- (void)handleJSCallInNativeCode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
