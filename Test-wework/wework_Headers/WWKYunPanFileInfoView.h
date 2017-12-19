//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WWKYunPanFileInfoView : UIView
{
    UIImageView *_fileIconImageView;
    UILabel *_fileNameLabel;
    UILabel *_fileNameTailLabel;
    UILabel *_fileSizeLabel;
    struct UIEdgeInsets _padding;
}

@property(retain, nonatomic) UILabel *fileSizeLabel; // @synthesize fileSizeLabel=_fileSizeLabel;
@property(retain, nonatomic) UILabel *fileNameTailLabel; // @synthesize fileNameTailLabel=_fileNameTailLabel;
@property(retain, nonatomic) UILabel *fileNameLabel; // @synthesize fileNameLabel=_fileNameLabel;
@property(retain, nonatomic) UIImageView *fileIconImageView; // @synthesize fileIconImageView=_fileIconImageView;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateItemView:(id)arg1 byteSize:(unsigned long long)arg2 fileCount:(unsigned long long)arg3;
- (void)initContentView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

