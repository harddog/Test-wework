//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RqdNetRequestDelegatge-Protocol.h"

@class NSMutableArray, NSString, RqdExtensionSandboxManager;

@interface RqdExtensionExceptionManager : NSObject <RqdNetRequestDelegatge>
{
    _Bool _uploading;
    NSString *_appGroupIdentifier;
    RqdExtensionSandboxManager *_sandboxManager;
    NSMutableArray *_uploadingFiles;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *uploadingFiles; // @synthesize uploadingFiles=_uploadingFiles;
@property(retain, nonatomic) RqdExtensionSandboxManager *sandboxManager; // @synthesize sandboxManager=_sandboxManager;
@property(nonatomic, getter=isUploading) _Bool uploading; // @synthesize uploading=_uploading;
@property(copy, nonatomic) NSString *appGroupIdentifier; // @synthesize appGroupIdentifier=_appGroupIdentifier;
- (void).cxx_destruct;
- (void)handleWatchKitExtensionRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)failWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)finishWithResponse:(id)arg1 reqPkg:(id)arg2;
- (_Bool)deleteAllExceptions;
- (id)allExceptions;
- (id)exceptionFromFileURL:(id)arg1;
- (_Bool)saveException:(id)arg1;
- (void)upload:(id)arg1 bundleid:(id)arg2;
- (void)checkAndUpload;
- (id)packetExtraValues:(id)arg1;
- (id)packageDataWithException:(id)arg1;
@property(readonly, nonatomic, getter=isAppGroupAvailable) _Bool appGroupAvailable;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

