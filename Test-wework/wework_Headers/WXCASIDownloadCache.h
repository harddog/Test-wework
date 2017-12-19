//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXCASICacheDelegate-Protocol.h"

@class NSRecursiveLock, NSString;

@interface WXCASIDownloadCache : NSObject <WXCASICacheDelegate>
{
    int defaultCachePolicy;
    NSString *storagePath;
    NSRecursiveLock *accessLock;
    _Bool shouldRespectCacheControlHeaders;
}

+ (id)keyForURL:(id)arg1;
+ (_Bool)serverAllowsResponseCachingForRequest:(id)arg1;
+ (id)wxcfileExtensionsToHandleAsHTML;
+ (id)sharedCache;
+ (void)initialize;
@property _Bool shouldRespectCacheControlHeaders; // @synthesize shouldRespectCacheControlHeaders;
@property(retain) NSRecursiveLock *accessLock; // @synthesize accessLock;
- (_Bool)canUseCachedDataForRequest:(id)arg1;
- (void)clearCachedResponsesForStoragePolicy:(int)arg1;
@property(nonatomic) int defaultCachePolicy; // @synthesize defaultCachePolicy;
- (_Bool)isCachedDataCurrentForRequest:(id)arg1;
- (void)removeCachedDataForRequest:(id)arg1;
- (void)removeCachedDataForURL:(id)arg1;
- (id)pathToStoreCachedResponseHeadersForRequest:(id)arg1;
- (id)pathToStoreCachedResponseDataForRequest:(id)arg1;
- (id)pathToFile:(id)arg1;
- (id)pathToCachedResponseHeadersForURL:(id)arg1;
- (id)pathToCachedResponseDataForURL:(id)arg1;
- (id)cachedResponseDataForURL:(id)arg1;
- (id)cachedResponseHeadersForURL:(id)arg1;
- (void)storeResponseForRequest:(id)arg1 maxAge:(double)arg2;
- (id)expiryDateForRequest:(id)arg1 maxAge:(double)arg2;
- (void)updateExpiryForRequest:(id)arg1 maxAge:(double)arg2;
@property(retain, nonatomic) NSString *storagePath; // @synthesize storagePath;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

