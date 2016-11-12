//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSString;

@interface WCProductMgr : MMService <MMService, PBMessageObserverDelegate>
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)cancelPreOrder:(id)arg1 skuID:(id)arg2 count:(unsigned int)arg3 URL:(id)arg4 lockID:(id)arg5;
- (_Bool)getLastestExpressInfo:(id)arg1 withStockID:(id)arg2 withAddress:(id)arg3;
- (_Bool)getProductDetail:(id)arg1 version:(unsigned int)arg2;
- (_Bool)getProductDetailFromScanQrcode:(id)arg1;
- (_Bool)getProductDiscountInfo:(id)arg1 jumpUrl:(id)arg2;
- (void)handleCancelPreOrder:(id)arg1;
- (void)handleGetLastestExpressInfo:(id)arg1;
- (void)handleGetProductDetail:(id)arg1;
- (void)handleGetProductDiscountInfo:(id)arg1;
- (void)handlePreSubmitOrder:(id)arg1;
- (void)handleSubmitMallFreeOrder:(id)arg1;
- (void)handleSubmitMallOrder:(id)arg1;
- (id)init;
- (void)onServiceInit;
- (_Bool)preSubmitOrder:(id)arg1 skuID:(id)arg2 count:(unsigned int)arg3 URL:(id)arg4 fromScene:(unsigned int)arg5;
- (_Bool)submitMallFreeOrder:(id)arg1;
- (_Bool)submitMallNoFreeOrder:(id)arg1 sellerID:(id)arg2 fromScene:(unsigned int)arg3;
- (_Bool)submitMallOrder:(id)arg1 fromScene:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
