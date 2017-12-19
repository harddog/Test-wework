//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WWKAppVisibleRangeItem : NSObject
{
    long long _type;
    unsigned long long _itemId;
    NSString *_iconName;
    NSString *_name;
}

+ (id)createAllItem;
+ (id)createAddItem;
+ (id)createWithTagitem:(const struct RangeTagidItem *)arg1;
+ (id)createWithPartyitem:(const struct RangePartyidItem *)arg1;
+ (id)createWithViditem:(const struct RangeVidItem *)arg1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(nonatomic) unsigned long long itemId; // @synthesize itemId=_itemId;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

