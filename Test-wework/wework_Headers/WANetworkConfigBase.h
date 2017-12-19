//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WANetworkConfigBaseDataSource-Protocol.h"

@class NSArray, NSString;

@interface WANetworkConfigBase : NSObject <WANetworkConfigBaseDataSource>
{
    NSString *_appID;
    unsigned long long _appVersion;
    unsigned int _timeoutMS;
    NSString *_httpHeaderReferer;
    NSString *_mmUserAgent;
    NSArray *_arrCertData;
    NSArray *_arrDomainList;
    NSString *_httpHeaderMode;
    NSArray *_arrHttpHeaderBlackList;
    NSArray *_arrHttpHeaderWhiteList;
}

+ (id)certificateDataTrustChainForServerTrust:(struct __SecTrust *)arg1;
+ (_Bool)validateChallenge:(id)arg1 withCertificateDataArray:(id)arg2;
@property(retain, nonatomic) NSArray *arrHttpHeaderWhiteList; // @synthesize arrHttpHeaderWhiteList=_arrHttpHeaderWhiteList;
@property(retain, nonatomic) NSArray *arrHttpHeaderBlackList; // @synthesize arrHttpHeaderBlackList=_arrHttpHeaderBlackList;
@property(retain, nonatomic) NSString *httpHeaderMode; // @synthesize httpHeaderMode=_httpHeaderMode;
@property(retain, nonatomic) NSArray *arrDomainList; // @synthesize arrDomainList=_arrDomainList;
@property(retain, nonatomic) NSArray *arrCertData; // @synthesize arrCertData=_arrCertData;
@property(retain, nonatomic) NSString *mmUserAgent; // @synthesize mmUserAgent=_mmUserAgent;
@property(retain, nonatomic) NSString *httpHeaderReferer; // @synthesize httpHeaderReferer=_httpHeaderReferer;
@property(nonatomic) unsigned int timeoutMS; // @synthesize timeoutMS=_timeoutMS;
- (void).cxx_destruct;
- (unsigned int)configDefaultTimeoutMS;
- (unsigned int)configTimeoutMS;
- (unsigned int)configMaxTimeoutMS;
- (id)configDomainList;
- (void)loadConfig:(id)arg1;
- (_Bool)validateChallenge:(id)arg1;
- (id)filterHttpHeader:(id)arg1;
- (_Bool)checkDomainList:(id)arg1;
- (id)initWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

