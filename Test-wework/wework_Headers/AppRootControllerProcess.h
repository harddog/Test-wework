//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ConversationListProxyObserverDelegate-Protocol.h"

@class NSString, UIWindow;

@interface AppRootControllerProcess : NSObject <ConversationListProxyObserverDelegate>
{
    struct ConversationListProxyObserver *_convsertionListProxyObserver;
    UIWindow *_splashWindow;
    _Bool _tryShowExhibition;
    _Bool _isNeedAnimate;
}

@property(nonatomic) _Bool isNeedAnimate; // @synthesize isNeedAnimate=_isNeedAnimate;
- (void).cxx_destruct;
- (void)OnSyncStateChanged:(int)arg1 withOldState:(int)arg2;
- (void)OnOrderChange;
- (void)OnRemoveConversation:(const scoped_refptr_fd92d7bf *)arg1;
- (void)OnAddConversations:(const vector_8fc7f2c8 *)arg1;
- (void)OnAddConversation:(const scoped_refptr_fd92d7bf *)arg1;
- (void)p_dismissWithAnimate:(_Bool)arg1 duration:(double)arg2;
- (void)p_dismissWindow;
- (void)p_showWindow;
- (void)dismiss;
- (void)removeObserver;
- (void)onSplashDissImmediately;
- (void)onDidSplashWindowAnimateCompleted;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

