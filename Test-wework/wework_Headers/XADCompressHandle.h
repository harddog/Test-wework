//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XADByteStreamHandle.h"

@interface XADCompressHandle : XADByteStreamHandle
{
    _Bool blockmode;
    struct LZW *lzw;
    int symbolcounter;
    char *buffer;
    char *bufferend;
}

- (unsigned char)produceByteAtOffset:(long long)arg1;
- (void)resetByteStream;
- (void)dealloc;
- (id)initWithHandle:(id)arg1 length:(long long)arg2 flags:(int)arg3;
- (id)initWithHandle:(id)arg1 flags:(int)arg2;

@end

