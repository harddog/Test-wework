//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKSimpleTableViewCell.h"

@class UIButton;

@interface WWKConvTitleCell : WWKSimpleTableViewCell
{
    scoped_refptr_fd92d7bf _conversation;
    UIButton *_qrCodeImageView;
}

@property(retain, nonatomic) UIButton *qrCodeImageView; // @synthesize qrCodeImageView=_qrCodeImageView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onDidClickQrCodeButton;
- (void)layoutSubviews;
- (void)setConversation:(scoped_refptr_fd92d7bf)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

