//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WWKSelectAppointedContactsController, WWKSelectContactCell;

@protocol WWKSelectAppointedContactsControllerDelegate <NSObject>
- (void)selectAppointedContactsController:(WWKSelectAppointedContactsController *)arg1 didConfirmToSelectContacts:(vector_89e6321f)arg2;

@optional
- (void)configCellSubRightSubtitle:(WWKSelectContactCell *)arg1;
- (NSString *)titleForNumberExceedMaxForSelectAppointedContactsController:(WWKSelectAppointedContactsController *)arg1;
- (int)numOfMaxSelectedContactsForSelectAppointedContactsController:(WWKSelectAppointedContactsController *)arg1;
- (void)didClickCancelButtonInSelectAppointedContactsController:(WWKSelectAppointedContactsController *)arg1;
@end
