//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMUICommonViewController.h"

#import "QMUIModalPresentationContentViewControllerProtocol-Protocol.h"

@class CALayer, NSDictionary, NSString, QMUIButton, UIColor, UIFont, UIView;

@interface QMUIDialogViewController : QMUICommonViewController <QMUIModalPresentationContentViewControllerProtocol>
{
    _Bool _hasCustomContentView;
    double _cornerRadius;
    UIColor *_titleTintColor;
    UIFont *_titleLabelFont;
    UIColor *_titleLabelTextColor;
    UIFont *_subTitleLabelFont;
    UIColor *_subTitleLabelTextColor;
    UIColor *_headerFooterSeparatorColor;
    double _headerViewHeight;
    UIColor *_headerViewBackgroundColor;
    double _footerViewHeight;
    UIColor *_footerViewBackgroundColor;
    NSDictionary *_buttonTitleAttributes;
    UIColor *_buttonHighlightedBackgroundColor;
    UIView *_headerView;
    CALayer *_headerViewSeparatorLayer;
    UIView *_contentView;
    UIView *_footerView;
    CALayer *_footerViewSeparatorLayer;
    QMUIButton *_cancelButton;
    QMUIButton *_submitButton;
    CALayer *_buttonSeparatorLayer;
    CDUnknownBlockType _cancelButtonBlock;
    CDUnknownBlockType _submitButtonBlock;
    struct UIEdgeInsets _contentViewMargins;
}

+ (id)appearance;
+ (void)initialize;
@property(copy, nonatomic) CDUnknownBlockType submitButtonBlock; // @synthesize submitButtonBlock=_submitButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelButtonBlock; // @synthesize cancelButtonBlock=_cancelButtonBlock;
@property(nonatomic) _Bool hasCustomContentView; // @synthesize hasCustomContentView=_hasCustomContentView;
@property(readonly, nonatomic) CALayer *buttonSeparatorLayer; // @synthesize buttonSeparatorLayer=_buttonSeparatorLayer;
@property(readonly, nonatomic) QMUIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(readonly, nonatomic) QMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) CALayer *footerViewSeparatorLayer; // @synthesize footerViewSeparatorLayer=_footerViewSeparatorLayer;
@property(readonly, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) CALayer *headerViewSeparatorLayer; // @synthesize headerViewSeparatorLayer=_headerViewSeparatorLayer;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIColor *buttonHighlightedBackgroundColor; // @synthesize buttonHighlightedBackgroundColor=_buttonHighlightedBackgroundColor;
@property(retain, nonatomic) NSDictionary *buttonTitleAttributes; // @synthesize buttonTitleAttributes=_buttonTitleAttributes;
@property(retain, nonatomic) UIColor *footerViewBackgroundColor; // @synthesize footerViewBackgroundColor=_footerViewBackgroundColor;
@property(nonatomic) double footerViewHeight; // @synthesize footerViewHeight=_footerViewHeight;
@property(retain, nonatomic) UIColor *headerViewBackgroundColor; // @synthesize headerViewBackgroundColor=_headerViewBackgroundColor;
@property(nonatomic) double headerViewHeight; // @synthesize headerViewHeight=_headerViewHeight;
@property(retain, nonatomic) UIColor *headerFooterSeparatorColor; // @synthesize headerFooterSeparatorColor=_headerFooterSeparatorColor;
@property(retain, nonatomic) UIColor *subTitleLabelTextColor; // @synthesize subTitleLabelTextColor=_subTitleLabelTextColor;
@property(retain, nonatomic) UIFont *subTitleLabelFont; // @synthesize subTitleLabelFont=_subTitleLabelFont;
@property(retain, nonatomic) UIColor *titleLabelTextColor; // @synthesize titleLabelTextColor=_titleLabelTextColor;
@property(retain, nonatomic) UIFont *titleLabelFont; // @synthesize titleLabelFont=_titleLabelFont;
@property(retain, nonatomic) UIColor *titleTintColor; // @synthesize titleTintColor=_titleTintColor;
@property(nonatomic) struct UIEdgeInsets contentViewMargins; // @synthesize contentViewMargins=_contentViewMargins;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void).cxx_destruct;
- (struct CGSize)preferredContentSizeInModalPresentationViewController:(id)arg1 limitSize:(struct CGSize)arg2;
- (void)hideWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hide;
- (void)showWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)show;
- (void)handleSubmitButtonEvent:(id)arg1;
- (void)handleCancelButtonEvent:(id)arg1;
- (id)generateButtonWithText:(id)arg1;
- (void)addSubmitButtonWithText:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)addCancelButtonWithText:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)initFooterViewIfNeeded;
- (void)viewDidLayoutSubviews;
- (void)initSubviews;
- (void)viewDidLoad;
- (void)setNavigationItemsIsInEditMode:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didInitialized;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

