//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "UIScrollViewDelegate.h"

@class MMScrollView, NSString, SGBarButton, SGCustomButton, UIView;

@interface SearchGuideView : MMUIView <UIScrollViewDelegate>
{
    UIView *_whiteLayerView;
    MMScrollView *_scrollView;
    UIView *_ftsEntryView;
    SGCustomButton *_ftsEntrySnsBtn;
    SGCustomButton *_ftsEntryBrdCtBtn;
    SGCustomButton *_ftsEntryArtclBtn;
    SGBarButton *_ftsEntryBarBtn;
    _Bool _bIsBarButtonShown;
    id <SearchGuideViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)addBlurEffectForView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <SearchGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)forceReloadHotArticleConfig;
- (_Bool)getHotArticleConfig;
- (void)hideContentViewAnimated:(_Bool)arg1;
- (void)hideKeyboard;
- (void)initFTSGuideView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isBarButtonShown;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)layoutEntryView;
- (void)layoutSubviews;
- (void)onTapBarButton:(id)arg1;
- (void)onTapButton:(id)arg1;
- (void)ontap;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)shouldShowBarButton;
- (void)showContentViewAnimated:(_Bool)arg1;
- (void)tryUpdateBarButton;
- (void)updateBarButton;
- (void)updateDynamicView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

