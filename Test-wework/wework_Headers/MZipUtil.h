//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MZipUtil : NSObject
{
}

+ (id)dateWithDosDate:(unsigned long long)arg1;
+ (_Bool)UnZipFile:(id)arg1 toPath:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 error:(id *)arg5;
+ (_Bool)UnZipFile:(id)arg1 toPath:(id)arg2;
+ (id)getFileNameFromZipFile:(id)arg1;

@end

