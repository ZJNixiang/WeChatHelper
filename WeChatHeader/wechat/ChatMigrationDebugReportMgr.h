//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSString;

@interface ChatMigrationDebugReportMgr : MMService <MMService>
{
    NSString *_backupReportString;
    NSString *_dataPoolReportString;
    NSString *_dbHelplerReportString;
    NSString *_recoverReportString;
    NSString *_addMessageReportString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *addMessageReportString; // @synthesize addMessageReportString=_addMessageReportString;
@property(retain, nonatomic) NSString *backupReportString; // @synthesize backupReportString=_backupReportString;
@property(retain, nonatomic) NSString *dataPoolReportString; // @synthesize dataPoolReportString=_dataPoolReportString;
@property(retain, nonatomic) NSString *dbHelplerReportString; // @synthesize dbHelplerReportString=_dbHelplerReportString;
- (id)init;
@property(retain, nonatomic) NSString *recoverReportString; // @synthesize recoverReportString=_recoverReportString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

