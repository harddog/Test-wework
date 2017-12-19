//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKTableViewController.h"

#import "WWKCustomerEditDelegate-Protocol.h"
#import "WWKTableViewDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface WWKCustomerEditViewController : WWKTableViewController <WWKTableViewDelegate, WWKCustomerEditDelegate>
{
    scoped_refptr_da27765f _customer;
    _Bool _clearButtonControl;
    NSMutableArray *_dataList;
    NSMutableArray *_dataSource;
}

@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)customerEditCellDidEndEditing:(id)arg1;
- (void)customerEditCellDidBeginEditing:(id)arg1;
- (id)indexPathForItem:(id)arg1;
- (void)customerEditCellDidGoNextEditingField:(id)arg1;
- (void)customerEditCell:(id)arg1 didUpdateValue:(id)arg2;
- (void)updateTableViewRowHeight;
- (void)customerEditCell:(id)arg1 reportLayoutHeight:(double)arg2;
- (void)wwkTableViewDidEndTouch;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)p_checkHasChangeFieldInfo;
- (_Bool)p_checkCStringValueIsBlank:(basic_string_a490aa4c)arg1;
- (void)p_storeCustomer:(struct Customer *)arg1;
- (void)p_updateNavigationItem;
- (void)p_buildDataSource;
- (void)p_initUI;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)finishDidClick:(id)arg1;
- (void)cancelDidClick:(id)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCustomer:(scoped_refptr_da27765f)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

