//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FileSealerInfo : NSObject
{
    int _fileDescriptor;
    NSString *_innocentPath;
    NSString *_sealerPath;
    id _userInfo;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) int fileDescriptor; // @synthesize fileDescriptor=_fileDescriptor;
- (id)initWithInnocent:(id)arg1 andUserInfo:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSString *innocentPath; // @synthesize innocentPath=_innocentPath;
@property(readonly, nonatomic) NSString *sealerPath; // @synthesize sealerPath=_sealerPath;
@property(readonly, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;

@end
