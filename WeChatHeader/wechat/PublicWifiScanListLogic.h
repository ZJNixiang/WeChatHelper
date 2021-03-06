//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APBase.h"

#import "NSURLConnectionDelegate.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface PublicWifiScanListLogic : APBase <NSURLConnectionDelegate, PBMessageObserverDelegate>
{
    unsigned int _bExpiredTime;
    id <PublicWifiScanListLogicDelegate> _delegate;
    NSMutableDictionary *_wifiMap;
    NSMutableArray *_queryWifiList;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@property(nonatomic) unsigned int bExpiredTime; // @synthesize bExpiredTime=_bExpiredTime;
- (void)checkWfiMap;
@property(nonatomic) __weak id <PublicWifiScanListLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)filterByWifiMap:(id)arg1;
- (void)handleGetWifiListResponse:(id)arg1;
- (void)initWifiMap;
- (void)pickNeedToStore:(id)arg1;
@property(retain, nonatomic) NSMutableArray *queryWifiList; // @synthesize queryWifiList=_queryWifiList;
- (void)sendGetWifiList:(id)arg1;
- (void)setCacheTime:(unsigned int)arg1;
@property(retain, nonatomic) NSMutableDictionary *wifiMap; // @synthesize wifiMap=_wifiMap;
- (void)storeToWifiMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

