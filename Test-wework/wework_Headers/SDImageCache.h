//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache, NSFileManager, NSMutableArray, NSString;

@interface SDImageCache : NSObject
{
    NSFileManager *_fileManager;
    _Bool _shouldDecompressImages;
    long long _maxCacheAge;
    unsigned long long _maxCacheSize;
    NSCache *_memCache;
    NSString *_diskCachePath;
    NSMutableArray *_customPaths;
    struct dispatch_queue_s *_ioQueue;
}

+ (id)sharedImageCache;
@property(nonatomic) struct dispatch_queue_s *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(retain, nonatomic) NSMutableArray *customPaths; // @synthesize customPaths=_customPaths;
@property(retain, nonatomic) NSString *diskCachePath; // @synthesize diskCachePath=_diskCachePath;
@property(retain, nonatomic) NSCache *memCache; // @synthesize memCache=_memCache;
@property(nonatomic) unsigned long long maxCacheSize; // @synthesize maxCacheSize=_maxCacheSize;
@property(nonatomic) long long maxCacheAge; // @synthesize maxCacheAge=_maxCacheAge;
@property(nonatomic) _Bool shouldDecompressImages; // @synthesize shouldDecompressImages=_shouldDecompressImages;
- (void).cxx_destruct;
- (void)calculateSizeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)getDiskCount;
- (unsigned long long)getSize;
- (void)backgroundCleanDisk;
- (void)cleanDiskWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cleanDisk;
- (void)clearDiskOnCompletion:(CDUnknownBlockType)arg1;
- (void)clearDisk;
- (void)clearMemory;
@property(nonatomic) unsigned long long maxMemoryCountLimit;
@property(nonatomic) unsigned long long maxMemoryCost;
- (void)removeImageForKey:(id)arg1 fromDisk:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)removeImageForKey:(id)arg1 fromDisk:(_Bool)arg2;
- (void)removeImageForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeImageForKey:(id)arg1;
- (id)queryDiskCacheForKey:(id)arg1 async:(_Bool)arg2 done:(CDUnknownBlockType)arg3;
- (id)queryDiskCacheForKey:(id)arg1 done:(CDUnknownBlockType)arg2;
- (id)scaledImageForKey:(id)arg1 image:(id)arg2;
- (id)diskImageForKey:(id)arg1;
- (id)diskImageDataBySearchingAllPathsForKey:(id)arg1;
- (id)imageFromDiskCacheForKey:(id)arg1;
- (id)imageFromMemoryCacheForKey:(id)arg1;
- (void)diskImageExistsWithKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)diskImageExistsWithKey:(id)arg1;
- (void)storeImage:(id)arg1 forKey:(id)arg2 toDisk:(_Bool)arg3;
- (void)storeImage:(id)arg1 forKey:(id)arg2;
- (void)storeImage:(id)arg1 recalculateFromImage:(_Bool)arg2 imageData:(id)arg3 forKey:(id)arg4 toDisk:(_Bool)arg5;
- (id)makeDiskCachePath:(id)arg1;
- (id)cachedFileNameForKey:(id)arg1;
- (id)defaultCachePathForKey:(id)arg1;
- (id)cachePathForKey:(id)arg1 inPath:(id)arg2;
- (void)addReadOnlyCachePath:(id)arg1;
- (void)dealloc;
- (id)initWithNamespace:(id)arg1 diskCacheDirectory:(id)arg2;
- (id)initWithNamespace:(id)arg1;
- (id)init;

@end

