//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface SingleEmotionDownloadWrap : MMObject
{
    _Bool _isTempFirst;
    NSString *_md5;
    NSString *_cdnUrlString;
    NSString *_encryptUrlString;
    NSString *_aesKey;
    NSString *_designerId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *cdnUrlString; // @synthesize cdnUrlString=_cdnUrlString;
- (id)description;
@property(retain, nonatomic) NSString *designerId; // @synthesize designerId=_designerId;
@property(retain, nonatomic) NSString *encryptUrlString; // @synthesize encryptUrlString=_encryptUrlString;
@property(nonatomic) _Bool isTempFirst; // @synthesize isTempFirst=_isTempFirst;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;

@end
