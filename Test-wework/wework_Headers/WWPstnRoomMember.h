//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, WXCPstnMember;

@interface WWPstnRoomMember : NSObject
{
    WXCPstnMember *_lazyMember;
    unsigned int _status;
    unsigned int _reason;
    unsigned int _memberId;
    unsigned int _role;
    unsigned long long _vid;
    unsigned long long _inviteVid;
    NSString *_phoneNumber;
    NSString *_vidName;
}

+ (id)createOnePstnMember:(unsigned long long)arg1 phoneNumber:(id)arg2 searchBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) unsigned int role; // @synthesize role=_role;
@property(copy, nonatomic) NSString *vidName; // @synthesize vidName=_vidName;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(nonatomic) unsigned int memberId; // @synthesize memberId=_memberId;
@property(nonatomic) unsigned int reason; // @synthesize reason=_reason;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) unsigned long long inviteVid; // @synthesize inviteVid=_inviteVid;
@property(nonatomic) unsigned long long vid; // @synthesize vid=_vid;
- (void).cxx_destruct;
- (id)pstnMember;
- (void)resetPstnMember;

@end

