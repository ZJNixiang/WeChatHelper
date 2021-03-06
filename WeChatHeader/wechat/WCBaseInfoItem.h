//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString, UIView;

@interface WCBaseInfoItem : MMObject
{
    NSString *m_title;
    NSString *m_tip;
    NSString *m_key;
    UIView *m_view;
    UIView *m_superView;
    _Bool m_bEnable;
    _Bool m_bActive;
    id <WCBaseInfoItemDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)becomeFirstResponder;
- (id)getValue;
- (void)initView:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
@property(nonatomic) _Bool m_bActive; // @synthesize m_bActive;
@property(readonly, nonatomic) _Bool m_bEnable; // @synthesize m_bEnable;
@property(retain, nonatomic) NSString *m_key; // @synthesize m_key;
@property(retain, nonatomic) NSString *m_tip; // @synthesize m_tip;
@property(retain, nonatomic) NSString *m_title; // @synthesize m_title;
@property(retain, nonatomic) UIView *m_view; // @synthesize m_view;
- (void)resignFirstResponder;
- (void)setDelegate:(id)arg1;
- (void)setEnable:(_Bool)arg1;
- (void)setSuperView:(id)arg1;

@end

