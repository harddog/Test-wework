//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKAskApprovalBaseDataWrapper.h"

@class NSString;

@interface WWKAskLeaveDataWrapper : WWKAskApprovalBaseDataWrapper
{
    struct ScLeaveInfo _leaveInfo;
    NSString *_leftTitle;
    NSString *_dateStr;
    NSString *_startTimeStr;
    NSString *_endTimeStr;
    int _applyStatus;
}

@property(nonatomic) int applyStatus; // @synthesize applyStatus=_applyStatus;
@property(retain, nonatomic) NSString *endTimeStr; // @synthesize endTimeStr=_endTimeStr;
@property(retain, nonatomic) NSString *startTimeStr; // @synthesize startTimeStr=_startTimeStr;
@property(retain, nonatomic) NSString *dateStr; // @synthesize dateStr=_dateStr;
@property(retain, nonatomic) NSString *leftTitle; // @synthesize leftTitle=_leftTitle;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)linkStr;
- (id)initWithDateItem:(struct ScLeaveInfo)arg1;

@end

