//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AVAsset, AVPlayer, AVPlayerLayer, NSString, NSURL, UIButton, UIView, WWKPhoto;
@protocol WWKPreviewLocalVideoViewControllerDelegate;

@interface WWKPreviewLocalVideoViewController : UIViewController
{
    UIView *bottomView_;
    UIButton *confirmButton_;
    UIButton *playButton_;
    UIView *videoContainView_;
    NSString *overLimitAlertMsg_;
    NSString *confirmAlertMsgFormat_;
    NSString *confirmAlertOKTitle_;
    unsigned long long videoLimitSize_;
    WWKPhoto *_photo;
    NSURL *_videoUrl;
    AVAsset *_avAsset;
    id <WWKPreviewLocalVideoViewControllerDelegate> _delegate;
    AVPlayerLayer *_avPlayerLayer;
    AVPlayer *_avPlayer;
}

@property(retain, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic) AVPlayerLayer *avPlayerLayer; // @synthesize avPlayerLayer=_avPlayerLayer;
@property(nonatomic) __weak id <WWKPreviewLocalVideoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVAsset *avAsset; // @synthesize avAsset=_avAsset;
@property(retain, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) WWKPhoto *photo; // @synthesize photo=_photo;
- (void).cxx_destruct;
- (void)setAttibuteInfo:(unsigned long long)arg1 overLimitAlertMsg:(id)arg2 confirmAlertMsgFormat:(id)arg3 confirmAlertOKTitle:(id)arg4;
- (void)p_showAlertViewWithMessage:(id)arg1 confirmTitle:(id)arg2;
- (void)p_onAvplayStoped;
- (void)p_pause;
- (void)p_play;
- (_Bool)p_isPlaying;
- (void)p_onDidTapVideoContainerView;
- (void)dealloc;
- (void)p_onClickConfirmButton;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;

@end

