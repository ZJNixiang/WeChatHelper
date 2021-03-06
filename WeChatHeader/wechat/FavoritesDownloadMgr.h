//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "CNetworkStatusExt.h"
#import "FavoritesDownloaderDelegate.h"

@class FavDataItemWrap, FavoritesDownloadCDNInfoDB, FavoritesDownloader, FavoritesItemDB, NSMutableArray, NSString;

@interface FavoritesDownloadMgr : MMObject <CNetworkStatusExt, FavoritesDownloaderDelegate>
{
    NSMutableArray *_downloadingQueue;
    NSMutableArray *_failQueue;
    NSMutableArray *_activeQueue;
    FavDataItemWrap *_priorDataWrap;
    _Bool _isDownloading;
    FavoritesItemDB *_favItemDB;
    FavoritesDownloadCDNInfoDB *_favCdnDB;
    FavoritesDownloader *_favDownloader;
    id <FavoritesDownloadMgrDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)TryStartDownload;
- (_Bool)addDownloadItem:(id)arg1;
- (void)changeToNoWifi;
- (void)checkAndTryStartDownload;
- (void)dealloc;
- (_Bool)delDownloadItem:(id)arg1;
@property(nonatomic) __weak id <FavoritesDownloadMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)deleteDownloadCdnInfoByFavoritesItemLocalId:(unsigned int)arg1;
- (id)getDownloadPausedItemList;
- (id)getDownloadingItemList;
- (id)getNextDownloadCdnInfoByLocalItemId:(unsigned int)arg1;
- (id)init;
- (void)initDB:(id)arg1;
- (_Bool)loadDownloadingQueue;
- (_Bool)loadFailedQueue;
- (void)onDownloadFail:(id)arg1 ErrCode:(int)arg2;
- (void)onDownloadFavItem:(id)arg1 LocalDataId:(id)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)onDownloadFavItemFail:(id)arg1 LocalDataId:(id)arg2 errCode:(int)arg3;
- (void)onDownloadFavItemSuccess:(id)arg1 LocalDataId:(id)arg2;
- (void)onDownloadFinished:(id)arg1;
- (_Bool)pauseDownloadFavoritesItem:(unsigned int)arg1;
- (void)setItemDownloadFail:(id)arg1 ErrCode:(int)arg2;
- (_Bool)startDownloadDataWrapPrior:(id)arg1;
- (_Bool)startDownloadItem:(id)arg1 IsPriority:(_Bool)arg2;
- (_Bool)updateDownloadCdnInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

