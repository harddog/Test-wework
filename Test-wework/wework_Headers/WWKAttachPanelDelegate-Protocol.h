//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WWKAttachPanel;

@protocol WWKAttachPanelDelegate <NSObject>
- (_Bool)wwkAttachPanel:(WWKAttachPanel *)arg1 isNewForType:(long long)arg2;
- (_Bool)wwkAttachPanel:(WWKAttachPanel *)arg1 isActiveForType:(long long)arg2;
- (void)wwkAttachPanel:(WWKAttachPanel *)arg1 didClickType:(long long)arg2;
@end

