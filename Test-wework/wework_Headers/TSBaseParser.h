//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray;

@interface TSBaseParser : NSObject
{
    NSDictionary *_defaultAttributes;
    NSMutableArray *_parsingPairs;
}

@property(retain, nonatomic) NSMutableArray *parsingPairs; // @synthesize parsingPairs=_parsingPairs;
@property(retain, nonatomic) NSDictionary *defaultAttributes; // @synthesize defaultAttributes=_defaultAttributes;
- (void).cxx_destruct;
- (id)attributedStringFromAttributedMarkdownString:(id)arg1;
- (id)attributedStringFromMarkdown:(id)arg1 attributes:(id)arg2;
- (id)attributedStringFromMarkdown:(id)arg1;
- (void)addParsingRuleWithRegularExpression:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;

@end

