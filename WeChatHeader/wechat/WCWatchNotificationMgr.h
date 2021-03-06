//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "WCYoDelegate.h"

@class NSMutableArray, NSString, WCYoWindowController;

@interface WCWatchNotificationMgr : MMService <WCYoDelegate, MMService>
{
    unsigned int _yoTime;
    NSMutableArray *_yoCounts;
    WCYoWindowController *_yoWindowController;
    NSString *_isShowingUsername;
}

- (void).cxx_destruct;
- (void)addYoCount:(unsigned long long)arg1 contact:(id)arg2 type:(int)arg3;
- (void)dequeue;
- (void)didHitInside;
- (void)didHitOutside;
- (void)dismissYoWindow;
- (void)displaySignalMessage:(id)arg1;
- (id)getYoWindow;
@property(copy, nonatomic) NSString *isShowingUsername; // @synthesize isShowingUsername=_isShowingUsername;
- (void)onServiceEnterForeground;
- (void)prepareToCloseYoWindow;
@property(retain, nonatomic) NSMutableArray *yoCounts; // @synthesize yoCounts=_yoCounts;
@property(nonatomic) unsigned int yoTime; // @synthesize yoTime=_yoTime;
@property(retain, nonatomic) WCYoWindowController *yoWindowController; // @synthesize yoWindowController=_yoWindowController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

