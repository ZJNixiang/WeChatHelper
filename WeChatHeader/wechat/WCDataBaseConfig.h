//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCDBConfigCheckpoint, WCDBConfigCorrupt, WCDBConfigHash, WCDBConfigMultiHandles, WCDBConfigMultiThread, WCDBConfigPerformance, WCDBConfigPerformanceOptimization, WCDBConfigSwitch;

@interface WCDataBaseConfig : NSObject
{
    WCDBConfigHash *m_hash;
    WCDBConfigMultiHandles *m_multiHandles;
    WCDBConfigCorrupt *m_corrupt;
    WCDBConfigPerformance *m_performance;
    WCDBConfigPerformanceOptimization *m_performanceOptimization;
    WCDBConfigSwitch *m_switch;
    WCDBConfigCheckpoint *m_checkpoint;
    WCDBConfigMultiThread *m_multiThread;
}

+ (id)configPath;
+ (id)decode;
+ (void)encode:(id)arg1;
+ (void)initialize;
+ (id)sharedConfig;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) WCDBConfigCheckpoint *m_checkpoint; // @synthesize m_checkpoint;
@property(retain, nonatomic) WCDBConfigCorrupt *m_corrupt; // @synthesize m_corrupt;
@property(retain, nonatomic) WCDBConfigHash *m_hash; // @synthesize m_hash;
@property(retain, nonatomic) WCDBConfigMultiHandles *m_multiHandles; // @synthesize m_multiHandles;
@property(retain, nonatomic) WCDBConfigMultiThread *m_multiThread; // @synthesize m_multiThread;
@property(retain, nonatomic) WCDBConfigPerformance *m_performance; // @synthesize m_performance;
@property(retain, nonatomic) WCDBConfigPerformanceOptimization *m_performanceOptimization; // @synthesize m_performanceOptimization;
@property(retain, nonatomic) WCDBConfigSwitch *m_switch; // @synthesize m_switch;
- (void)synchronize;

@end
