//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class MMUILabel, UIImageView, UIView;

@interface SGBarButton : UIButton
{
    UIView *_divTopLine;
    UIView *_divBottomLine;
    UIImageView *_icon;
    UIImageView *_arrowIcon;
    MMUILabel *_label;
    _Bool _bFirstBar;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bFirstBar; // @synthesize bFirstBar=_bFirstBar;
- (id)init;
- (void)initDivLine;
- (void)initIcon;
- (void)initLabel;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutDivLine;
- (void)layoutIcon;
- (void)layoutLabel;
- (void)layoutSubviews;
- (void)setHighlightedStatus;
- (void)setNormalStatus;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
