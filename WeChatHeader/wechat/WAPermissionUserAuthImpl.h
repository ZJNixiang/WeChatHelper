//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WAPermissionUserAuthTaskDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WAPermissionUserAuthImpl : NSObject <WAPermissionUserAuthTaskDelegate>
{
    NSMutableArray *_arrAuthTaskQueue;
    NSMutableDictionary *_dicAuthInfo;
    id <WAPermissionUserAuthImplDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)asyncRemoveAuthTask:(id)arg1;
- (void)authFailWithJSAPI:(id)arg1 failHandler:(CDUnknownBlockType)arg2 errMsg:(id)arg3 scene:(unsigned long long)arg4;
- (void)authOKWithJSAPI:(id)arg1 handler:(CDUnknownBlockType)arg2 scene:(unsigned long long)arg3;
- (void)authTaskComplete:(id)arg1;
- (void)checkUserAuthWithAPPID:(id)arg1 jsapi:(id)arg2 handler:(CDUnknownBlockType)arg3 failHandler:(CDUnknownBlockType)arg4 scene:(unsigned long long)arg5;
- (void)dealloc;
@property(nonatomic) __weak id <WAPermissionUserAuthImplDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getAuthInfoWithJSAPI:(id)arg1;
- (id)init;
- (void)mainThread_checkUserAuthWithAPPID:(id)arg1 jsapi:(id)arg2 handler:(CDUnknownBlockType)arg3 failHandler:(CDUnknownBlockType)arg4 scene:(unsigned long long)arg5;
- (void)removeAuthTaskInQueue:(id)arg1;
- (void)saveAuthInfo:(id)arg1 withJSAPI:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
