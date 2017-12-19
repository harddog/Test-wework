//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, RqdLocalStrategy;

@interface RqdFilePersistHandler : NSObject
{
    NSString *folderPath;
    NSString *crashMetaFile;
    NSString *userinfoFile;
    NSString *cmmstrategyFile;
    NSMutableArray *allUserInfos;
    NSMutableDictionary *allCrashMetas;
    RqdLocalStrategy *commonStrategyData;
    _Bool dataLoaded;
    _Bool strategyLoaded;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void)persistAllUserInfoDatas;
- (int)getCurrSize;
- (id)getAllDatas;
- (_Bool)deleteDatas:(id)arg1;
- (_Bool)saveOneData:(id)arg1;
- (id)getByMeta:(id)arg1;
- (id)getCrashesNeedUpload:(int)arg1;
- (id)getCrashesNeedDel;
- (id)getAllCrashed:(int)arg1;
- (_Bool)deleteCrashes:(id)arg1;
- (_Bool)deleteCrash:(id)arg1;
- (_Bool)deleteCrashMeta:(id)arg1;
- (id)getCrashWithMd5:(id)arg1;
- (id)getLatestCrash;
- (_Bool)deleteAllInvalidCrashes;
- (_Bool)deleteAllCrashes;
- (_Bool)updateOneCrash:(id)arg1 uplaoded:(_Bool)arg2;
- (_Bool)updateOneCrash:(id)arg1;
- (_Bool)saveOneCrash:(id)arg1;
- (_Bool)hasCrash;
- (void)persistAllCrashMetaDatas;
- (_Bool)saveCommonStrategy:(id)arg1;
- (id)loadCommonStrategyFile;
- (void)loadStrategys;
- (void)loadAllDatas;
- (_Bool)changeDbPath:(id)arg1;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

