//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKAlertController.h"

@class UIButton, UITextField;

@interface WWKWebAuthAlertController : WWKAlertController
{
    UITextField *_nameField;
    UITextField *_passField;
    UIButton *_saveCheckbox;
}

@property(nonatomic) __weak UIButton *saveCheckbox; // @synthesize saveCheckbox=_saveCheckbox;
@property(nonatomic) __weak UITextField *passField; // @synthesize passField=_passField;
@property(nonatomic) __weak UITextField *nameField; // @synthesize nameField=_nameField;
- (void).cxx_destruct;
- (void)checkboxButtonDidClick:(id)arg1;
- (id)initWithChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
