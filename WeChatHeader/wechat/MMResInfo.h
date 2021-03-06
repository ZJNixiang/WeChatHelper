//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCDBCoding.h"

@class NSData, NSMutableArray, NSString;

@interface MMResInfo : MMObject <WCDBCoding>
{
    _Bool isEncrypt;
    _Bool isCompress;
    _Bool isTemp;
    unsigned int resInfoId;
    unsigned int createTime;
    unsigned int expireTime;
    unsigned int accessTime;
    unsigned int crc32;
    unsigned int resType;
    unsigned int resSubType;
    unsigned int fileId;
    unsigned int supportVersion;
    unsigned int eid;
    unsigned int reportId;
    NSString *resUrlMd5;
    NSString *resMd5;
    NSString *appId;
    NSString *domain;
    NSString *version;
    NSString *localSubPath;
    unsigned long long size;
    long long offset;
    long long chunkLength;
    NSString *sampleId;
    NSData *signatureData;
    NSMutableArray *arrSignatureDataInfo;
    NSString *resOriginalMd5;
    long long m___rowID;
}

+ (id)dummyObject;
+ (const map_0e718273 *)getFileValueTagIndexMap;
+ (id)getFileValueTypeTable;
+ (const map_0e718273 *)getPackedValueTagIndexMap;
+ (id)getPackedValueTypeTable;
+ (const map_7a576766 *)getValueNameIndexMap;
+ (id)getValueTable;
+ (const struct WCDBIndexHelper *)getWCDBIndexArray;
+ (unsigned long long)getWCDBIndexArrayCount;
+ (const basic_string_a490aa4c *)getWCDBPrimaryColumnName;
- (void).cxx_destruct;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(nonatomic) unsigned int accessTime; // @synthesize accessTime;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(retain, nonatomic) NSMutableArray *arrSignatureDataInfo; // @synthesize arrSignatureDataInfo;
@property(nonatomic) long long chunkLength; // @synthesize chunkLength;
- (long long)compareAccessTimeByResInfo:(id)arg1;
@property(nonatomic) unsigned int crc32; // @synthesize crc32;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
- (const WCDBCondition_c6db074e *)db_accessTime;
- (const WCDBCondition_22fabacd *)db_appId;
- (const WCDBCondition_7786cbb5 *)db_chunkLength;
- (const WCDBCondition_c6db074e *)db_crc32;
- (const WCDBCondition_c6db074e *)db_createTime;
- (const WCDBCondition_22fabacd *)db_domain;
- (const WCDBCondition_c6db074e *)db_eid;
- (const WCDBCondition_c6db074e *)db_expireTime;
- (const WCDBCondition_c6db074e *)db_fileId;
- (const WCDBCondition_d7690721 *)db_isCompress;
- (const WCDBCondition_d7690721 *)db_isEncrypt;
- (const WCDBCondition_d7690721 *)db_isTemp;
- (const WCDBCondition_22fabacd *)db_localSubPath;
- (const WCDBCondition_7786cbb5 *)db_offset;
- (const WCDBCondition_c6db074e *)db_reportId;
- (const WCDBCondition_c6db074e *)db_resInfoId;
- (const WCDBCondition_22fabacd *)db_resMd5;
- (const WCDBCondition_22fabacd *)db_resOriginalMd5;
- (const WCDBCondition_c6db074e *)db_resSubType;
- (const WCDBCondition_c6db074e *)db_resType;
- (const WCDBCondition_22fabacd *)db_resUrlMd5;
- (const WCDBCondition_22fabacd *)db_sampleId;
- (const WCDBCondition_91e67114 *)db_signatureData;
- (const WCDBCondition_7786cbb5 *)db_size;
- (const WCDBCondition_c6db074e *)db_supportVersion;
- (const WCDBCondition_22fabacd *)db_version;
- (void)dealloc;
@property(retain, nonatomic) NSString *domain; // @synthesize domain;
@property(nonatomic) unsigned int eid; // @synthesize eid;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime;
@property(nonatomic) unsigned int fileId; // @synthesize fileId;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(nonatomic) _Bool isCompress; // @synthesize isCompress;
@property(nonatomic) _Bool isEncrypt; // @synthesize isEncrypt;
@property(nonatomic) _Bool isTemp; // @synthesize isTemp;
@property(retain, nonatomic) NSString *localSubPath; // @synthesize localSubPath;
@property(nonatomic) long long offset; // @synthesize offset;
@property(nonatomic) unsigned int reportId; // @synthesize reportId;
@property(nonatomic) unsigned int resInfoId; // @synthesize resInfoId;
@property(retain, nonatomic) NSString *resMd5; // @synthesize resMd5;
@property(retain, nonatomic) NSString *resOriginalMd5; // @synthesize resOriginalMd5;
@property(nonatomic) unsigned int resSubType; // @synthesize resSubType;
@property(nonatomic) unsigned int resType; // @synthesize resType;
@property(retain, nonatomic) NSString *resUrlMd5; // @synthesize resUrlMd5;
@property(retain, nonatomic) NSString *sampleId; // @synthesize sampleId;
@property(retain, nonatomic) NSData *signatureData; // @synthesize signatureData;
@property(nonatomic) unsigned long long size; // @synthesize size;
@property(nonatomic) unsigned int supportVersion; // @synthesize supportVersion;
@property(retain, nonatomic) NSString *version; // @synthesize version;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

