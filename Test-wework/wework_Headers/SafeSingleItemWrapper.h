//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, SingleItemWrapper;

@interface SafeSingleItemWrapper : NSObject
{
    SingleItemWrapper *wapper;
    NSMutableDictionary *wapperDict;
    NSString *filePath;
}

- (void)dealloc;
- (void)resetSafeKeychainItem;
- (id)keyChainStoreForKey:(id)arg1;
- (id)fileStoreForKey:(id)arg1;
- (_Bool)setFileStoreObject:(id)arg1 forKey:(id)arg2;
- (id)initSafeWithIdentifier:(id)arg1 accessGroup:(id)arg2;
- (id)dataSafeFilePathWithName:(id)arg1;

@end

