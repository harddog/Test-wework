//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "QMUITableViewDataSource-Protocol.h"
#import "QMUITableViewDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "WWKEmotionPanelDelegate-Protocol.h"
#import "WWKForumPostInputToolbarDelegate-Protocol.h"
#import "WWKForwardingControllerDelegate-Protocol.h"
#import "WWKInteractiveLabelDelegate-Protocol.h"
#import "WWKMultiImageBrowseViewControllerDelegate-Protocol.h"
#import "WWKWorkLogDetailCommentCellDelegate-Protocol.h"
#import "WWKWorkLogTableHeaderViewDelegate-Protocol.h"
#import "WWKWorkLogTemplateTableHeaderViewDelegate-Protocol.h"
#import "WWKWorkLogViewControllerDelegate-Protocol.h"
#import "WWKWorkLogWebViewControllerDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, QMUITableView, UIButton, UIView, WWFavoriteEmptyView, WWKForumPostInputToolbar, WWKInteractiveLabel, WWKWorkLogTableHeaderView, WWKWorkLogTemplateTableHeaderView;
@protocol WWKWorkLogDetaillViewControllerDelegate;

@interface WWKWorkLogDetaillViewController : UIViewController <UINavigationControllerDelegate, QMUITableViewDelegate, QMUITableViewDataSource, WWKWorkLogDetailCommentCellDelegate, WWKForumPostInputToolbarDelegate, WWKInteractiveLabelDelegate, WWKMultiImageBrowseViewControllerDelegate, WWKForwardingControllerDelegate, WWKWorkLogViewControllerDelegate, WWKEmotionPanelDelegate, WWKWorkLogTableHeaderViewDelegate, WWKWorkLogTemplateTableHeaderViewDelegate, WWKWorkLogWebViewControllerDelegate>
{
    struct JournalEntry _logInfo;
    struct vector<pb::comment::CommentInfo, std::__1::allocator<pb::comment::CommentInfo>> _commentList;
    struct CommentInfo _mLastReplyComment;
    _Bool _preventLoadComment;
    UIView *_clickAttachIconView;
    unsigned long long _lastClickedUserId;
    _Bool _hasAppeared;
    NSMutableArray *_notifyCommentIds;
    int _allCommentCount;
    id <WWKWorkLogDetaillViewControllerDelegate> _delegate;
    WWKWorkLogTableHeaderView *_tableHeaderView;
    WWKWorkLogTemplateTableHeaderView *_templateTableHeaderView;
    QMUITableView *_tableView;
    WWKForumPostInputToolbar *_inputToolbar;
    UIView *_deleteView;
    UIView *_networkErrorView;
    NSMutableDictionary *_draftComments;
    WWKInteractiveLabel *_readyToCopyLabel;
    UIButton *_commentEmptyBtn;
    WWFavoriteEmptyView *_logDeletedView;
    NSString *_templateName;
}

@property(copy, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
@property(retain, nonatomic) WWFavoriteEmptyView *logDeletedView; // @synthesize logDeletedView=_logDeletedView;
@property(retain, nonatomic) UIButton *commentEmptyBtn; // @synthesize commentEmptyBtn=_commentEmptyBtn;
@property(readonly, nonatomic) int allCommentCount; // @synthesize allCommentCount=_allCommentCount;
@property(nonatomic) __weak WWKInteractiveLabel *readyToCopyLabel; // @synthesize readyToCopyLabel=_readyToCopyLabel;
@property(retain, nonatomic) NSMutableDictionary *draftComments; // @synthesize draftComments=_draftComments;
@property(retain, nonatomic) UIView *networkErrorView; // @synthesize networkErrorView=_networkErrorView;
@property(retain, nonatomic) UIView *deleteView; // @synthesize deleteView=_deleteView;
@property(retain, nonatomic) WWKForumPostInputToolbar *inputToolbar; // @synthesize inputToolbar=_inputToolbar;
@property(retain, nonatomic) QMUITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WWKWorkLogTemplateTableHeaderView *templateTableHeaderView; // @synthesize templateTableHeaderView=_templateTableHeaderView;
@property(retain, nonatomic) WWKWorkLogTableHeaderView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(nonatomic) __weak id <WWKWorkLogDetaillViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)openTelLink:(id)arg1;
- (void)openMailLink:(id)arg1;
- (void)openLink:(id)arg1;
- (void)showUserProfile:(unsigned long long)arg1;
- (void)checkJournalStatus;
- (void)unregistObservers;
- (void)p_paraeWorkLogInfo:(struct JournalEntry *)arg1;
- (void)p_updateLogInfo:(struct JournalEntry *)arg1;
- (void)p_updateWorkLogRecord;
- (id)backButtonTitle;
- (void)initNavigationBar;
- (void)showLogLoadError:(int)arg1;
- (void)showLogDeleted:(_Bool)arg1;
- (void)p_doAfterLogStatusBack:(_Bool)arg1;
- (void)p_checkLogDeleted:(struct JournalEntry)arg1;
- (id)indexPathForComment:(unsigned long long)arg1;
- (void)handleAppenData:(const RepeatedPtrField_47283873 *)arg1 direction:(_Bool)arg2 clearOldData:(_Bool)arg3;
- (void)doAfterLoadComments:(const struct GetCommentListResp *)arg1 isCached:(_Bool)arg2 isAppendLoad:(_Bool)arg3;
- (void)loadComments:(int)arg1 lastTime:(double)arg2 lastCommentId:(unsigned long long)arg3;
- (void)loadMoreOldComments;
- (void)handleInputToolbarTouchEvent:(id)arg1;
- (void)updateTableFooterView;
- (void)closeToolbar;
- (void)handleCommentEmptyBtnEvent;
- (void)scrollToRow:(long long)arg1 animated:(_Bool)arg2;
- (void)scrollToBottomAnimated:(_Bool)arg1;
- (id)indexPathForCommentId:(unsigned long long)arg1;
- (id)indexPathForCommentInfo:(struct CommentInfo)arg1;
- (struct CommentInfo)commentInfoByIndexPath:(id)arg1;
- (void)setupTableViewFooter:(_Bool)arg1;
- (void)setupFooterRefresh;
- (void)handleClickCommentDeleteAlertOK;
- (void)showCommentHasDeletedAlert;
- (void)showLogHasDeletedAlert;
- (_Bool)handleNetworkbackError:(int)arg1;
- (_Bool)canReplyThisPost;
- (_Bool)isNativeWorklogTemplate;
- (void)replyComment:(id)arg1;
- (void)handlePublicCommentBackSucc:(const struct AddCommentResp *)arg1;
- (void)publishCommentOnline:(id)arg1;
- (void)handleDeleteCommentInfoBack:(id)arg1;
- (void)deleteCommentWithComment:(struct CommentInfo)arg1 indexPath:(id)arg2;
- (void)handleCommentAvatarButtonEvent:(id)arg1;
- (id)WorkLogTemplateTableHeaderViewWantUseNavigationController:(id)arg1;
- (void)onWorkLogWebViewController:(id)arg1 didPublishWorkLogTemplate:(const struct JournalEntry *)arg2;
- (void)WorkLogViewController:(id)arg1 didPublishPost:(const struct JournalEntry *)arg2;
- (void)respondQueryRect:(id)arg1;
- (void)didAttachListView:(id)arg1 clicedAtAttach:(id)arg2 withIconView:(id)arg3;
- (void)requestReloadCellForForumPostComment:(unsigned long long)arg1;
- (void)copyDidClick:(id)arg1;
- (id)interactiveLabel:(id)arg1 willShowMenuControllerWithContext:(id)arg2;
- (void)interactiveLabelDidTouch:(id)arg1;
- (void)interactiveLabel:(id)arg1 didTouchContext:(id)arg2 boundingRects:(id)arg3;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)disapearMarkedUnreadCell;
- (void)clearNoticeCellsWithAnimated:(_Bool)arg1;
- (void)scrollMarkedCommentVisible;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)qmui_tableView:(id)arg1 cellWithIdentifier:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)inputToolbarWillExitInputMode:(id)arg1;
- (void)inputToolbarWillEnterInputMode:(id)arg1;
- (void)originYDidChangeInInputToolbar:(id)arg1;
- (_Bool)shouldSendTextInInputToolbar:(id)arg1;
- (void)requestExitReplyUserModeInInputToolbar:(id)arg1;
- (_Bool)shouldShowAnonymousButton:(id)arg1;
- (void)requestToShowAnonymousNameInInputToolbar:(id)arg1;
- (void)didInputExceedMaxInputText:(id)arg1;
- (void)didInputEmotionChar:(id)arg1;
- (void)requestToSendTextInInputToolbar:(id)arg1;
- (void)didWorkLogTemplateTableHeaderView:(id)arg1 withTemplateName:(id)arg2 loadFinished:(int)arg3;
- (void)workLogTableHeaderViewWillChangeHeight:(id)arg1;
- (void)disableContentEditable;
- (void)didTapUserHead:(id)arg1;
- (void)showHudWithText:(id)arg1 mode:(long long)arg2 needAutoHide:(_Bool)arg3;
-     // Error parsing type: v36@0:8^{Message={AtomicRefCount={atomic<int>=Ai}}{WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{ObserverList<model::MessageObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<model::MessageObserver *, std::__1::allocator<model::MessageObserver *> >=^^{MessageObserver}^^{MessageObserver}{__compressed_pair<model::MessageObserver **, std::__1::allocator<model::MessageObserver *> >=^^{MessageObserver}}}ii}{unique_ptr<pb::Message, std::__1::default_delete<pb::Message> >={__compressed_pair<pb::Message *, std::__1::default_delete<pb::Message> >=^{Message}}}}16^{Conversation=^^?{AtomicRefCount={atomic<int>=Ai}}{WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{ObserverList<model::ConversationObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<model::ConversationObserver *, std::__1::allocator<model::ConversationObserver *> >=^^{ConversationObserver}^^{ConversationObserver}{__compressed_pair<model::ConversationObserver **, std::__1::allocator<model::ConversationObserver *> >=^^{ConversationObserver}}}ii}{unique_ptr<pb::Conversation, std::__1::default_delete<pb::Conversation> >={__compressed_pair<pb::Conversation *, std::__1::default_delete<pb::Conversation> >=^{Conversation}}}{vector<scoped_refptr<model::ConversationMember>, std::__1::allocator<scoped_refptr<model::ConversationMember> > >=^{scoped_refptr<model::ConversationMember>}^{scoped_refptr<model::ConversationMember>}{__compressed_pair<scoped_refptr<model::ConversationMember> *, std::__1::allocator<scoped_refptr<model::ConversationMember> > >=^{scoped_refptr<model::ConversationMember>}}}BBBBB{unique_ptr<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >, std::__1::default_delete<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > > >={__compressed_pair<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > *, std::__1::default_delete<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > > >=^{set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >}}}}24B32, name: forwardingMessage:ToConversation:isSuccess:
- (void)doForwardWorkLog;
- (void)p_doDeleteWorklog;
- (void)p_showCannotAllowEditAlert;
- (void)p_doEnterEdit:(_Bool)arg1 withResp:(const struct CommAppListRsp *)arg2;
- (void)onMoreBtnClick:(id)arg1;
- (void)onForwardWorkLog:(id)arg1;
- (void)onPvMergeWillOpen:(id)arg1;
- (void)delayDisableEdit;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initSubviews;
- (void)dealloc;
- (id)initWithLogEntites:(struct JournalEntry *)arg1 withLocalCommentId:(unsigned long long)arg2;
- (void)delayPushWithNav:(id)arg1;
- (void)openLogDetail:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

