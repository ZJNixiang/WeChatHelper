//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCDataBase, WCDataBaseTable;

@interface EnterpriseBrandAttrDB : NSObject
{
    WCDataBase *_db;
    WCDataBaseTable *_table;
}

- (void).cxx_destruct;
- (_Bool)deleteAttrByUserName:(id)arg1;
- (id)getAttrByUserName:(id)arg1;
- (id)initWithPath:(id)arg1;
- (_Bool)setAttr:(id)arg1;

@end

