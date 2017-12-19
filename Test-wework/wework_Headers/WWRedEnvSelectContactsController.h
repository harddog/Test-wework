//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWRedEnvBaseViewController.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WWKSelectContactsBottomBarDelegate-Protocol.h"

@class NSString, UITableView, UITapGestureRecognizer, WWKSearchBar;
@protocol WWRedEnvSelectContactsControllerDelegate;

@interface WWRedEnvSelectContactsController : WWRedEnvBaseViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, WWKSelectContactsBottomBarDelegate>
{
    vector_89e6321f appointed_user_vector_;
    vector_89e6321f selected_user_vector_;
    vector_89e6321f search_user_vector_;
    scoped_refptr_e1f85e48 _me;
    UITapGestureRecognizer *_tapToDismissSearchViewGesture;
    vector_46470f89 pinyin_user_vector_vector_;
    vector_46470f89 valid_user_vector_vector_;
    double _currentKeyboardHeight;
    _Bool _hideSelectAll;
    _Bool _haveMaxNumLimit;
    _Bool _disableSelf;
    _Bool _isSupportMultiSelect;
    unsigned int _mHongbaoType;
    unsigned int _mHongbaoSubType;
    id <WWRedEnvSelectContactsControllerDelegate> _delegate;
    WWKSearchBar *_searchBar;
    UITableView *_contentTableView;
    UITableView *_searchTableView;
}

@property(nonatomic) _Bool isSupportMultiSelect; // @synthesize isSupportMultiSelect=_isSupportMultiSelect;
@property(nonatomic) unsigned int mHongbaoSubType; // @synthesize mHongbaoSubType=_mHongbaoSubType;
@property(retain, nonatomic) UITableView *searchTableView; // @synthesize searchTableView=_searchTableView;
@property(retain, nonatomic) UITableView *contentTableView; // @synthesize contentTableView=_contentTableView;
@property(retain, nonatomic) WWKSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) unsigned int mHongbaoType; // @synthesize mHongbaoType=_mHongbaoType;
@property(nonatomic) _Bool disableSelf; // @synthesize disableSelf=_disableSelf;
@property(nonatomic) _Bool haveMaxNumLimit; // @synthesize haveMaxNumLimit=_haveMaxNumLimit;
@property(nonatomic) _Bool hideSelectAll; // @synthesize hideSelectAll=_hideSelectAll;
@property(nonatomic) __weak id <WWRedEnvSelectContactsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)selectContactsBottomBar:(id)arg1 didClickSureButtonWithContacts:(id)arg2;
- (void)selectContactsBottomBar:(id)arg1 didRemoveContacts:(id)arg2;
- (void)checkBottomButtonIfShouldAppear;
- (id)bottomBar;
- (void)configureValidDataSource;
- (basic_string_a490aa4c)p_getEnglishName:(const basic_string_a490aa4c *)arg1;
- (vector_89e6321f)searchUsersWithKeyword:(const basic_string_a490aa4c *)arg1;
- (id)sectionIndexTitlesForContentTableView;
- (void)refreshRightNavigationItem;
- (void)addOrRemoveUser:(scoped_refptr_e1f85e48)arg1;
- (_Bool)isUserHasSelected:(scoped_refptr_e1f85e48)arg1;
- (void)removeSearchTableViewWhenSearchKeyIsEmpty;
- (void)tapOnSearchTableView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)_checkForExceedMaxNumWithCell:(id)arg1 withUser:(scoped_refptr_e1f85e48)arg2;
- (void)_selectForHideAllSelectCellWithTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)_selectForShowAllSelectCellWithTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)searchTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_configSelectContactCell:(id)arg1 atIndexPath:(id)arg2;
- (id)_configSelectAllUserCell:(id)arg1 atIndexPath:(id)arg2;
- (id)contentTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)didClickCancelButton;
- (void)didClickSureButton;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)updateSelectedVid:(id)arg1;
- (id)initWithUsers:(const vector_89e6321f *)arg1 hongbaoSubType:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

