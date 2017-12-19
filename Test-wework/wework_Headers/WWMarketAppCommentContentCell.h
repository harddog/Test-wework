//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CALayer, UILabel, WWMarketAppCommentShowMoreView, WWMarketAppStarsView;

@interface WWMarketAppCommentContentCell : UITableViewCell
{
    _Bool _cmtContentHasMore;
    _Bool _replyContentHasMore;
    _Bool _showAllCmmt;
    CALayer *_topSepLineLayer;
    UILabel *_scoreDescLbl;
    WWMarketAppStarsView *_starView;
    UILabel *_cmtDateLbl;
    UILabel *_cmtUserInfoLbl;
    UILabel *_cmtUserCorpLbl;
    UILabel *_cmtContentLbl;
    UILabel *_cmtTagLbl;
    CALayer *_prvdrRespBgLayer;
    UILabel *_prvdrRespLbl;
    UILabel *_prvdrRespContentLbl;
    WWMarketAppCommentShowMoreView *_cmtShowMoreView;
    WWMarketAppCommentShowMoreView *_replyShowMoreView;
}

@property(nonatomic) _Bool showAllCmmt; // @synthesize showAllCmmt=_showAllCmmt;
@property(retain, nonatomic) WWMarketAppCommentShowMoreView *replyShowMoreView; // @synthesize replyShowMoreView=_replyShowMoreView;
@property(retain, nonatomic) WWMarketAppCommentShowMoreView *cmtShowMoreView; // @synthesize cmtShowMoreView=_cmtShowMoreView;
@property(nonatomic) _Bool replyContentHasMore; // @synthesize replyContentHasMore=_replyContentHasMore;
@property(nonatomic) _Bool cmtContentHasMore; // @synthesize cmtContentHasMore=_cmtContentHasMore;
@property(retain, nonatomic) UILabel *prvdrRespContentLbl; // @synthesize prvdrRespContentLbl=_prvdrRespContentLbl;
@property(retain, nonatomic) UILabel *prvdrRespLbl; // @synthesize prvdrRespLbl=_prvdrRespLbl;
@property(retain, nonatomic) CALayer *prvdrRespBgLayer; // @synthesize prvdrRespBgLayer=_prvdrRespBgLayer;
@property(retain, nonatomic) UILabel *cmtTagLbl; // @synthesize cmtTagLbl=_cmtTagLbl;
@property(retain, nonatomic) UILabel *cmtContentLbl; // @synthesize cmtContentLbl=_cmtContentLbl;
@property(retain, nonatomic) UILabel *cmtUserCorpLbl; // @synthesize cmtUserCorpLbl=_cmtUserCorpLbl;
@property(retain, nonatomic) UILabel *cmtUserInfoLbl; // @synthesize cmtUserInfoLbl=_cmtUserInfoLbl;
@property(retain, nonatomic) UILabel *cmtDateLbl; // @synthesize cmtDateLbl=_cmtDateLbl;
@property(retain, nonatomic) WWMarketAppStarsView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) UILabel *scoreDescLbl; // @synthesize scoreDescLbl=_scoreDescLbl;
@property(retain, nonatomic) CALayer *topSepLineLayer; // @synthesize topSepLineLayer=_topSepLineLayer;
- (void).cxx_destruct;
- (void)updateWithCommentDetail:(const struct UserComment *)arg1 isSelfComment:(_Bool)arg2;
- (void)forceShowAllComment:(_Bool)arg1;
- (_Bool)p_checkOverHighForLabel:(id)arg1 forTextConstriantToWidth:(double)arg2;
- (double)p_layoutForHeightWithParentWidth:(double)arg1;
- (void)p_doInit;
- (double)cellHeightWithParentWidth:(double)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

