//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BakChatUploadPackageHelperStruct, ChatMigrationBackupChatDBPool, NSMutableSet, NSRecursiveLock;

@interface ChatMigrationBackupChatFileHelper : NSObject
{
    ChatMigrationBackupChatDBPool *m_bakChatDBHelper;
    NSRecursiveLock *m_oLock;
    NSMutableSet *m_EmoticonSet;
    BakChatUploadPackageHelperStruct *m_bakChatUploadPackageHelperStruct;
    unsigned long long m_totalAddMsgToPackageCount;
    _Bool m_bGetNewMessageFinished;
    unsigned long long m_noExistDiscardCount;
    unsigned long long m_noKnownErrorDiscardCount;
}

- (void).cxx_destruct;
- (id)MessageWrapFromBakChatItem:(id)arg1;
- (void)addInnerMediaToBakChatMsgItem:(id)arg1 WithData:(id)arg2 AndType:(int)arg3;
- (void)addInnerVoiceMediaToBakChatMsgItem:(id)arg1 WithData:(id)arg2 andVoiceFormat:(unsigned int)arg3;
- (void)addMediaOutterIntoBakChatMsgItem:(id)arg1 MediaID:(id)arg2 Type:(int)arg3;
- (id)getFavRecordMediaIDFromBakChatMsgItem:(id)arg1;
- (id)getMediaIDFromBakChatMsgItem:(id)arg1;
- (id)getNextMsgID;
- (id)getNextPackage;
- (id)getReportInfo;
- (id)getVoiceMediaIDFromBakChatMsgItem:(id)arg1;
- (id)init;
- (id)initWithChatNameArray:(id)arg1;
- (_Bool)innerAddMsgToPackage:(id)arg1;
- (id)innerGetNextMediaPackage:(id)arg1 Error:(int *)arg2;
- (id)innerGetNextMediaPackageForAppMsg:(id)arg1 Error:(int *)arg2;
- (id)innerGetNextMediaPackageForEmotion:(id)arg1 Error:(int *)arg2;
- (id)innerGetNextMediaPackageForFav:(id)arg1 Error:(int *)arg2;
- (id)innerGetNextMediaPackageForImg:(id)arg1 Error:(int *)arg2;
- (id)innerGetNextMediaPackageForSight:(id)arg1 Error:(int *)arg2;
- (id)innerGetNextMediaPackageForVideo:(id)arg1 Error:(int *)arg2;
- (id)innerGetNextMediaPackageForVideoImpl:(id)arg1 Error:(int *)arg2 isSight:(_Bool)arg3;
- (id)innerGetNextMediaPackageForVoice:(id)arg1 Error:(int *)arg2;
- (id)innerGetRequestOfAllMsgInPackage:(id)arg1;
- (_Bool)innerNewGetNextMsg:(id)arg1 ByReturnAppMsg:(unsigned int *)arg2;
- (id)newBakChatItemFromMessageWrap:(id)arg1;
- (void)printBackupReport;
- (void)startGetNextMessageWrap;
- (void)stopGetNextMessageWrap;

@end

