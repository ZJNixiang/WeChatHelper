//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AttributeLabel, CContact, MMHeadImageView, NSArray;

@interface FindContactResultItemView : UIView
{
    CContact *_contact;
    NSArray *_keywordList;
    MMHeadImageView *_headImgView;
    AttributeLabel *_nameLabel;
    AttributeLabel *_descLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) AttributeLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMHeadImageView *headImgView; // @synthesize headImgView=_headImgView;
- (void)initView;
- (id)initWIthContact:(id)arg1 andKeywordList:(id)arg2;
@property(retain, nonatomic) NSArray *keywordList; // @synthesize keywordList=_keywordList;
@property(retain, nonatomic) AttributeLabel *nameLabel; // @synthesize nameLabel=_nameLabel;

@end
