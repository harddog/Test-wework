//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MWXCMObject.h"

@class NSArray, NSObject;

@interface MWXCMDelegateProxy : MWXCMObject
{
    NSObject *m_delegate;
    Class m_delegateClass;
    NSArray *m_arrProtocol;
}

@property(readonly, nonatomic) NSArray *m_arrProtocol; // @synthesize m_arrProtocol;
@property(readonly, nonatomic) NSObject *m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)checkIllegalDelegate:(id)arg1;
- (id)description;
- (void)updateDelegateByDelegateCenter:(id)arg1;
- (void)clearDelegateByDelegateCenter;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 forProtocols:(id)arg2;

@end

