//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKSimpleTableViewCell.h"

@class NSMutableArray, UIImageView, UILabel;

@interface WWKConversationMembersCell : WWKSimpleTableViewCell
{
    long long _displayAvatarCount;
    double _avatarLeftEdge;
    double _avatarRightEdge;
    double _moreWidth;
    long long _totalMemberCount;
    UILabel *_titleLabel;
    UILabel *_numberLabel;
    UIImageView *_arrawImageView;
    UIImageView *_moreImageView;
    NSMutableArray *_avatars;
}

+ (double)calculateCellHeight;
@property(retain, nonatomic) NSMutableArray *avatars; // @synthesize avatars=_avatars;
@property(retain, nonatomic) UIImageView *moreImageView; // @synthesize moreImageView=_moreImageView;
@property(retain, nonatomic) UIImageView *arrawImageView; // @synthesize arrawImageView=_arrawImageView;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setTitle:(id)arg1;
- (void)setUserOrDepartmentList:(vector_fcf831c7 *)arg1;
- (void)setUsers:(vector_89e6321f)arg1;
- (void)setMembers:(vector_4ea3d2e4)arg1;
- (void)buildAvatarsConstraints;
- (void)buildConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

