//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, WACacheFileCleanStatusAppItem;

@interface WACacheFileCleanStatusSortAppItem : NSObject
{
    NSString *_appID;
    WACacheFileCleanStatusAppItem *_appItem;
}

@property(retain, nonatomic) WACacheFileCleanStatusAppItem *appItem; // @synthesize appItem=_appItem;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;

@end

