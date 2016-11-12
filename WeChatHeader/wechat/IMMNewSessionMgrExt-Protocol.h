//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap, MMSessionInfo, NSString;

@protocol IMMNewSessionMgrExt <NSObject>

@optional
- (void)getComparer:(id *)arg1 ForSelector:(int)arg2;
- (void)isMessage:(CMessageWrap *)arg1 Handled:(_Bool *)arg2;
- (void)isUser:(NSString *)arg1 Handled:(_Bool *)arg2;
- (void)isUser:(NSString *)arg1 hasSpecalSessionInfo:(id *)arg2;
- (void)onActiveUsrNameChange:(NSString *)arg1 curUsrName:(NSString *)arg2;
- (void)onDeleteSession:(unsigned int)arg1 withUser:(NSString *)arg2;
- (void)onDeleteSessionOfUser:(NSString *)arg1;
- (void)onNeedReload;
- (void)onNewMsgArriving:(MMSessionInfo *)arg1 NotifyFlag:(int)arg2;
- (void)onSessionChanged:(MMSessionInfo *)arg1;
- (void)onSessionRebuildBegin;
- (void)onSessionRebuildEnd;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (void)onSessionUpgrade;
@end
