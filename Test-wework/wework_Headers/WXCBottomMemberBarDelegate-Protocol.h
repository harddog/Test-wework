//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WXCBottomMemberBar, WXCPstnMember;

@protocol WXCBottomMemberBarDelegate <NSObject>

@optional
- (void)actionButtonClickedForMemberBar:(WXCBottomMemberBar *)arg1;
- (void)memberBar:(WXCBottomMemberBar *)arg1 didClickedMember:(WXCPstnMember *)arg2 atSequenceNum:(int)arg3;
@end

