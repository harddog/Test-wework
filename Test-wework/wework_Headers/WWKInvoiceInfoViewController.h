//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "InvoiceProxyObserverDelegate-Protocol.h"
#import "WWKQRScanViewControllerDelegate-Protocol.h"
#import "WWKSubmitInvoiceViewControllerDelegate-Protocol.h"
#import "WWKWXWebViewControllerDelegate-Protocol.h"

@class NSString, UIButton, UIScrollView, WWKInvoiceInfoView;

@interface WWKInvoiceInfoViewController : UIViewController <WWKQRScanViewControllerDelegate, WWKSubmitInvoiceViewControllerDelegate, InvoiceProxyObserverDelegate, WWKWXWebViewControllerDelegate>
{
    scoped_refptr_e086aaa7 invoice_;
    struct unique_ptr<InvoiceSmartProxyObserver, std::__1::default_delete<InvoiceSmartProxyObserver>> smart_invoice_proxy_observer_;
    WWKInvoiceInfoView *_invoiceInfoView;
    UIButton *_submitButton;
    UIScrollView *_scrollView;
}

@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) WWKInvoiceInfoView *invoiceInfoView; // @synthesize invoiceInfoView=_invoiceInfoView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)OnDelete:(scoped_refptr_e086aaa7)arg1;
- (void)OnPropertyChanged:(scoped_refptr_e086aaa7)arg1;
- (void)submitInvoiceViewController:(id)arg1 didSubmit:(_Bool)arg2;
- (_Bool)webViewController:(id)arg1 shouldStartLoadWithRequest:(id)arg2;
- (void)QRScanViewControllerDidDismiss:(id)arg1;
- (_Bool)QRScanViewController:(id)arg1 didOutputContent:(id)arg2 withType:(unsigned long long)arg3;
- (void)showInvalidURLController:(id)arg1;
- (void)onSubmit:(id)arg1;
- (void)editDidClick:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithInvoice:(const scoped_refptr_e086aaa7 *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

