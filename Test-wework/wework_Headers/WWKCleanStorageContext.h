//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WWKCleanStorageContext : NSObject
{
    struct map<scoped_refptr<mail::model::Mail>, std::__1::list<int, std::__1::allocator<int>>, std::__1::less<scoped_refptr<mail::model::Mail>>, std::__1::allocator<std::__1::pair<const scoped_refptr<mail::model::Mail>, std::__1::list<int, std::__1::allocator<int>>>>> attList;
    unsigned long long _totalSize;
}

@property(nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)performPendingCleanTask;
- (_Bool)deleteFile:(id)arg1;
- (_Bool)addPendingCleanTaskForMail:(scoped_refptr_b418b350)arg1 attachmentIndex:(int)arg2;

@end

