//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RegisterCmd.h"

@class NSMutableDictionary, NSString;

@interface RegisterCmd_0x5 : RegisterCmd
{
    NSString *msgCode;
    char msgCodeMd5[16];
    NSMutableDictionary *rspTlvDataDic;
}

@property(readonly) NSMutableDictionary *rspTlvDataDic; // @synthesize rspTlvDataDic;
@property(copy) NSString *msgCode; // @synthesize msgCode;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (int)encode:(id)arg1;
- (void)dealloc;
- (id)init;

@end

