//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WWKWeAppWrapper : NSObject
{
}

+ (void)jsReport:(unsigned int)arg1 reportKey:(id)arg2 reprotValue:(int)arg3;
+ (void)updateApprovalWeApp;
+ (_Bool)approvalWeAppEnabled;
+ (void)openPreviewDocument:(id)arg1 withViewController:(id)arg2;
+ (id)selectFileVisFav:(CDUnknownBlockType)arg1;
+ (id)makeSelectContactViewControllerWithType:(unsigned long long)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)forwardMockedWeAppPackage:(id)arg1 infoDictionary:(id)arg2;
+ (void)forwardLinkMessage:(id)arg1;
+ (_Bool)openWeAppUniversalLink:(id)arg1 scene:(unsigned long long)arg2 withNavigationController:(id)arg3;
+ (CDUnknownBlockType)openWeAppUniversalLink:(id)arg1 scene:(unsigned long long)arg2;
+ (_Bool)bridgeCGIRequest:(unsigned int)arg1 data:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)requestLoginSt:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

