//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "MMDatabaseRecoverMgrDelegate.h"
#import "UIAlertViewDelegate.h"

@class MMDBRecoverContext, MMLoadingView, MMTimer, NSString, UIButton, UILabel;

@interface MMDBRecoverViewController : MMWindowViewController <MMDatabaseRecoverMgrDelegate, UIAlertViewDelegate>
{
    MMTimer *_progressTimer;
    float _progress;
    _Bool m_hasClickCancel;
    _Bool m_hasClickConfirm;
    _Bool m_isLowSpace;
    MMDBRecoverContext *m_recoverContext;
    MMLoadingView *m_loadingView;
    NSString *m_tip;
    UILabel *m_tipLabel;
    unsigned long long m_suggestSize;
    unsigned long long m_restSize;
    MMTimer *m_timer;
    UIButton *m_btnConfirm;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkIsLowSpace;
- (void)dealloc;
- (void)delayExecuteConfirm;
- (void)hideRecoverView;
- (id)init;
- (id)lowFreeDiskTip;
@property(retain, nonatomic) UIButton *m_btnConfirm; // @synthesize m_btnConfirm;
@property(nonatomic) _Bool m_hasClickCancel; // @synthesize m_hasClickCancel;
@property(nonatomic) _Bool m_hasClickConfirm; // @synthesize m_hasClickConfirm;
@property(nonatomic) _Bool m_isLowSpace; // @synthesize m_isLowSpace;
@property(retain, nonatomic) MMLoadingView *m_loadingView; // @synthesize m_loadingView;
@property(retain, nonatomic) MMDBRecoverContext *m_recoverContext; // @synthesize m_recoverContext;
@property(nonatomic) unsigned long long m_restSize; // @synthesize m_restSize;
@property(nonatomic) unsigned long long m_suggestSize; // @synthesize m_suggestSize;
@property(retain, nonatomic) MMTimer *m_timer; // @synthesize m_timer;
@property(retain, nonatomic) NSString *m_tip; // @synthesize m_tip;
@property(retain, nonatomic) UILabel *m_tipLabel; // @synthesize m_tipLabel;
- (void)onAutoRecoverEndWithResult:(_Bool)arg1 errorMsg:(id)arg2;
- (void)onCancel;
- (void)onConfirm;
- (void)onRecoverProgressUpdate:(float)arg1;
- (void)onStopRenewLowSpaceTipLoading;
- (void)renewLowSpaceTip;
- (void)setupData;
- (void)setupView;
- (void)showRecoverView;
- (void)startLoading;
- (void)stopLoading;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateConfirmBtnStatus;
- (void)updateProgress;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

