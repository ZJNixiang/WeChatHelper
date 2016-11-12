//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "UIGestureRecognizerDelegate.h"

@class MMTimer, NSString, UIPanGestureRecognizer, UIView;

@interface WABaseWebViewBanener : MMUIView <UIGestureRecognizerDelegate>
{
    double m_navOffset;
    UIView *m_handlerView;
    UIPanGestureRecognizer *m_panGesture;
    _Bool m_isMoving;
    MMTimer *m_autoDismissTimer;
    _Bool _isNeedAutoDismiss;
}

- (void).cxx_destruct;
- (void)autoDismiss;
- (void)dealloc;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)handlePanGesture:(id)arg1;
- (id)init;
- (void)initHandlerView;
- (void)initPanGestrueRecognizer;
@property(nonatomic) _Bool isNeedAutoDismiss; // @synthesize isNeedAutoDismiss=_isNeedAutoDismiss;
- (void)layoutSubviews;
- (void)showWithNavOffset:(double)arg1 InView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
