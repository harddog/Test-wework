//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XADMacArchiveParser.h"

@class NSData, NSMutableDictionary;

@interface XADZipParser : XADMacArchiveParser
{
    NSMutableDictionary *prevdict;
    NSData *prevname;
}

+ (id)volumesForHandle:(id)arg1 firstBytes:(id)arg2 name:(id)arg3;
+ (_Bool)recognizeFileWithHandle:(id)arg1 firstBytes:(id)arg2 name:(id)arg3;
+ (int)requiredHeaderSize;
- (id)formatName;
- (id)decompressionHandleWithHandle:(id)arg1 method:(int)arg2 flags:(int)arg3 size:(long long)arg4;
- (id)rawHandleForEntryWithDictionary:(id)arg1 wantChecksum:(_Bool)arg2;
- (void)addRemeberedEntryAndForget;
- (void)rememberEntry:(id)arg1 withName:(id)arg2;
- (void)addZipEntryWithSystem:(int)arg1 extractVersion:(int)arg2 flags:(int)arg3 compressionMethod:(int)arg4 date:(unsigned int)arg5 crc:(unsigned int)arg6 localDate:(unsigned int)arg7 compressedSize:(long long)arg8 uncompressedSize:(long long)arg9 extendedFileAttributes:(unsigned int)arg10 extraDictionary:(id)arg11 dataOffset:(long long)arg12 nameData:(id)arg13 commentData:(id)arg14 isLastEntry:(_Bool)arg15;
- (id)parseZipExtraWithLength:(int)arg1 nameData:(id)arg2 uncompressedSizePointer:(long long *)arg3 compressedSizePointer:(long long *)arg4;
- (void)findNextEntry;
- (void)findEndOfStreamMarkerWithZip64Flag:(_Bool)arg1 uncompressedSizePointer:(long long *)arg2 compressedSizePointer:(long long *)arg3 CRCPointer:(unsigned int *)arg4;
- (void)parseWithoutCentralDirectory;
- (void)parseWithCentralDirectoryAtOffset:(long long)arg1 zip64Offset:(long long)arg2;
- (void)parseWithSeparateMacForks;
- (void)dealloc;
- (id)init;

@end

