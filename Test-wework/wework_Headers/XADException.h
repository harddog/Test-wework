//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface XADException : NSObject
{
}

+ (id)describeXADError:(int)arg1;
+ (int)parseException:(id)arg1;
+ (void)raiseExceptionWithXADError:(int)arg1;
+ (void)raiseOutOfMemoryException;
+ (void)raiseDataFormatException;
+ (void)raiseChecksumException;
+ (void)raiseDecrunchException;
+ (void)raisePasswordException;
+ (void)raiseNotSupportedException;
+ (void)raiseIllegalDataException;
+ (void)raiseOutputException;
+ (void)raiseInputException;
+ (void)raiseUnknownException;

@end

