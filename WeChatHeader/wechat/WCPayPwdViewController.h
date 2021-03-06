//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "CSettingExt.h"
#import "MMPatternLockLogicDelegate.h"
#import "MMPatternLockMgrExt.h"
#import "WCPayDigitalCertManageViewControllerDelegate.h"

@class MMBadgeView, MMTableViewCellInfo, NSDictionary, NSString;

@interface WCPayPwdViewController : WCPayBaseViewController <WCPayDigitalCertManageViewControllerDelegate, MMPatternLockLogicDelegate, CSettingExt, MMPatternLockMgrExt>
{
    id <WCPayPwdViewControllerDelegate> m_delegate;
    _Bool _isDeductShowNew;
    unsigned int _patternLockLogicTag;
    unsigned long long _patternLockStatus;
    long long _curScene;
    MMTableViewCellInfo *_switchCellInfo;
    MMTableViewCellInfo *_touchIDSwitchCellInfo;
    MMBadgeView *_touchIDSwithBadgeView;
    NSDictionary *_payManageData;
    MMTableViewCellInfo *_payManageCellInfo;
}

- (void).cxx_destruct;
- (void)OnBack;
@property(nonatomic) long long curScene; // @synthesize curScene=_curScene;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)getEnteranceViewContoller;
- (void)gotoPayManage:(id)arg1;
- (id)init;
- (void)initCellView;
- (void)initPayManageDataFromCacheOrNetwork;
@property(nonatomic) _Bool isDeductShowNew; // @synthesize isDeductShowNew=_isDeductShowNew;
@property(nonatomic) __weak id <WCPayPwdViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)makeRealnameCell:(id)arg1 CellInfo:(id)arg2;
- (void)onDigitalCertManage;
- (void)onModifyPatternLock;
- (void)onModifyPwd;
- (void)onPatternLockLogicOperateCancel;
- (void)onPatternLockLogicOperateSuccess;
- (void)onPatternLockSvrCheckStatusBack:(unsigned long long)arg1;
- (void)onRealname;
- (void)onRealnameVerifySuccess;
- (void)onResetPwd;
- (void)onSettingChanged:(int)arg1;
- (void)onSwitchChange:(id)arg1;
- (void)onTouchIDSwitchChanged:(id)arg1;
- (void)onWCPayDigitalCertManageViewControllerCallRefresh;
@property(nonatomic) unsigned int patternLockLogicTag; // @synthesize patternLockLogicTag=_patternLockLogicTag;
@property(nonatomic) unsigned long long patternLockStatus; // @synthesize patternLockStatus=_patternLockStatus;
@property(retain, nonatomic) MMTableViewCellInfo *payManageCellInfo; // @synthesize payManageCellInfo=_payManageCellInfo;
@property(retain, nonatomic) NSDictionary *payManageData; // @synthesize payManageData=_payManageData;
- (void)reloadTable;
- (void)reloadTableFromCache;
@property(retain, nonatomic) MMTableViewCellInfo *switchCellInfo; // @synthesize switchCellInfo=_switchCellInfo;
@property(retain, nonatomic) MMTableViewCellInfo *touchIDSwitchCellInfo; // @synthesize touchIDSwitchCellInfo=_touchIDSwitchCellInfo;
- (void)setTouchIDSwitchValue:(_Bool)arg1;
@property(retain, nonatomic) MMBadgeView *touchIDSwithBadgeView; // @synthesize touchIDSwithBadgeView=_touchIDSwithBadgeView;
- (void)showNewForCellIfNeed:(id)arg1;
- (void)showNewForDeductCellIfNeeded;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

