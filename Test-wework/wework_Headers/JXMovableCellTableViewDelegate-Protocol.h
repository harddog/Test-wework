//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UITableViewDelegate-Protocol.h"

@class JXMovableCellTableView, NSIndexPath;

@protocol JXMovableCellTableViewDelegate <UITableViewDelegate>

@optional
- (void)tableView:(JXMovableCellTableView *)arg1 endMoveCellAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(JXMovableCellTableView *)arg1 didMoveCellFromIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (void)tableView:(JXMovableCellTableView *)arg1 willMoveCellAtIndexPath:(NSIndexPath *)arg2;
@end

