//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, WWKNewWSShareView;

@interface WWKNewWSShareToWexinView : UIView
{
    UIView *_shadowView;
    UIImageView *_logoView;
    WWKNewWSShareView *_fakeShareView;
}

@property(retain, nonatomic) WWKNewWSShareView *fakeShareView; // @synthesize fakeShareView=_fakeShareView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)layoutSubViewsWithWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)initSubViews;
- (id)snapShotimage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

