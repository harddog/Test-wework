//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSMutableData;

@interface XADRARProgramCode : NSObject
{
    NSMutableData *opcodes;
    NSData *staticdata;
    NSMutableData *globalbackup;
    unsigned long long fingerprint;
}

- (id)disassemble;
- (unsigned long long)fingerprint;
- (id)globalBackup;
- (id)staticData;
- (int)numberOfOpcodes;
- (struct RAROpcode *)opcodes;
- (void)parseOperandFromBuffer:(struct CSInputBuffer *)arg1 addressingMode:(unsigned int *)arg2 value:(unsigned int *)arg3 byteMode:(_Bool)arg4 isRelativeJump:(_Bool)arg5 currentInstructionOffset:(int)arg6;
- (_Bool)parseByteCode:(const char *)arg1 length:(int)arg2;
- (void)dealloc;
- (id)initWithByteCode:(const char *)arg1 length:(int)arg2;

@end

