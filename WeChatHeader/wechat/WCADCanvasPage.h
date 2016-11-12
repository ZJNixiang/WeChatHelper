//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface WCADCanvasPage : NSObject <NSCoding>
{
    NSString *bgCoverUrl;
    _Bool isAddBlur;
    NSString *blurColorTheme;
    double blurColorAlpha;
    NSString *bgColorTheme;
    NSArray *adCanvasComponentItemList;
    int type;
    int subType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *adCanvasComponentItemList; // @synthesize adCanvasComponentItemList;
@property(retain, nonatomic) NSString *bgColorTheme; // @synthesize bgColorTheme;
@property(retain, nonatomic) NSString *bgCoverUrl; // @synthesize bgCoverUrl;
@property(nonatomic) double blurColorAlpha; // @synthesize blurColorAlpha;
@property(retain, nonatomic) NSString *blurColorTheme; // @synthesize blurColorTheme;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool isAddBlur; // @synthesize isAddBlur;
@property(nonatomic) int subType; // @synthesize subType;
@property(nonatomic) int type; // @synthesize type;

@end
