//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMSSearchResult.h"

@class NSArray;

@interface QMSSuggestionResult : QMSSearchResult
{
    unsigned long long _count;
    NSArray *_dataArray;
}

@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (void)fillProperiesWithDictionary:(id)arg1;

@end

