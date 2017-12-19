//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MGSwipeTableCell.h"

@class CALayer, UIImageView, UILabel;

@interface WWKForumListCell : MGSwipeTableCell
{
    struct PostCompleteInfo _postInfo;
    UILabel *_nameLabel;
    UIImageView *_scanImageView;
    UILabel *_scanCountLabel;
    UIImageView *_commentImageView;
    UILabel *_commentCountLabel;
    CALayer *_separatorLayer;
    double _contentHorizontalInset;
    double _titleLabelSingleLineHeight;
    double _detailLabelSingleLineHeight;
}

@property(nonatomic) double detailLabelSingleLineHeight; // @synthesize detailLabelSingleLineHeight=_detailLabelSingleLineHeight;
@property(nonatomic) double titleLabelSingleLineHeight; // @synthesize titleLabelSingleLineHeight=_titleLabelSingleLineHeight;
@property(nonatomic) double contentHorizontalInset; // @synthesize contentHorizontalInset=_contentHorizontalInset;
@property(retain, nonatomic) CALayer *separatorLayer; // @synthesize separatorLayer=_separatorLayer;
@property(retain, nonatomic) UILabel *commentCountLabel; // @synthesize commentCountLabel=_commentCountLabel;
@property(retain, nonatomic) UIImageView *commentImageView; // @synthesize commentImageView=_commentImageView;
@property(retain, nonatomic) UILabel *scanCountLabel; // @synthesize scanCountLabel=_scanCountLabel;
@property(retain, nonatomic) UIImageView *scanImageView; // @synthesize scanImageView=_scanImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setShowLeftBlueTips:(_Bool)arg1;
- (struct CGSize)detailLabelBestSizeThatFits:(struct CGSize)arg1;
- (id)detailLabelAttributedStringWithText:(id)arg1 includeImage:(_Bool)arg2;
- (id)titleLabelAttributedStringWithText:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setPost:(const struct PostCompleteInfo *)arg1;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

