//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHPhotoLibrary.h>

@interface PHPhotoLibrary (QMUI)
+ (id)fetchLatestAssetWithAssetCollection:(id)arg1;
+ (id)fetchAllAlbumsWithAlbumContentType:(int)arg1 showEmptyAlbum:(_Bool)arg2 showSmartAlbum:(_Bool)arg3;
+ (id)createFetchOptionsWithAlbumContentType:(int)arg1;
- (void)addVideoToAlbum:(id)arg1 albumAssetCollection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addImageToAlbum:(struct CGImage *)arg1 albumAssetCollection:(id)arg2 orientation:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
@end

