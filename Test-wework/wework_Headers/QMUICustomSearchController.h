//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISearchController.h>

@class UIView;

@interface QMUICustomSearchController : UISearchController
{
    UIView *_customDimmingView;
}

@property(retain, nonatomic) UIView *customDimmingView; // @synthesize customDimmingView=_customDimmingView;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)layoutCustomDimmingView;
- (void)addCustomDimmingView;
- (void)viewWillAppear:(_Bool)arg1;

@end

