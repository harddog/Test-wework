//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class QMUIImagePickerPreviewViewController;

@protocol QMUIImagePickerPreviewViewControllerDelegate <NSObject>

@optional
- (void)imagePickerPreviewViewController:(QMUIImagePickerPreviewViewController *)arg1 didUncheckImageAtIndex:(long long)arg2;
- (void)imagePickerPreviewViewController:(QMUIImagePickerPreviewViewController *)arg1 willUncheckImageAtIndex:(long long)arg2;
- (void)imagePickerPreviewViewController:(QMUIImagePickerPreviewViewController *)arg1 didCheckImageAtIndex:(long long)arg2;
- (void)imagePickerPreviewViewController:(QMUIImagePickerPreviewViewController *)arg1 willCheckImageAtIndex:(long long)arg2;
- (void)imagePickerPreviewViewControllerDidCancel:(QMUIImagePickerPreviewViewController *)arg1;
@end

