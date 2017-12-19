//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSArray, NSMutableArray;
@protocol WWKRemarkImagesContainerViewDelegate;

@interface WWKRemarkImagesContainerView : UIButton
{
    NSMutableArray *_imageViews;
    NSArray *_remarkImages;
    id <WWKRemarkImagesContainerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WWKRemarkImagesContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *remarkImages; // @synthesize remarkImages=_remarkImages;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onTapImageButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

