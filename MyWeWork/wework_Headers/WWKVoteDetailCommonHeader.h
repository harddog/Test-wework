//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QMUILabel, UILabel, WWKInteractiveLabel;

@interface WWKVoteDetailCommonHeader : UIView
{
    double _titleSingleLineHeight;
    WWKInteractiveLabel *_voteTitleLabel;
    QMUILabel *_titleExtraLabel;
    QMUILabel *_statusLabel;
    UILabel *_nameLabel;
    UILabel *_infoLabel;
    UILabel *_notPublitLabel;
}

@property(retain, nonatomic) UILabel *notPublitLabel; // @synthesize notPublitLabel=_notPublitLabel;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) QMUILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) QMUILabel *titleExtraLabel; // @synthesize titleExtraLabel=_titleExtraLabel;
@property(retain, nonatomic) WWKInteractiveLabel *voteTitleLabel; // @synthesize voteTitleLabel=_voteTitleLabel;
- (void).cxx_destruct;
- (struct CGSize)layoutElements:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)p_setStatus:(long long)arg1;
- (void)setInfoText:(id)arg1;
- (void)showNotPublicTitle:(_Bool)arg1;
- (void)setDetailModel:(id)arg1;
- (void)doInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end
