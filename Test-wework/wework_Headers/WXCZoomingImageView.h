//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, NSURL, UIActivityIndicatorView, UIImage, UIImageView;
@protocol WXCZoomingImageViewDelegate;

@interface WXCZoomingImageView : UIScrollView <UIScrollViewDelegate>
{
    UIImageView *_imageView;
    UIActivityIndicatorView *_loadingView;
    _Bool _isLoading;
    UIImage *_placeHolderImg;
    _Bool _forbidDoubleTouchZoom;
    _Bool _tribleZoomForDoubleTouch;
    int _scaleMode;
    UIImage *_image;
    NSURL *_imgURL;
    long long _indiStyle;
    double _maxSetZoomScale;
    id <WXCZoomingImageViewDelegate> _zoomingImageDelegate;
    double _middleZoomScale;
}

@property(nonatomic) double middleZoomScale; // @synthesize middleZoomScale=_middleZoomScale;
@property(nonatomic) __weak id <WXCZoomingImageViewDelegate> zoomingImageDelegate; // @synthesize zoomingImageDelegate=_zoomingImageDelegate;
@property(nonatomic) int scaleMode; // @synthesize scaleMode=_scaleMode;
@property(nonatomic) _Bool tribleZoomForDoubleTouch; // @synthesize tribleZoomForDoubleTouch=_tribleZoomForDoubleTouch;
@property(nonatomic) _Bool forbidDoubleTouchZoom; // @synthesize forbidDoubleTouchZoom=_forbidDoubleTouchZoom;
@property(nonatomic) double maxSetZoomScale; // @synthesize maxSetZoomScale=_maxSetZoomScale;
@property(nonatomic) long long indiStyle; // @synthesize indiStyle=_indiStyle;
@property(retain, nonatomic) NSURL *imgURL; // @synthesize imgURL=_imgURL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)accuireImgFrame;
- (void)dealloc;
- (void)handleDoubleTapWithTouchPoint:(struct CGPoint)arg1;
- (void)handleSingleTap;
- (void)handleGesture:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (struct CGRect)calcResetImgViewFrame;
- (void)resetZoomScaleForCurrentImage;
- (void)setImageURL:(id)arg1 PlaceHolderImg:(id)arg2;
- (void)setShowLoadingImage:(_Bool)arg1;
@property(readonly, nonatomic) UIImageView *interalImgView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

