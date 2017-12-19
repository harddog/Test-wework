//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSData, NSMutableDictionary, NSString;

@interface WAMsgNodePermissionInfo : NSObject <PBCoding>
{
    unsigned int localBannedEndTime;
    NSString *appId;
    NSData *permissionBytes;
    NSMutableDictionary *debugMode2LaunchAction;
    NSMutableDictionary *debugMode2WidgetSetting;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *debugMode2WidgetSetting; // @synthesize debugMode2WidgetSetting;
@property(retain, nonatomic) NSMutableDictionary *debugMode2LaunchAction; // @synthesize debugMode2LaunchAction;
@property(nonatomic) unsigned int localBannedEndTime; // @synthesize localBannedEndTime;
@property(retain, nonatomic) NSData *permissionBytes; // @synthesize permissionBytes;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
- (void).cxx_destruct;
- (id)convertDictToString:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)keyWithDebugMode:(unsigned int)arg1 widgetType:(unsigned int)arg2;
- (id)getWidgetSettingWithDebugMode:(unsigned int)arg1 widgetType:(unsigned int)arg2;
- (void)setWidgetSetting:(id)arg1 debugMode:(unsigned int)arg2 widgetType:(unsigned int)arg3;
- (id)getLaunchActionWithDebugMode:(unsigned int)arg1 widgetType:(unsigned int)arg2;
- (void)setLaunchAction:(id)arg1 debugMode:(unsigned int)arg2 widgetType:(unsigned int)arg3;
- (void)setBannedUntil:(unsigned int)arg1;
- (_Bool)isLocalBanned;
- (const map_24f1cf24 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

