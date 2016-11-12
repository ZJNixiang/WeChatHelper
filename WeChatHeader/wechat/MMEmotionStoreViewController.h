//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMPersonalEmotionsViewController, MMWechatEmotionsViewController, UIImageView, UISegmentedControl;

@interface MMEmotionStoreViewController : MMUIViewController
{
    UISegmentedControl *_segmentedControl;
    MMWechatEmotionsViewController *_wechatEmotionsViewController;
    MMPersonalEmotionsViewController *_personalEmotionsViewContrller;
    UIImageView *_badgeView;
    unsigned int _scene;
    _Bool _isReport;
    unsigned long long m_defaultSelectedTag;
}

- (void).cxx_destruct;
- (void)OnCancelModalView:(id)arg1;
- (void)clickEmotionCharts;
- (void)clickPersonalEmotionsTab;
- (void)clickSegmentedControl;
- (void)clickWechatEmotionsTab;
- (void)configSegmentedControl;
- (void)configViewControllers;
- (void)configViews;
- (void)dealloc;
- (id)init;
- (id)initWithEmotionScene:(unsigned int)arg1 AndDefaultTag:(unsigned long long)arg2;
- (id)initWithEmotionScene:(unsigned int)arg1 withRequestType:(unsigned int)arg2;
- (_Bool)isNeedPersonalViewTab;
- (void)onOperate;
- (void)updateNew:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end
