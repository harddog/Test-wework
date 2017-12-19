//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKConversationMessageBubbleView.h"

@class UIImageView, UILabel, WWKMessageMail, WWKReadmailViewController;

@interface WWKConversationMailBubbleView : WWKConversationMessageBubbleView
{
    double _summaryLabelHeight;
    WWKReadmailViewController *_readmailController;
    UILabel *_nickNameLabel;
    UILabel *_mailSubjectLabel;
    UILabel *_mailSummaryLabel;
    UIImageView *_attachImageView;
    UILabel *_attachCountLabel;
    UIImageView *_avatarImageView;
    UIImageView *_replyImageView;
    UIImageView *_blackImageView;
}

@property(retain, nonatomic) UIImageView *blackImageView; // @synthesize blackImageView=_blackImageView;
@property(retain, nonatomic) UIImageView *replyImageView; // @synthesize replyImageView=_replyImageView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UILabel *attachCountLabel; // @synthesize attachCountLabel=_attachCountLabel;
@property(retain, nonatomic) UIImageView *attachImageView; // @synthesize attachImageView=_attachImageView;
@property(retain, nonatomic) UILabel *mailSummaryLabel; // @synthesize mailSummaryLabel=_mailSummaryLabel;
@property(retain, nonatomic) UILabel *mailSubjectLabel; // @synthesize mailSubjectLabel=_mailSubjectLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
- (void).cxx_destruct;
- (void)viewDidTap:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)contextMenuDelete:(id)arg1;
- (void)contextMenuModifyAlert:(id)arg1;
- (void)contextMenuAddAlert:(id)arg1;
- (id)contextMenuItems;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)updateBubble:(_Bool)arg1;
- (_Bool)needsArrow;
- (void)updateData;
- (void)setMessage:(id)arg1 withItemIndex:(unsigned long long)arg2;
- (void)wwk_prepareForReuse;
- (void)initSubviews;

// Remaining properties
@property(readonly, nonatomic) WWKMessageMail *messageItem; // @dynamic messageItem;

@end

