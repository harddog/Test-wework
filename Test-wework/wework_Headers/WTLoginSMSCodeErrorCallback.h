//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WTLoginCallback.h"

@class WloginErrInfo;

@interface WTLoginSMSCodeErrorCallback : WTLoginCallback
{
    WloginErrInfo *_errorMsg;
}

@property(retain, nonatomic) WloginErrInfo *errorMsg; // @synthesize errorMsg=_errorMsg;
- (void).cxx_destruct;

@end

