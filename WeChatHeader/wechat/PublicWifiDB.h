//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class WCDataBase, WCDataBaseTable;

@interface PublicWifiDB : MMObject
{
    WCDataBase *_m_db;
    WCDataBaseTable *_m_table;
    WCDataBaseTable *_m_apcheck_config_table;
}

- (void).cxx_destruct;
- (_Bool)cleanDB;
- (void)closeDB;
- (void)dealloc;
- (_Bool)deleteApBase:(id)arg1;
- (id)getAPCheckConfig;
- (id)getApBaseWithMac:(id)arg1;
- (id)getApBaseWithSsid:(id)arg1 opCode:(unsigned int)arg2;
- (id)init;
- (void)initDB;
@property(retain, nonatomic) WCDataBaseTable *m_apcheck_config_table; // @synthesize m_apcheck_config_table=_m_apcheck_config_table;
@property(retain, nonatomic) WCDataBase *m_db; // @synthesize m_db=_m_db;
@property(retain, nonatomic) WCDataBaseTable *m_table; // @synthesize m_table=_m_table;
- (_Bool)saveAPCheckConfig:(id)arg1;
- (_Bool)saveApBase:(id)arg1;

@end
