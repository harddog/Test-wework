//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GYCGIProgressParam : NSObject
{
    long long _bytesRead;
    long long _totalBytesRead;
    long long _bytesExceptToRead;
}

@property(nonatomic) long long bytesExceptToRead; // @synthesize bytesExceptToRead=_bytesExceptToRead;
@property(nonatomic) long long totalBytesRead; // @synthesize totalBytesRead=_totalBytesRead;
@property(nonatomic) long long bytesRead; // @synthesize bytesRead=_bytesRead;
- (id)init;

@end
