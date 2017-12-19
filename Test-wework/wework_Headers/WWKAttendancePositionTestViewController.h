//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "QMapViewDelegate-Protocol.h"

@class CLLocationManager, NSString, QMapView;

@interface WWKAttendancePositionTestViewController : UIViewController <QMapViewDelegate, CLLocationManagerDelegate>
{
    CLLocationManager *locationManage_;
    QMapView *_mapView;
    struct CLLocationCoordinate2D _coordinate;
    struct CLLocationCoordinate2D _iosApiCoordinate;
    struct CLLocationCoordinate2D _companyCoordinate;
}

@property(nonatomic) struct CLLocationCoordinate2D companyCoordinate; // @synthesize companyCoordinate=_companyCoordinate;
@property(nonatomic) struct CLLocationCoordinate2D iosApiCoordinate; // @synthesize iosApiCoordinate=_iosApiCoordinate;
@property(retain, nonatomic) QMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)p_didClickRightItem:(id)arg1;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

