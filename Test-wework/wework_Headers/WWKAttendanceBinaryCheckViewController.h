//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKAttendanceCheckCommonViewController.h"

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, NSTimerProxy, WWKAttendationBreakHintCellView, WWKLocationRetriever;

@interface WWKAttendanceBinaryCheckViewController : WWKAttendanceCheckCommonViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    struct unique_ptr<ww_attendance::CacheLocationInfo, std::__1::default_delete<ww_attendance::CacheLocationInfo>> current_location_info_;
    struct unique_ptr<ww_attendance::WifiInfo, std::__1::default_delete<ww_attendance::WifiInfo>> current_wifi_info_;
    unsigned long long success_create_checkinid_;
    scoped_refptr_e21d2ae3 update_attendace_;
    scoped_refptr_e21d2ae3 notification_attendace_;
    unsigned long long update_checkin_id_;
    struct unique_ptr<ClosureThrottling<std::__1::basic_string<char>>, std::__1::default_delete<ClosureThrottling<std::__1::basic_string<char>>>> fetchPoi_throttling_;
    _Bool _isOverTime;
    WWKAttendationBreakHintCellView *_breakHintCellView;
    long long _fromType;
    CDUnknownBlockType _imageResultBlock;
    CDUnknownBlockType _imageCancelBlock;
    CDUnknownBlockType _locationBlock;
    WWKLocationRetriever *_locationRetriever;
    CDUnknownBlockType _overTimeFinishBlock;
    NSTimerProxy *_wifiRefreshTimer;
}

+ (struct WifiInfo)getCurrentWifiInfo;
@property(retain, nonatomic) NSTimerProxy *wifiRefreshTimer; // @synthesize wifiRefreshTimer=_wifiRefreshTimer;
@property(copy, nonatomic) CDUnknownBlockType overTimeFinishBlock; // @synthesize overTimeFinishBlock=_overTimeFinishBlock;
@property(nonatomic) _Bool isOverTime; // @synthesize isOverTime=_isOverTime;
@property(retain, nonatomic) WWKLocationRetriever *locationRetriever; // @synthesize locationRetriever=_locationRetriever;
@property(copy, nonatomic) CDUnknownBlockType locationBlock; // @synthesize locationBlock=_locationBlock;
@property(copy, nonatomic) CDUnknownBlockType imageCancelBlock; // @synthesize imageCancelBlock=_imageCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType imageResultBlock; // @synthesize imageResultBlock=_imageResultBlock;
@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(retain, nonatomic) WWKAttendationBreakHintCellView *breakHintCellView; // @synthesize breakHintCellView=_breakHintCellView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)p_checkShowWifiTips;
- (void)p_HandleOverTimeButton;
- (void)p_HandleOverTime;
- (_Bool)p_HandleHoliday:(scoped_refptr_4757c6a0)arg1;
- (void)p_updateDataSource:(CDUnknownBlockType)arg1;
- (void)p_wwkAttendanceItemDidChange:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)p_onAutoJudgeLocationException:(id)arg1;
- (void)p_remoteJudgeExceptionByLocations:(id)arg1 byResultType:(unsigned long long)arg2 andWifi:(const struct WifiInfo *)arg3;
- (void)p_localJudgeWifiExceptionByWifiInfo:(const struct WifiInfo *)arg1 andLocationExceptionByLocations:(id)arg2 byLocationResult:(unsigned long long)arg3;
- (void)p_localJudgeLocationExceptionByLocations:(id)arg1 byLocationResult:(unsigned long long)arg2;
- (void)p_localJudgeWifiException:(const struct WifiInfo *)arg1;
- (void)p_makeBinaryCheckWithAttendance:(scoped_refptr_e21d2ae3)arg1;
- (void)p_handleAdditionImageAndTextWithAttendance:(scoped_refptr_e21d2ae3)arg1 photoArray:(id)arg2 andTextnote:(id)arg3;
- (void)p_goToConfirm:(scoped_refptr_e21d2ae3)arg1;
- (void)p_handleCreateAttendanceSuccess:(scoped_refptr_e21d2ae3)arg1;
- (void)p_handleCreateAttendanceNotSupport:(scoped_refptr_e21d2ae3)arg1;
- (void)p_handleCreateAttendanceError:(scoped_refptr_e21d2ae3)arg1;
- (void)p_handleAheadTimeExcetion:(scoped_refptr_e21d2ae3)arg1 andWording:(const basic_string_a490aa4c *)arg2;
- (void)p_handleWifiExcetion:(scoped_refptr_e21d2ae3)arg1;
- (void)p_handleNoException:(scoped_refptr_e21d2ae3)arg1;
- (void)p_handleNotContinueException:(scoped_refptr_e21d2ae3)arg1 wording:(const basic_string_a490aa4c *)arg2;
- (void)p_handleTimeException:(scoped_refptr_e21d2ae3)arg1;
- (void)p_handleLocationException:(scoped_refptr_e21d2ae3)arg1;
- (void)p_handleDeviceException:(scoped_refptr_e21d2ae3)arg1;
- (void)p_goToViewRecheckin:(scoped_refptr_e21d2ae3)arg1;
- (void)p_onAttendanceRecheck:(scoped_refptr_e21d2ae3)arg1 status:(int)arg2 url:(id)arg3;
- (void)wajs_onAttendanceRecheck:(id)arg1;
- (void)p_goToApplyRecheckin:(scoped_refptr_e21d2ae3)arg1;
- (void)p_goToReportDetail:(scoped_refptr_e21d2ae3)arg1;
- (void)p_handleExcpetionLogicErrorCode:(int)arg1 excepType:(unsigned int)arg2 attendance:(scoped_refptr_e21d2ae3)arg3 andWording:(basic_string_a490aa4c)arg4;
- (void)p_precheckExceptWithClickButton:(id)arg1;
- (scoped_refptr_e21d2ae3)p_prepareCheckExceptData:(id)arg1;
- (void)p_openCamera:(scoped_refptr_e21d2ae3)arg1;
- (void)p_onDismiss;
- (void)p_didClickBreakHint;
- (void)p_didClickLocationReloadButton:(id)arg1;
- (void)p_didClickOverTime:(id)arg1;
- (void)p_didClickChangeCheckinTime:(id)arg1;
- (void)p_showAPNSCloseTips;
- (void)p_OnWifiUpdate:(id)arg1;
- (void)cm_handleUpdateLocations:(id)arg1;
- (void)cm_handleUpdateLocationFailed;
- (void)cm_handleClickCheckinButton;
- (void)cm_finishLocationTask:(_Bool)arg1 AndDataTask:(_Bool)arg2;
- (void)judgeLocationWithLocationResult:(unsigned long long)arg1 locations:(id)arg2 AndWifiException:(const struct WifiInfo *)arg3;
- (id)initWithOverTimeBlock:(CDUnknownBlockType)arg1;
- (id)initWithAttendance:(scoped_refptr_e21d2ae3)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (void)rl_updateUI_V3_Schedule:(CDUnknownBlockType)arg1;
- (void)rl_updateUI_V3_FreeCheck:(scoped_refptr_4757c6a0)arg1 andTodayList:(list_1084d68b *)arg2;
- (void)rl_updateUI_V3:(scoped_refptr_4757c6a0)arg1 andTodayList:(list_1084d68b *)arg2 block:(CDUnknownBlockType)arg3;
- (void)rl_sortAttendanceRecordByTime_V2:(list_1084d68b *)arg1;
- (unsigned int)rl_offWorkSecWithTimeLineID_V2:(unsigned int)arg1 andManageInfo:(scoped_refptr_4757c6a0)arg2;
- (unsigned int)rl_nextTimeLineIDWithTimeLineID_V2:(unsigned int)arg1 andManageInfo:(scoped_refptr_4757c6a0)arg2;
- (unsigned int)rl_nextTimeLineWorkSecWithTimeLineID_V2:(unsigned int)arg1 andManageInfo:(scoped_refptr_4757c6a0)arg2;
- (unsigned int)rl_workSecWithTimeLineID_V2:(unsigned int)arg1 andManageInfo:(scoped_refptr_4757c6a0)arg2;
- (_Bool)rl_updateUI_V2NeedOffWork:(const scoped_refptr_4757c6a0 *)arg1 andTodayList:(list_1084d68b *)arg2;
- (_Bool)rl_updateUI_V2:(const scoped_refptr_4757c6a0 *)arg1 andTodayList:(list_1084d68b *)arg2;
- (_Bool)rl_updateUI_V2NoNeedOffWork:(const scoped_refptr_4757c6a0 *)arg1 andTodayList:(list_1084d68b *)arg2;
- (id)rl_configRecordHintisOn:(_Bool)arg1 mintes:(unsigned int)arg2;
- (void)rl_configBreakHintCell:(id)arg1;
- (void)rl_configFinishAllCheck_V1;
- (_Bool)rl_updateUI_V1:(const scoped_refptr_4757c6a0 *)arg1 andTodayList:(const list_1084d68b *)arg2;
- (long long)rl_getCurrentBinaryTimeType_V1:(const scoped_refptr_4757c6a0 *)arg1;
- (unsigned int)rl_getTodayBinaryCheckStatus_V1:(const list_1084d68b *)arg1;
- (void)rl_hideChangeOffWorkTimeButton;
- (void)rl_removeBreakHintCell;
- (scoped_refptr_e21d2ae3)rl_getLastOffWorkRecord;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

