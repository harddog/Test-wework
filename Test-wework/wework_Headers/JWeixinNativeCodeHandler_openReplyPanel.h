//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NativeCodeHandlerBase.h"

#import "WWKCommonInputToolBarControllerDelegate-Protocol.h"

@class JWeixinCallWrapper, NSString;

@interface JWeixinNativeCodeHandler_openReplyPanel : NativeCodeHandlerBase <WWKCommonInputToolBarControllerDelegate>
{
    JWeixinCallWrapper *_jWeixinCallWrapper;
}

- (void).cxx_destruct;
- (void)inputToolbar:(id)arg1 didCancelSendText:(id)arg2;
- (void)inputToolbar:(id)arg1 didSendText:(id)arg2;
- (void)handleJSCallInNativeCode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

