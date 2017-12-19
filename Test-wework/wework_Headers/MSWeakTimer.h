//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MSWeakTimer : NSObject
{
    struct {
        unsigned int timerIsInvalidated;
    } _timerFlags;
    _Bool _repeats;
    double _tolerance;
    double _timeInterval;
    id _target;
    SEL _selector;
    id _userInfo;
    NSObject<OS_dispatch_queue> *_privateSerialQueue;
    NSObject<OS_dispatch_source> *_timer;
}

+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5 dispatchQueue:(id)arg6;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *privateSerialQueue; // @synthesize privateSerialQueue=_privateSerialQueue;
@property(nonatomic) _Bool repeats; // @synthesize repeats=_repeats;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (void).cxx_destruct;
- (void)timerFired;
- (void)invalidate;
- (void)fire;
- (void)schedule;
- (void)resetTimerProperties;
@property double tolerance; // @synthesize tolerance=_tolerance;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5 dispatchQueue:(id)arg6;

@end

