//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WXCConfShareReportHelper : NSObject
{
    unsigned int _docRoomId;
    int _docStopStatus;
    int _isDocShareOwner;
    int _docPictureDownloadFailedCnt;
    unsigned int _screenRoomId;
    int _screenStopStatus;
    int _isScreenShareOwner;
    NSString *_docGroupId;
    unsigned long long _docRoomKey;
    unsigned long long _docConvertID;
    unsigned long long _docStartShareReqTime;
    unsigned long long _docStartTime;
    unsigned long long _docEndTime;
    unsigned long long _docLineCompletedCnt;
    unsigned long long _docPageOpCnt;
    unsigned long long _docBigPictureDownloadTime;
    NSString *_screenGroupId;
    unsigned long long _screenRoomKey;
    unsigned long long _screenConvertID;
    unsigned long long _screenStartTime;
    unsigned long long _screenEndTime;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long screenEndTime; // @synthesize screenEndTime=_screenEndTime;
@property(nonatomic) unsigned long long screenStartTime; // @synthesize screenStartTime=_screenStartTime;
@property(nonatomic) int isScreenShareOwner; // @synthesize isScreenShareOwner=_isScreenShareOwner;
@property(nonatomic) int screenStopStatus; // @synthesize screenStopStatus=_screenStopStatus;
@property(nonatomic) unsigned long long screenConvertID; // @synthesize screenConvertID=_screenConvertID;
@property(nonatomic) unsigned long long screenRoomKey; // @synthesize screenRoomKey=_screenRoomKey;
@property(nonatomic) unsigned int screenRoomId; // @synthesize screenRoomId=_screenRoomId;
@property(copy, nonatomic) NSString *screenGroupId; // @synthesize screenGroupId=_screenGroupId;
@property(nonatomic) int docPictureDownloadFailedCnt; // @synthesize docPictureDownloadFailedCnt=_docPictureDownloadFailedCnt;
@property(nonatomic) unsigned long long docBigPictureDownloadTime; // @synthesize docBigPictureDownloadTime=_docBigPictureDownloadTime;
@property(nonatomic) unsigned long long docPageOpCnt; // @synthesize docPageOpCnt=_docPageOpCnt;
@property(nonatomic) unsigned long long docLineCompletedCnt; // @synthesize docLineCompletedCnt=_docLineCompletedCnt;
@property(nonatomic) unsigned long long docEndTime; // @synthesize docEndTime=_docEndTime;
@property(nonatomic) unsigned long long docStartTime; // @synthesize docStartTime=_docStartTime;
@property(nonatomic) unsigned long long docStartShareReqTime; // @synthesize docStartShareReqTime=_docStartShareReqTime;
@property(nonatomic) int isDocShareOwner; // @synthesize isDocShareOwner=_isDocShareOwner;
@property(nonatomic) int docStopStatus; // @synthesize docStopStatus=_docStopStatus;
@property(nonatomic) unsigned long long docConvertID; // @synthesize docConvertID=_docConvertID;
@property(nonatomic) unsigned long long docRoomKey; // @synthesize docRoomKey=_docRoomKey;
@property(nonatomic) unsigned int docRoomId; // @synthesize docRoomId=_docRoomId;
@property(copy, nonatomic) NSString *docGroupId; // @synthesize docGroupId=_docGroupId;
- (void).cxx_destruct;
- (id)p_GenScreenShareValue;
- (id)p_GenDocShareValue;
- (void)p_reportScreenShareEnd;
- (void)reportScreenShareStart:(unsigned long long)arg1 shareOwnerUuid:(unsigned int)arg2;
- (void)p_reportDocShareEnd;
- (void)reportDocShareStart:(unsigned long long)arg1 shareOwnerUuid:(unsigned int)arg2 isShareReq:(_Bool)arg3;
- (void)reportShareEnd;
- (void)resetReportData;
- (id)init;

@end

