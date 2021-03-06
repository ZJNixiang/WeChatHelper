//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIWindow.h"

@class NSArray, NSString;

@interface JSApiScopeConfirmWindow : MMUIWindow
{
    NSString *_appName;
    NSString *_appIconURL;
    NSArray *_arrScopeInfo;
    NSString *_confirmTitle;
    id <JSApiScopeConfirmWindowDelegate> _confirmWindowDelegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appIconURL; // @synthesize appIconURL=_appIconURL;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSArray *arrScopeInfo; // @synthesize arrScopeInfo=_arrScopeInfo;
@property(retain, nonatomic) NSString *confirmTitle; // @synthesize confirmTitle=_confirmTitle;
@property(nonatomic) __weak id <JSApiScopeConfirmWindowDelegate> confirmWindowDelegate; // @synthesize confirmWindowDelegate=_confirmWindowDelegate;
- (void)dealloc;
- (void)setupView;

@end

