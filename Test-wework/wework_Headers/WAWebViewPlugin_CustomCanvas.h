//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

#import "IMMQuartz2DDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WAWebViewPlugin_CustomCanvas : WAWebViewPlugin_embedView <IMMQuartz2DDelegate>
{
    long long _tagMax;
    NSMutableDictionary *_cachedImage;
    NSMutableArray *_completionHandlerList;
}

- (void).cxx_destruct;
- (double)canvasScaleWithCanvasID:(unsigned int)arg1;
- (struct CGSize)canvasSizeWithCanvasID:(unsigned int)arg1;
- (id)canvasToImageData:(unsigned int)arg1 getWidth:(double *)arg2 height:(double *)arg3 targetRect:(struct CGRect)arg4;
- (id)canvasViewWithCanvasID:(unsigned int)arg1;
- (id)canvasToImage:(unsigned int)arg1;
- (void)drawCanvas:(unsigned int)arg1 actions:(id)arg2 reset:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setUserData:(id)arg1 canvasId:(unsigned int)arg2;
- (unsigned int)insertCanvas:(struct CGRect)arg1 canvasId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (void)setInteractionEnable:(_Bool)arg1 mode:(int)arg2 canvasId:(unsigned int)arg3;
- (void)onCanvasDrawRectFinished:(id)arg1;
- (void)onLongPress:(id)arg1 canvas:(id)arg2;
- (void)onTouchCancel:(id)arg1 canvas:(id)arg2;
- (void)onTouchEnd:(id)arg1 canvas:(id)arg2;
- (void)onTouchMove:(id)arg1 canvas:(id)arg2;
- (void)onTouchBegin:(id)arg1 canvas:(id)arg2;
- (void)onTouchDown:(id)arg1;
- (id)getImage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

