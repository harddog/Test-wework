//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKDataWrapper.h"

#import "ConversationProxyObserverDelegate-Protocol.h"
#import "UserProxyObserverDelegate-Protocol.h"

@class NSString, NSTimerProxy;

@interface WWKConversationWrapper : WWKDataWrapper <ConversationProxyObserverDelegate, UserProxyObserverDelegate>
{
    struct ConversationProxyObserver *_conversationProxyObserver;
    scoped_refptr_fd92d7bf _conversation;
    struct unique_ptr<UserSmartProxyObserver, std::__1::default_delete<UserSmartProxyObserver>> _smartUserProxyObserver;
    NSString *_last_message_text;
    double _nextUserPropertyChangeUpdateTime;
    NSTimerProxy *_receiptModeRefreshTimer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)p_parseLastMessage;
- (void)OnRemoveUser:(scoped_refptr_e1f85e48)arg1;
- (void)OnOnlineStatusChange:(scoped_refptr_e1f85e48)arg1 onlineStatus:(int)arg2;
- (void)OnUserPropertyChanged:(scoped_refptr_e1f85e48)arg1;
- (void)notifyUpdateDataWrapperContent;
- (void)OnMessageStateChange:(const scoped_refptr_c1fa851d *)arg1 state:(int)arg2 in:(const scoped_refptr_fd92d7bf *)arg3;
- (void)OnSetShield:(const scoped_refptr_fd92d7bf *)arg1;
- (void)OnSetTop:(const scoped_refptr_fd92d7bf *)arg1;
- (void)OnUnReadCountChanged:(scoped_refptr_fd92d7bf)arg1 oldCount:(unsigned int)arg2 newCount:(unsigned int)arg3;
- (void)OnAddMessage:(const vector_b095e902 *)arg1 end:(_Bool)arg2 inConversation:(scoped_refptr_fd92d7bf)arg3;
- (void)OnPropertyChanged:(scoped_refptr_fd92d7bf)arg1;
- (void)OnModifyName:(scoped_refptr_fd92d7bf)arg1;
- (void)OnRemoveMembers:(const vector_4ea3d2e4 *)arg1 inConversation:(scoped_refptr_fd92d7bf)arg2;
- (void)onAddMembers:(const vector_4ea3d2e4 *)arg1 inConversation:(scoped_refptr_fd92d7bf)arg2;
- (void)removeObserver;
- (_Bool)isExternalConv;
- (_Bool)isContactAdded;
- (_Bool)isWxFriend;
- (_Bool)isCorpConv;
- (_Bool)isClock;
- (int)getMessageState;
- (_Bool)shouldCountUnread;
- (_Bool)getShield;
- (_Bool)getSticked;
- (unsigned long long)getUnReadCount;
- (int)getOnLineStatus;
- (id)getImage;
- (long long)getShowTime;
- (long long)getSortTime;
- (id)getSummary;
- (void)getExtraName:(CDUnknownBlockType)arg1;
- (id)getExtraName;
- (id)getName;
- (unsigned long long)getId;
- (void)setLastMessageText:(id)arg1;
- (scoped_refptr_fd92d7bf)getConversation;
- (void)dealloc;
- (id)initWithConversation:(scoped_refptr_fd92d7bf)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

