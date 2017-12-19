//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface QMUIGridView : UIView
{
    _Bool _separatorDashed;
    long long _columnCount;
    double _rowHeight;
    double _separatorWidth;
    UIColor *_separatorColor;
    CAShapeLayer *_separatorLayer;
}

@property(retain, nonatomic) CAShapeLayer *separatorLayer; // @synthesize separatorLayer=_separatorLayer;
@property(nonatomic) _Bool separatorDashed; // @synthesize separatorDashed=_separatorDashed;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) double separatorWidth; // @synthesize separatorWidth=_separatorWidth;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(nonatomic) long long columnCount; // @synthesize columnCount=_columnCount;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (long long)rowCount;
- (double)stretchColumnWidth;
- (void)didInitialized;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithColumn:(long long)arg1 rowHeight:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1 column:(long long)arg2 rowHeight:(double)arg3;

@end

