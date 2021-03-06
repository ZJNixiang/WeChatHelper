//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class MMUILabel, NSString, UIImageView;

@interface WAHomeCommonCell : UICollectionViewCell
{
    NSString *_title;
    NSString *_detailTitle;
    MMUILabel *_titleLabel;
    UIImageView *_indicatorView;
    MMUILabel *_detailLabel;
}

- (void).cxx_destruct;
- (void)configUI;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(copy, nonatomic) NSString *detailTitle; // @synthesize detailTitle=_detailTitle;
@property(retain, nonatomic) UIImageView *indicatorView; // @synthesize indicatorView=_indicatorView;
- (void)initDetailLabel;
- (void)initIndicatorView;
- (void)initTitleLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end

