//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, WAAppTaskReferrerInfo;

@interface WALoadingViewOpenWeAppInfo : NSObject
{
    unsigned int _debugMode;
    NSString *_appID;
    WAAppTaskReferrerInfo *_backReferrerInfo;
}

@property(retain, nonatomic) WAAppTaskReferrerInfo *backReferrerInfo; // @synthesize backReferrerInfo=_backReferrerInfo;
@property(nonatomic) unsigned int debugMode; // @synthesize debugMode=_debugMode;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void).cxx_destruct;

@end

