//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WXPPBGeneratedMessage : NSObject
{
    unsigned int _has_bits_[3];
    int _serializedSize;
    struct PBClassInfo2 *_classInfo;
    id *_ivarValueDict;
}

+ (id)parseFromData:(id)arg1;
- (id)debugDescription;
- (id)description;
- (_Bool)hasProperty:(int)arg1;
- (unsigned int)continueFlag;
- (id)baseResponse;
- (void)setBaseRequest:(id)arg1;
- (void)writeValueToCodedOutputStreamNoTag:(id)arg1 value:(id)arg2 fieldType:(unsigned char)arg3;
- (void)writeValueToCodedOutputStream:(id)arg1 value:(id)arg2 fieldNumber:(int)arg3 fieldType:(unsigned char)arg4;
- (void)writeToCodedOutputStream:(id)arg1;
- (int)computeValueSizeNoTag:(id)arg1 fieldType:(unsigned char)arg2;
- (int)computeValueSize:(id)arg1 fieldNumber:(int)arg2 fieldType:(unsigned char)arg3;
- (int)serializedSize;
- (id)serializedData;
- (_Bool)isInitialized;
- (_Bool)isMessageInitialized:(id)arg1;
- (id)readValueFromCodedInputStream:(id)arg1 fieldType:(unsigned char)arg2;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFromData:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)valueAtIndex:(int)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValue:(id)arg1 atIndex:(int)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (int)indexOfPropertyWithName:(basic_string_a490aa4c *)arg1;
- (void)dealloc;
- (id)init;

@end

