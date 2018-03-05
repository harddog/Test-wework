//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWOCRProcBase.h"

@class NSArray;

@interface WWSMLOCRInstance : WWOCRProcBase
{
    _Bool _isUpdatingAnalysis;
    unsigned long long _frequencyOfContinuousSamePoints;
    unsigned long long _frequencyOfContinuousSamePointsThreshold;
    NSArray *_latestCorners;
    NSArray *_cornerArr;
    double _brightnessValue;
    struct CGSize _pointImgSize;
}

@property(nonatomic) struct CGSize pointImgSize; // @synthesize pointImgSize=_pointImgSize;
@property(nonatomic) double brightnessValue; // @synthesize brightnessValue=_brightnessValue;
@property(retain, nonatomic) NSArray *cornerArr; // @synthesize cornerArr=_cornerArr;
@property(nonatomic) _Bool isUpdatingAnalysis; // @synthesize isUpdatingAnalysis=_isUpdatingAnalysis;
@property(retain, nonatomic) NSArray *latestCorners; // @synthesize latestCorners=_latestCorners;
@property(nonatomic) unsigned long long frequencyOfContinuousSamePointsThreshold; // @synthesize frequencyOfContinuousSamePointsThreshold=_frequencyOfContinuousSamePointsThreshold;
@property(nonatomic) unsigned long long frequencyOfContinuousSamePoints; // @synthesize frequencyOfContinuousSamePoints=_frequencyOfContinuousSamePoints;
- (void).cxx_destruct;
- (void)cornerArrFromImage:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)genScanResultFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 completed:(CDUnknownBlockType)arg2;
- (void)processCaptureOutPut:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;

@end
