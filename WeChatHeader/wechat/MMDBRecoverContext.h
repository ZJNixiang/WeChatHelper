//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMDBRAssist, WCDBCorruptInfo;

@interface MMDBRecoverContext : NSObject
{
    unsigned int m_dbID;
    MMDBRAssist *m_assist;
    WCDBCorruptInfo *m_corruptInfo;
}

- (void).cxx_destruct;
- (void)clearDBCorruptNum;
- (id)corruptDBPath;
@property(retain, nonatomic) MMDBRAssist *m_assist; // @synthesize m_assist;
@property(retain, nonatomic) WCDBCorruptInfo *m_corruptInfo; // @synthesize m_corruptInfo;
@property(nonatomic) unsigned int m_dbID; // @synthesize m_dbID;

@end

