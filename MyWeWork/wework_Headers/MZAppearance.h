//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface MZAppearance : NSObject
{
    Class _mainClass;
    NSMutableArray *_invocations;
}

+ (id)appearanceForClass:(Class)arg1;
@property(retain, nonatomic) NSMutableArray *invocations; // @synthesize invocations=_invocations;
@property(retain, nonatomic) Class mainClass; // @synthesize mainClass=_mainClass;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)applyInvocationRecursivelyTo:(id)arg1 upToSuperClass:(Class)arg2;
- (void)applyInvocationTo:(id)arg1;
- (id)initWithClass:(Class)arg1;

@end
