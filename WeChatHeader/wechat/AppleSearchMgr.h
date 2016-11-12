//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMPatternLockLogicDelegate.h"
#import "MMService.h"
#import "MMUIViewControllerDelegate.h"

@class MMUIViewController, NSString;

@interface AppleSearchMgr : MMService <MMPatternLockLogicDelegate, MMUIViewControllerDelegate, MMService>
{
    _Bool m_hasIndexSearch;
    MMUIViewController *m_moreVc;
    unsigned int m_patternLockLogicTag;
}

- (void).cxx_destruct;
- (id)genFeatureSearchItem:(id)arg1 title:(id)arg2 keywords:(id)arg3;
- (id)getEnteranceViewContoller;
- (id)getViewController;
- (void)indexActivities;
- (void)onPatternLockLogicOperateCancel;
- (void)onPatternLockLogicOperateSuccess;
- (void)openFeature:(id)arg1;
- (void)openQuickPay;
- (void)openQuickPayOnVc:(id)arg1;
- (id)openShake:(int)arg1 isSupported:(_Bool)arg2 currentVc:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
