//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XADByteStreamHandle.h"

@interface XADStuffItXBrimstoneHandle : XADByteStreamHandle
{
    struct PPMdModelVariantG model;
    struct PPMdSubAllocatorBrimstone *alloc;
    int max;
}

- (unsigned char)produceByteAtOffset:(long long)arg1;
- (void)resetByteStream;
- (void)dealloc;
- (id)initWithHandle:(id)arg1 length:(long long)arg2 maxOrder:(int)arg3 subAllocSize:(int)arg4;
- (id)initWithHandle:(id)arg1 maxOrder:(int)arg2 subAllocSize:(int)arg3;

@end

