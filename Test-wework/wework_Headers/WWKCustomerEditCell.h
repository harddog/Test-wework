//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIView;
@protocol WWKCustomerEditDelegate;

@interface WWKCustomerEditCell : UITableViewCell
{
    _Bool _needsUpdateData;
    id _data;
    id <WWKCustomerEditDelegate> _delegate;
    UIView *_separatorView;
}

+ (id)identifier;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) __weak id <WWKCustomerEditDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id data; // @synthesize data=_data;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)layoutSubviews;
- (void)updateData;
- (void)setNeedsUpdateData;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

