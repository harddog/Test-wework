//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WWKGmailOAuthRequester : NSObject
{
}

+ (void)setProxyForRequest:(id)arg1;
+ (id)post:(id)arg1 parameters:(id)arg2 useProxy:(_Bool)arg3 error:(id *)arg4;
+ (id)get:(id)arg1 parameters:(id)arg2 useProxy:(_Bool)arg3 error:(id *)arg4;
+ (void)aync_requestTokenWithRefreshToken:(id)arg1 useProxy:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)requestTokenWithRefreshToken:(id)arg1 useProxy:(_Bool)arg2 error:(id *)arg3;
+ (id)requestTokensWithCode:(id)arg1 useProxy:(_Bool)arg2 error:(id *)arg3;
+ (id)requestEmailWithAccessToken:(id)arg1 useProxy:(_Bool)arg2 error:(id *)arg3;

@end

