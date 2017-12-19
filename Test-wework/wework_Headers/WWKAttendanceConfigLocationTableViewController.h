//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "WWKAttendanceWiFiInfoTableViewControllerDelegate-Protocol.h"

@class DataWrapper, NSMutableArray, NSString;

@interface WWKAttendanceConfigLocationTableViewController : UITableViewController <WWKAttendanceWiFiInfoTableViewControllerDelegate>
{
    scoped_refptr_75d5a2b5 rule_;
    long long _type;
    DataWrapper *_dataWrapper;
    NSMutableArray *_tableDataSource;
}

@property(retain, nonatomic) NSMutableArray *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
@property(retain, nonatomic) DataWrapper *dataWrapper; // @synthesize dataWrapper=_dataWrapper;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)p_didClickBeginEdit:(id)arg1;
- (void)p_clickNew;
- (id)p_removeTableDataSource:(id)arg1 DataType:(unsigned long long)arg2;
- (_Bool)p_isExistCreateType:(id)arg1;
- (id)p_addTableDataSource:(id)arg1 DataType:(unsigned long long)arg2;
- (_Bool)p_existDataType:(id)arg1;
- (void)attednanceWifiInfoTable:(id)arg1 DidConfirm:(const vector_4a9bf3c6 *)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (id)init;
- (id)initWithCheckinRule:(scoped_refptr_75d5a2b5)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

