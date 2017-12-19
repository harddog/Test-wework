//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MWXCMObject.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSObject, NSRecursiveLock, NSString;
@protocol AVVideoDataSource, AVVideoDeviceDelegate, OS_dispatch_queue;

@interface AVVideoDevice : MWXCMObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    struct opaqueCMSampleBuffer *_mSampleBuffer;
    _Bool _isForHeartRate;
    int videoDevErrCode;
    int _mIsMultiVideo;
    AVCaptureSession *session;
    AVCaptureDeviceInput *videoInput;
    AVCaptureVideoDataOutput *videoDataOutput;
    id <AVVideoDeviceDelegate> delegate;
    id <AVVideoDataSource> dataSource;
    NSRecursiveLock *m_startSessionLock;
    NSObject<OS_dispatch_queue> *m_videoSessionQueue;
    char *mCameraBuf;
    id <AVVideoDataSource> mRecDevCallBack;
    AVCaptureVideoPreviewLayer *_layer;
    long long _mRestartDeviceRetryCount;
}

@property(nonatomic) long long mRestartDeviceRetryCount; // @synthesize mRestartDeviceRetryCount=_mRestartDeviceRetryCount;
@property(nonatomic) _Bool isForHeartRate; // @synthesize isForHeartRate=_isForHeartRate;
@property(nonatomic) int mIsMultiVideo; // @synthesize mIsMultiVideo=_mIsMultiVideo;
@property(nonatomic) AVCaptureVideoPreviewLayer *layer; // @synthesize layer=_layer;
@property(nonatomic) id <AVVideoDataSource> mRecDevCallBack; // @synthesize mRecDevCallBack;
@property(nonatomic) char *mCameraBuf; // @synthesize mCameraBuf;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *m_videoSessionQueue; // @synthesize m_videoSessionQueue;
@property(nonatomic) int videoDevErrCode; // @synthesize videoDevErrCode;
@property(retain, nonatomic) NSRecursiveLock *m_startSessionLock; // @synthesize m_startSessionLock;
@property(nonatomic) id <AVVideoDataSource> dataSource; // @synthesize dataSource;
@property id <AVVideoDeviceDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput; // @synthesize videoDataOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *videoInput; // @synthesize videoInput;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session;
- (void).cxx_destruct;
- (void)ensureVideoSessionQueue;
- (_Bool)isCameraFront;
- (unsigned long long)cameraCount;
- (void)toggleCamera;
- (id)getJpegData;
- (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)previewLayer:(struct CGRect)arg1;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (void)stopSession;
- (void)startSession;
- (_Bool)isRunning;
- (void)onVideoInterruptEnd:(id)arg1;
- (void)onVideoInterrupt:(id)arg1;
- (void)onVideoStop:(id)arg1;
- (void)onVideoStart:(id)arg1;
- (void)onVideoError:(id)arg1;
- (_Bool)setupSessionWithCameraFront:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (id)cameraWithPosition:(long long)arg1;
- (id)backFacingCamera;
- (id)frontFacingCamera;
- (void)setTorchModeOff;
- (void)setTorchModeOn;
- (void)setFlashModeOff;
- (void)setFlashModeOn;
- (void)setFrameDuration;
- (int)getCaptureFps;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)newVideoSample:(struct opaqueCMSampleBuffer *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

