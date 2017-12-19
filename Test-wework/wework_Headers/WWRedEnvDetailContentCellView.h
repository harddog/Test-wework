//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface WWRedEnvDetailContentCellView : UITableViewCell
{
    scoped_refptr_76e17a3e _mRecvInfo;
    scoped_refptr_fd92d7bf mConv;
    _Bool _mIsBestLuck;
    _Bool _mIsNeedHeadImageGray;
    _Bool _mIsLuckyMoney;
    int _convType;
    unsigned int _mHongBaoType;
    unsigned long long _convId;
    double _mDivideLineOffset;
    UIImageView *_mSenderImageView;
    UILabel *_mSenderNameLabel;
    UILabel *_mRecvTimeLabel;
    UILabel *_mRecvAmountLabel;
    UILabel *_mRecvTipsLabel;
    UILabel *_mBestLuckLabel;
    UILabel *_mDivideLineLabel;
}

@property(nonatomic) _Bool mIsLuckyMoney; // @synthesize mIsLuckyMoney=_mIsLuckyMoney;
@property(retain, nonatomic) UILabel *mDivideLineLabel; // @synthesize mDivideLineLabel=_mDivideLineLabel;
@property(retain, nonatomic) UILabel *mBestLuckLabel; // @synthesize mBestLuckLabel=_mBestLuckLabel;
@property(retain, nonatomic) UILabel *mRecvTipsLabel; // @synthesize mRecvTipsLabel=_mRecvTipsLabel;
@property(retain, nonatomic) UILabel *mRecvAmountLabel; // @synthesize mRecvAmountLabel=_mRecvAmountLabel;
@property(retain, nonatomic) UILabel *mRecvTimeLabel; // @synthesize mRecvTimeLabel=_mRecvTimeLabel;
@property(retain, nonatomic) UILabel *mSenderNameLabel; // @synthesize mSenderNameLabel=_mSenderNameLabel;
@property(retain, nonatomic) UIImageView *mSenderImageView; // @synthesize mSenderImageView=_mSenderImageView;
@property(nonatomic) double mDivideLineOffset; // @synthesize mDivideLineOffset=_mDivideLineOffset;
@property(nonatomic) unsigned int mHongBaoType; // @synthesize mHongBaoType=_mHongBaoType;
@property(nonatomic) _Bool mIsNeedHeadImageGray; // @synthesize mIsNeedHeadImageGray=_mIsNeedHeadImageGray;
@property(nonatomic) _Bool mIsBestLuck; // @synthesize mIsBestLuck=_mIsBestLuck;
@property(nonatomic) unsigned long long convId; // @synthesize convId=_convId;
@property(nonatomic) int convType; // @synthesize convType=_convType;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setDivideLineOffset:(double)arg1;
- (struct CGRect)_layoutHeaderView;
- (void)layoutSubviews;
- (void)markBestLuckToShow:(_Bool)arg1;
- (void)setContent:(const scoped_refptr_76e17a3e *)arg1 bestLuckVid:(unsigned long long)arg2;
- (void)_initSubViews;
- (void)checkMode;
- (void)setConversationInfo:(scoped_refptr_fd92d7bf)arg1;
- (void)dealloc;
- (id)initLuckMoneyWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

