//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WWKSearchBarDelegate-Protocol.h"

@class NSString, UITableView, UIView, WWKSearchBar, WWKSearchNoResultView;
@protocol WWKConversationSearchControllerDelegate;

@interface WWKConversationSearchController : UIViewController <UISearchBarDelegate, WWKSearchBarDelegate, UITableViewDelegate, UITableViewDataSource>
{
    scoped_refptr_fd92d7bf conversation_;
    vector_b095e902 message_vector_;
    id <WWKConversationSearchControllerDelegate> _delegate;
    UIView *_coverView;
    WWKSearchBar *_searchBar;
    UITableView *_tableView;
    WWKSearchNoResultView *_noResultView;
}

@property(retain, nonatomic) WWKSearchNoResultView *noResultView; // @synthesize noResultView=_noResultView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WWKSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) __weak id <WWKConversationSearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)searchBarDidClickCustomCancelButton:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)buildSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithConversation:(const scoped_refptr_fd92d7bf *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

