//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;
@protocol WWKCustomEmotionPageViewDelegate;

@interface WWKCustomEmotionPageView : UIView
{
    long long index_;
    NSMutableArray *thumbEmotionArray_;
    NSMutableArray *loadingArray_;
    NSMutableArray *thumbEmotionDescription_;
    NSArray *emotions_;
    _Bool isPreset_;
    _Bool hasAddFromAlbum_;
    id <WWKCustomEmotionPageViewDelegate> _delegate;
}

+ (unsigned long long)customEmotionPageCount;
+ (unsigned long long)p_getRowCount;
@property(nonatomic) __weak id <WWKCustomEmotionPageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)p_showPreviewAtButton:(id)arg1;
- (void)p_dissmissAllPreview;
- (double)p_getFirstPreviewEmotionHorMargin;
- (double)p_getFirstEmotionHorMargin;
- (void)layoutSubviews;
- (void)p_onLongPressButton:(id)arg1;
- (void)p_stopLoadingViewWithURL:(id)arg1 andError:(id)arg2;
- (void)p_onClickAddAlbum:(id)arg1;
- (void)emotionClick:(id)arg1;
- (void)p_initEmotionButtonWithFrame:(struct CGRect)arg1 showAddFromAlbum:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 forIndexPath:(long long)arg2 showAddFromAlbum:(_Bool)arg3 andEmotions:(id)arg4 isPreset:(_Bool)arg5;

@end

