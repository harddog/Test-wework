//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XADByteStreamHandle.h"

@class XADHandle;

@interface XAD7ZipBCJ2Handle : XADByteStreamHandle
{
    XADHandle *calls;
    XADHandle *jumps;
    XADHandle *ranges;
    long long callstart;
    long long jumpstart;
    long long rangestart;
    unsigned short probabilities[258];
    unsigned int range;
    unsigned int code;
    int prevbyte;
    unsigned int val;
    int valbyte;
}

- (unsigned char)produceByteAtOffset:(long long)arg1;
- (void)resetByteStream;
- (void)dealloc;
- (id)initWithHandle:(id)arg1 callHandle:(id)arg2 jumpHandle:(id)arg3 rangeHandle:(id)arg4 length:(long long)arg5;

@end

