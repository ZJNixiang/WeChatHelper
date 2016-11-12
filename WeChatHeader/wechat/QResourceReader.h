//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSString, UIImage;

@interface QResourceReader : NSObject
{
    NSBundle *_bundle;
    NSString *_logoUrl;
    NSString *_logoPath;
    UIImage *_worldLogo;
}

+ (id)instance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (id)embeddedImageNamed:(id)arg1;
- (id)imageNamed:(id)arg1;
- (id)init;
@property(retain) NSString *logoPath; // @synthesize logoPath=_logoPath;
@property(retain) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
- (void)setLogoUrl:(id)arg1 path:(id)arg2;
@property(retain) UIImage *worldLogo; // @synthesize worldLogo=_worldLogo;
- (void)setupBundle;
- (id)tencentLogoImage;
- (id)tencentMapLogo;
- (id)tencentMapLogo2x;
- (id)userLocationImage;
- (id)userlocation;
- (id)userlocation2x;
- (id)worldmapLogoImage;

@end
