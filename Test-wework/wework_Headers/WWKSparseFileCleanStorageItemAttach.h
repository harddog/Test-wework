//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WWKCleanStorageItemAttach-Protocol.h"

@class NSString, UIImage;

@interface WWKSparseFileCleanStorageItemAttach : NSObject <WWKCleanStorageItemAttach>
{
    NSString *_path;
}

@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)removeWithContext:(id)arg1;
@property(readonly, nonatomic) struct Key cleanItemConversationKey;
@property(readonly, nonatomic) unsigned long long cleanItemSize;
@property(readonly, nonatomic) UIImage *cleanItemIcon;
@property(readonly, nonatomic) NSString *cleanItemName;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

