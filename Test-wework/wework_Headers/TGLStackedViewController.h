//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSIndexPath, NSString, TGLExposedLayout, TGLStackedLayout, UICollectionViewTransitionLayout, UIGestureRecognizer, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer;

@interface TGLStackedViewController : UICollectionViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>
{
    _Bool _exposedItemsAreCollapsible;
    _Bool _unexposedItemsAreSelectable;
    _Bool _movingItemOnTop;
    _Bool _finishingInteractiveTransition;
    UIPanGestureRecognizer *_collapsePanGestureRecognizer;
    UIPinchGestureRecognizer *_collapsePinchGestureRecognizer;
    TGLStackedLayout *_stackedLayout;
    TGLExposedLayout *_exposedLayout;
    double _exposedTopOverlap;
    double _exposedBottomOverlap;
    unsigned long long _exposedBottomOverlapCount;
    long long _exposedPinningMode;
    unsigned long long _exposedTopPinningCount;
    unsigned long long _exposedBottomPinningCount;
    NSIndexPath *_exposedItemIndexPath;
    double _movingItemScaleFactor;
    double _collapsePanMinimumThreshold;
    double _collapsePanMaximumThreshold;
    double _collapsePinchMinimumThreshold;
    UICollectionViewTransitionLayout *_transitionLayout;
    UILongPressGestureRecognizer *_moveGestureRecognizer;
    NSIndexPath *_movingIndexPath;
    struct CGSize _exposedItemSize;
    struct UIEdgeInsets _exposedLayoutMargin;
}

+ (Class)exposedLayoutClass;
@property(nonatomic, getter=isFinishingInteractiveTransition) _Bool finishingInteractiveTransition; // @synthesize finishingInteractiveTransition=_finishingInteractiveTransition;
@property(retain, nonatomic) NSIndexPath *movingIndexPath; // @synthesize movingIndexPath=_movingIndexPath;
@property(retain, nonatomic) UILongPressGestureRecognizer *moveGestureRecognizer; // @synthesize moveGestureRecognizer=_moveGestureRecognizer;
@property(nonatomic) __weak UICollectionViewTransitionLayout *transitionLayout; // @synthesize transitionLayout=_transitionLayout;
@property(nonatomic) double collapsePinchMinimumThreshold; // @synthesize collapsePinchMinimumThreshold=_collapsePinchMinimumThreshold;
@property(nonatomic) double collapsePanMaximumThreshold; // @synthesize collapsePanMaximumThreshold=_collapsePanMaximumThreshold;
@property(nonatomic) double collapsePanMinimumThreshold; // @synthesize collapsePanMinimumThreshold=_collapsePanMinimumThreshold;
@property(nonatomic) _Bool movingItemOnTop; // @synthesize movingItemOnTop=_movingItemOnTop;
@property(nonatomic) double movingItemScaleFactor; // @synthesize movingItemScaleFactor=_movingItemScaleFactor;
@property(nonatomic) _Bool unexposedItemsAreSelectable; // @synthesize unexposedItemsAreSelectable=_unexposedItemsAreSelectable;
@property(nonatomic) _Bool exposedItemsAreCollapsible; // @synthesize exposedItemsAreCollapsible=_exposedItemsAreCollapsible;
@property(retain, nonatomic) NSIndexPath *exposedItemIndexPath; // @synthesize exposedItemIndexPath=_exposedItemIndexPath;
@property(nonatomic) unsigned long long exposedBottomPinningCount; // @synthesize exposedBottomPinningCount=_exposedBottomPinningCount;
@property(nonatomic) unsigned long long exposedTopPinningCount; // @synthesize exposedTopPinningCount=_exposedTopPinningCount;
@property(nonatomic) long long exposedPinningMode; // @synthesize exposedPinningMode=_exposedPinningMode;
@property(nonatomic) unsigned long long exposedBottomOverlapCount; // @synthesize exposedBottomOverlapCount=_exposedBottomOverlapCount;
@property(nonatomic) double exposedBottomOverlap; // @synthesize exposedBottomOverlap=_exposedBottomOverlap;
@property(nonatomic) double exposedTopOverlap; // @synthesize exposedTopOverlap=_exposedTopOverlap;
@property(nonatomic) struct CGSize exposedItemSize; // @synthesize exposedItemSize=_exposedItemSize;
@property(nonatomic) struct UIEdgeInsets exposedLayoutMargin; // @synthesize exposedLayoutMargin=_exposedLayoutMargin;
@property(retain, nonatomic) TGLExposedLayout *exposedLayout; // @synthesize exposedLayout=_exposedLayout;
@property(retain, nonatomic) TGLStackedLayout *stackedLayout; // @synthesize stackedLayout=_stackedLayout;
- (void).cxx_destruct;
- (void)removeCollapseGestureRecognizersFromView:(id)arg1;
- (void)addCollapseGestureRecognizerToView:(id)arg1;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)handleCollapsePinchGesture:(id)arg1;
- (void)handleCollapsePanGesture:(id)arg1;
- (void)handleMovePressGesture:(id)arg1;
- (void)resetExposedItemIndexPath;
- (void)setExposedItemIndexPath:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UIPinchGestureRecognizer *collapsePinchGestureRecognizer; // @synthesize collapsePinchGestureRecognizer=_collapsePinchGestureRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *collapsePanGestureRecognizer; // @synthesize collapsePanGestureRecognizer=_collapsePanGestureRecognizer;
@property(readonly, nonatomic) UIGestureRecognizer *collapseGestureRecognizer;
- (void)viewDidLoad;
- (void)initController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

