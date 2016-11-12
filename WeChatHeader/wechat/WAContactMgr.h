//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMConfigMgrExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface WAContactMgr : MMService <MMConfigMgrExt, PBMessageObserverDelegate, MMKernelExt, MMService>
{
    NSMutableDictionary *_dicContactCache;
    NSMutableArray *_arrSingleAttrSyncWait;
    NSMutableSet *_setSingleAttrSyncRequest;
    unsigned int _singleAttrSyncRequestInterval;
    NSMutableArray *_arrBatchAttrSyncWait;
    NSMutableSet *_setBatchAttrSyncRequest;
    unsigned int _batchAttrSyncRequestInterval;
    _Bool _isLoadAllFocusContact;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)batchUpdateWeAppContact:(id)arg1;
- (void)callExtensionDeleteContact:(id)arg1;
- (void)callExtensionModifyContact:(id)arg1;
- (void)checkBatchBizAttrSyncWaitQueue;
- (void)checkBizAttrSyncWaitQueue;
- (void)clearBizAttrSyncBufferTime:(id)arg1;
- (void)dealloc;
- (void)deleteWeAppContactList:(id)arg1;
- (_Bool)focusWeAppContact:(id)arg1 scene:(unsigned int)arg2 qrcodeScene:(unsigned int)arg3;
- (id)getAllFocusContactFromCache;
- (id)getAllFocusWeAppContact;
- (id)getAllNoFocusWeAppContact;
- (id)getContactFromCache:(id)arg1;
- (id)getWeAppContact:(id)arg1;
- (_Bool)hasContact:(id)arg1;
- (id)init;
@property _Bool isLoadAllFocusContact; // @synthesize isLoadAllFocusContact=_isLoadAllFocusContact;
- (void)loadBizAttrSyncRequestInterval;
- (void)mainThread_batchUpdateWeAppContact:(id)arg1;
- (void)mainThread_updateWeAppContact:(id)arg1;
- (_Bool)modifyWxAppOptWithBitMask:(unsigned int)arg1 bitValue:(unsigned int)arg2 userName:(id)arg3;
- (void)onInitOK;
- (void)onMMDynamicConfigUpdated;
- (void)onResponseAddWxApp:(id)arg1;
- (void)onResponseBatchBizAttrSync:(id)arg1;
- (void)onResponseBizAttrSync:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)processBatchBizAttrSyncResponse:(id)arg1;
- (void)processBizAttrSyncResponse:(id)arg1 withRequest:(id)arg2;
- (void)removeContactListInCache:(id)arg1;
- (_Bool)requestBatchBizAttrSync:(id)arg1 versionList:(id)arg2;
- (_Bool)requestBizAttrSync:(id)arg1;
- (void)setAllFocusContactListToCache:(id)arg1;
- (void)setContactListToCache:(id)arg1;
- (void)thread_onServerDelContact:(id)arg1;
- (void)thread_onServerModContactList:(id)arg1;
- (void)unfocusWeAppContact:(id)arg1;
- (void)updateContact:(id)arg1 withBizAttr:(id)arg2;
- (void)updateContactCacheAndCallModifyContact:(id)arg1;
- (_Bool)updateContactListToDBAndCallModify:(id)arg1;
- (void)updateFocusContactAfterInitOK;
- (void)updateWeAppContact:(id)arg1;
- (void)updateWeAppContact:(id)arg1 isForce:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
