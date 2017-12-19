//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@class NSMutableArray;

@interface OrderedDictionary : NSMutableDictionary
{
    NSMutableDictionary *dictionary;
    NSMutableArray *array;
}

- (void).cxx_destruct;
- (void)setObjectAsLastObject:(id)arg1 forKey:(id)arg2;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)lastKey;
- (id)keyAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 forKey:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)reverseKeyEnumerator;
- (id)keyEnumerator;
- (id)allValuesForKeyEnumerator:(id)arg1;
- (id)allValuesInReverseOrder;
- (id)allValuesInOrder;
- (id)allValues;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)copy;
- (void)dealloc;
- (void)setupWithCapacity:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end

