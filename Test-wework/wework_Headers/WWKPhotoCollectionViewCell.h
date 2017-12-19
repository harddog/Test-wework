//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, UIButton, UIImage, UIImageView, UILabel, UIView, WWKPhoto;
@protocol WWKPhotoCollectionViewCellDelegate;

@interface WWKPhotoCollectionViewCell : UICollectionViewCell
{
    UIImageView *_photoImageView;
    UIButton *_checkButton;
    UIView *_checkWrapView;
    UIImageView *_checkImageView;
    CAGradientLayer *_videoGradientLayer;
    UIImageView *_videoImageView;
    UILabel *_videoTimeLabel;
    UIImageView *_GifImageView;
    _Bool _isCheck;
    _Bool _isGif;
    UIImage *_photoImage;
    WWKPhoto *_photo;
    id <WWKPhotoCollectionViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <WWKPhotoCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WWKPhoto *photo; // @synthesize photo=_photo;
@property(nonatomic) _Bool isGif; // @synthesize isGif=_isGif;
@property(nonatomic) _Bool isCheck; // @synthesize isCheck=_isCheck;
@property(retain, nonatomic) UIImage *photoImage; // @synthesize photoImage=_photoImage;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)checkButtonClick;
- (id)initWithFrame:(struct CGRect)arg1;

@end

