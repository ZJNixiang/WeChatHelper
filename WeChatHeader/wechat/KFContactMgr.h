//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMMNewSessionMgrExt.h"
#import "IMsgExt.h"
#import "KFContactCacherDelegate.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableDictionary, NSString, WCDataBase;

@interface KFContactMgr : MMService <KFContactCacherDelegate, IMMNewSessionMgrExt, IMsgExt, MMService, PBMessageObserverDelegate>
{
    WCDataBase *_db;
    NSMutableDictionary *_dictBrandUsrName2Cacher;
    NSMutableDictionary *_dictOpenIdOfGettingInfo;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (id)contactCacherForBrandUsr:(id)arg1;
- (void)dealloc;
- (void)deleteAllKfContacts:(id)arg1;
- (id)getBindKFContactFromLocal:(id)arg1;
- (id)getKFContact:(id)arg1 brandUsrName:(id)arg2;
- (void)getKFContactBindList:(id)arg1;
- (void)getKFContactDefaultList:(id)arg1;
- (id)getKFContactWithOpenId:(id)arg1;
- (id)getKFContactsList:(id)arg1 brandUsrName:(id)arg2;
- (void)handleGetKFContactBindList:(id)arg1;
- (void)handleGetKFContactDefaultList:(id)arg1;
- (void)handleGetKFContactInfo:(id)arg1;
- (id)init;
- (id)kfContactListFromWorkinfoList:(id)arg1 brandUsrName:(id)arg2;
- (void)modifyHeadImgUpdateFlag:(id)arg1 isNeedUpdate:(_Bool)arg2;
- (void)onUpdateKFContactInfo:(id)arg1 withBrandUsrName:(id)arg2;
- (id)pathOfKFDB;
- (void)updateBindKFContactToLocal:(id)arg1 bindKFContact:(id)arg2;
- (void)updateKFContactsToLocal:(id)arg1 brandUsrName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
