//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimerProxy, UIButton, UILabel, WWKSlider;
@protocol WWKVideoControlViewDelegate;

@interface WWKVideoControlView : UIView
{
    UIButton *playButton_;
    UIButton *pauseButton_;
    WWKSlider *progressView_;
    UIButton *photoWallButton_;
    UILabel *playedTimeLabel_;
    UILabel *totolTimeLabel_;
    double duration_;
    double elapse_;
    NSTimerProxy *backgroundFadeTimer_;
    id <WWKVideoControlViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WWKVideoControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)playerSliderValueChanged:(id)arg1;
- (void)playerSliderTouchUpInside:(id)arg1;
- (void)playerSliderTouchDown:(id)arg1;
- (_Bool)isPlaying;
- (void)p_BackgroundNeedFade;
- (void)invalidateAllTimers;
- (void)p_DidClickPause;
- (void)p_didClickPhotoWall;
- (void)p_DidClickPlay;
- (void)setElapse:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)resetProgress;
- (void)playToEnd;
- (void)beginToPlay;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
