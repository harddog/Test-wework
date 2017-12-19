//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKConversationMessageBubbleView.h"

#import "WWKInteractiveLabelDelegate-Protocol.h"

@class NSString, UIImageView, UILabel, UIView, WWKInteractiveLabel, WWKMessagePstnCard;

@interface WWKConversationPstnCardBubbleView : WWKConversationMessageBubbleView <WWKInteractiveLabelDelegate>
{
    UILabel *_titleLabel;
    WWKInteractiveLabel *_contentLabel;
    UIView *_separator;
    UIImageView *_thumbImageView;
}

@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) WWKInteractiveLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)interactiveLabel:(id)arg1 didTouchContext:(id)arg2 boundingRects:(id)arg3;
- (_Bool)shouldAutoHighlights;
- (_Bool)p_cardMsgCanJump;
- (void)viewDidTap:(id)arg1;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)updateData;
- (Class)messageItemClass;
- (void)initSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) WWKMessagePstnCard *messageItem; // @dynamic messageItem;
@property(readonly) Class superclass;

@end

