//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel, WWKAvatarImageView;

@interface WWKCleanSelectionCell : UITableViewCell
{
    UIButton *_checkBox;
    WWKAvatarImageView *_iconView;
    UILabel *_fileSizeLabel;
    UILabel *_titleLabel;
    UIButton *_infoButton;
}

@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *fileSizeLabel; // @synthesize fileSizeLabel=_fileSizeLabel;
@property(retain, nonatomic) WWKAvatarImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIButton *checkBox; // @synthesize checkBox=_checkBox;
- (void).cxx_destruct;
- (void)infoDidClick:(id)arg1;

@end

