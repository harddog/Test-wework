//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WWKForumPostInputToolbar;

@protocol WWKForumPostInputToolbarDelegate <NSObject>
- (void)requestExitReplyUserModeInInputToolbar:(WWKForumPostInputToolbar *)arg1;
- (void)requestToShowAnonymousNameInInputToolbar:(WWKForumPostInputToolbar *)arg1;
- (void)requestToSendTextInInputToolbar:(WWKForumPostInputToolbar *)arg1;

@optional
- (void)didInputExceedMaxInputText:(WWKForumPostInputToolbar *)arg1;
- (void)didInputEmotionChar:(WWKForumPostInputToolbar *)arg1;
- (_Bool)shouldShowAnonymousButton:(WWKForumPostInputToolbar *)arg1;
- (void)inputToolbarWillExitInputMode:(WWKForumPostInputToolbar *)arg1;
- (void)inputToolbarWillEnterInputMode:(WWKForumPostInputToolbar *)arg1;
- (void)originYDidChangeInInputToolbar:(WWKForumPostInputToolbar *)arg1;
- (_Bool)shouldSendTextInInputToolbar:(WWKForumPostInputToolbar *)arg1;
@end

