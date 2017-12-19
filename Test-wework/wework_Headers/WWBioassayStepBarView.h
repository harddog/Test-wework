//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface WWBioassayStepBarView : UIView
{
    NSArray *_elementViewArr;
    NSArray *_lineViewArr;
}

@property(retain, nonatomic) NSArray *lineViewArr; // @synthesize lineViewArr=_lineViewArr;
@property(retain, nonatomic) NSArray *elementViewArr; // @synthesize elementViewArr=_elementViewArr;
- (void).cxx_destruct;
- (double)p_calcLineWidth;
- (id)p_createLineView;
- (id)p_createElementView;
- (struct CGSize)p_doLayoutInternal;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)p_doInit;
- (void)updateWithStep:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

