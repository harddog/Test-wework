//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WXOMTA : NSObject
{
    struct dispatch_queue_s *task_queue;
    NSString *_keyForKeyChain;
    NSString *_mtaCurrentPage;
    NSString *_lastPage;
}

+ (id)getMtaUDID;
+ (void)trackGameUser:(id)arg1 world:(id)arg2 level:(id)arg3 appkey:(id)arg4 isRealTime:(_Bool)arg5;
+ (void)trackGameUser:(id)arg1 world:(id)arg2 level:(id)arg3;
+ (void)reportAppMonitorStat:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;
+ (void)reportAppMonitorStat:(id)arg1;
+ (void)reportAccount:(id)arg1 type:(unsigned int)arg2 ext:(id)arg3 appkey:(id)arg4 isRealTime:(_Bool)arg5;
+ (void)reportAccount:(id)arg1 type:(unsigned int)arg2 ext:(id)arg3;
+ (void)reportQQ:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;
+ (void)reportQQ:(id)arg1;
+ (void)stopSession;
+ (void)startNewSession:(_Bool)arg1;
+ (void)startNewSession;
+ (void)trackCustomKeyValueEventDuration:(unsigned int)arg1 withEventid:(id)arg2 props:(id)arg3 appKey:(id)arg4 isRealTime:(_Bool)arg5;
+ (void)trackCustomKeyValueEventDuration:(unsigned int)arg1 withEventid:(id)arg2 props:(id)arg3;
+ (void)trackCustomKeyValueEventEnd:(id)arg1 props:(id)arg2 appkey:(id)arg3 isRealTime:(_Bool)arg4;
+ (void)trackCustomKeyValueEventEnd:(id)arg1 props:(id)arg2;
+ (void)trackCustomKeyValueEventBegin:(id)arg1 props:(id)arg2 appkey:(id)arg3;
+ (void)trackCustomKeyValueEventBegin:(id)arg1 props:(id)arg2;
+ (void)trackCustomKeyValueEvent:(id)arg1 props:(id)arg2 appkey:(id)arg3 isRealTime:(_Bool)arg4;
+ (void)trackCustomKeyValueEvent:(id)arg1 props:(id)arg2;
+ (void)trackCustomEventEnd:(id)arg1 args:(id)arg2 appkey:(id)arg3 isRealTime:(_Bool)arg4;
+ (void)trackCustomEventEnd:(id)arg1 args:(id)arg2;
+ (void)trackCustomEventBegin:(id)arg1 args:(id)arg2 appkey:(id)arg3;
+ (void)trackCustomEventBegin:(id)arg1 args:(id)arg2;
+ (void)trackCustomEvent:(id)arg1 args:(id)arg2 appkey:(id)arg3 isRealTime:(_Bool)arg4;
+ (void)trackCustomEvent:(id)arg1 args:(id)arg2;
+ (void)trackError:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;
+ (void)trackError:(id)arg1;
+ (void)trackException:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;
+ (void)trackException:(id)arg1;
+ (void)trackActiveEnd;
+ (void)trackActiveBegin;
+ (void)trackPageViewEnd:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;
+ (void)trackPageViewEnd:(id)arg1;
+ (void)trackPageViewBegin:(id)arg1 appkey:(id)arg2;
+ (void)trackPageViewBegin:(id)arg1;
+ (void)trackDirectPageViewEnd:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;
+ (void)trackDirectPageViewBegin:(id)arg1 appkey:(id)arg2;
+ (void)commitCachedStats:(int)arg1;
+ (_Bool)startWithAppkey:(id)arg1 checkedSdkVersion:(id)arg2;
+ (void)startWithAppkey:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
@property(retain, nonatomic) NSString *lastPage; // @synthesize lastPage=_lastPage;
@property(retain, nonatomic) NSString *mtaCurrentPage; // @synthesize mtaCurrentPage=_mtaCurrentPage;
@property(retain, nonatomic) NSString *keyForKeyChain; // @synthesize keyForKeyChain=_keyForKeyChain;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct dispatch_queue_s *)getTaskQueue;
- (void)dealloc;
- (void)onWillApplicationEnterBackground;
- (void)onWillApplicationEnterForeground;
- (void)onDidApplicationBecomeActive;
- (void)onWillApplicationResignActive;
- (void)onWillApplicationWillTerminate;
- (void)handleCrashReport;
- (id)init;

@end

