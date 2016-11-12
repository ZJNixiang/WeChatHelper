//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ChatMigrationHeartBeatMonitorDelegate.h"
#import "ChatMigrationRecoverChatLogicDelegate.h"

@class ChatMigrationAnalysisMgr, ChatMigrationHeartBeatMonitor, ChatMigrationProtocolLogic, ChatMigrationRecoverChatLogic, MMTimer, NSData, NSString;

@interface ChatMigrationClientDataProcessMgr : NSObject <ChatMigrationRecoverChatLogicDelegate, ChatMigrationHeartBeatMonitorDelegate>
{
    ChatMigrationProtocolLogic *m_ProtoHandle;
    ChatMigrationRecoverChatLogic *m_RecoverChatLogic;
    NSString *server_id;
    NSString *server_hello;
    NSString *server_ok;
    NSData *server_key;
    unsigned long long m_totalSize;
    unsigned long long m_recvSize;
    unsigned long long m_lastRecvSize;
    long long m_chatMigrationType;
    long long m_otherSideChatMigrationVersion;
    long long m_otherSideSupportExt;
    MMTimer *m_sizeCheckTimer;
    ChatMigrationHeartBeatMonitor *m_heartBeatMonitor;
    double m_sizeCheckInterval;
    _Bool m_bIsResume;
    ChatMigrationAnalysisMgr *m_analysisMgr;
    struct timeval m_clientTransferTime;
    id <ChatMigrationClientDataProcessMgrDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)clientDataProcess:(id)arg1 andLength:(unsigned int)arg2;
- (void)clientInjectAuthID:(id)arg1 key:(id)arg2 withHello:(id)arg3 andOK:(id)arg4;
- (void)dealloc;
- (void)doTermination;
- (id)init;
- (_Bool)isClientInResumeState;
- (_Bool)isServerSupportReScanQRCode;
- (_Bool)isSupportKVUpload;
@property(nonatomic) __weak id <ChatMigrationClientDataProcessMgrDelegate> m_delegate; // @synthesize m_delegate;
- (id)makeHelloPkgToServer;
- (void)onDataToFileFinish:(id)arg1 Result:(_Bool)arg2;
- (void)onHeartBeatAckIDWrong;
- (void)onHeartBeatLate;
- (void)onHeartBeatOK;
- (void)onHeartBeatPacketSendWithAckID:(unsigned long long)arg1;
- (void)onRecoverError:(int)arg1;
- (void)process_auth_response:(id)arg1;
- (void)process_backup_data_push:(id)arg1;
- (void)process_cancel_request:(id)arg1;
- (void)process_finish_request:(id)arg1;
- (void)process_heart_beat_request:(id)arg1;
- (void)process_heart_beat_response:(id)arg1;
- (void)process_start_response:(id)arg1;
- (void)sizeCheckEvent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
