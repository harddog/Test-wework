//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, WWKTodoClickAnimationView;

@interface WWKTestViewController : UIViewController
{
    WWKTodoClickAnimationView *_animationView;
    UIButton *_clickButton;
}

@property(retain, nonatomic) UIButton *clickButton; // @synthesize clickButton=_clickButton;
@property(retain, nonatomic) WWKTodoClickAnimationView *animationView; // @synthesize animationView=_animationView;
- (void).cxx_destruct;
- (void)buttonDidClick:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

