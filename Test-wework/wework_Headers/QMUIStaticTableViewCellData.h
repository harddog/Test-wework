//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface QMUIStaticTableViewCellData : NSObject
{
    long long _identifier;
    long long _style;
    UIImage *_image;
    NSString *_text;
    NSString *_detailText;
    long long _accessoryType;
    NSObject *_accessoryValueObject;
    id _actionTarget;
    SEL _action;
}

+ (long long)tableViewCellAccessoryTypeWithStaticAccessoryType:(long long)arg1;
+ (id)staticTableViewCellDataWithIdentifier:(long long)arg1 style:(long long)arg2 image:(id)arg3 text:(id)arg4 detailText:(id)arg5 accessoryType:(long long)arg6 accessoryValueObject:(id)arg7 target:(id)arg8 action:(SEL)arg9;
+ (id)staticTableViewCellDataWithIdentifier:(long long)arg1 image:(id)arg2 text:(id)arg3 detailText:(id)arg4 accessoryType:(long long)arg5 target:(id)arg6 action:(SEL)arg7;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) id actionTarget; // @synthesize actionTarget=_actionTarget;
@property(copy, nonatomic) NSObject *accessoryValueObject; // @synthesize accessoryValueObject=_accessoryValueObject;
@property(nonatomic) long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end

