//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMCPLabel.h"

#import "TextLayoutDelegate.h"
#import "WCForceTouchPreviewProtocol.h"
#import "WCForceTouchTriggerLongPressProtocol.h"

@class NSMutableArray, NSString, UIColor, UIFont, UIImage;

@interface RichTextView : MMCPLabel <TextLayoutDelegate, WCForceTouchPreviewProtocol, WCForceTouchTriggerLongPressProtocol>
{
    NSMutableArray *_arrParserObjects;
    UIColor *_oNormalBackgroundColor;
    UIColor *_oHighlightedBGColor;
    _Bool _bWholeField;
    _Bool _bHightlighted;
    _Bool _bEnableBGColor;
    UIFont *_oFont;
    double _fWidth;
    UIColor *_oTextColor;
    UIColor *_oTextHLColor;
    NSMutableArray *_arrStyles;
    NSString *_nsContent;
    struct CGRect _touchedRect;
    _Bool _bSourceUrlForLP;
    unsigned long long _parserType;
    id <RichTextLayoutDelegate> _layoutDelegate;
    id <ILinkEventExt> _linkDelegate;
    _Bool _bIsLongPressHandled;
    _Bool _bDismissHightLightOutside;
    _Bool _bHandleLongPress;
    _Bool _bHandleTextClick;
    _Bool _bTouchesPassOn;
    UIImage *_oImage;
    _Bool _bTouchBeginOnLink;
    UIColor *_oNormalBGColor;
}

+ (double)getHeightForContent:(id)arg1 font:(id)arg2 width:(double)arg3 parserType:(unsigned long long)arg4;
+ (double)getHeightForContent:(id)arg1 font:(id)arg2 width:(double)arg3 parserType:(unsigned long long)arg4 delegate:(id)arg5;
+ (double)getHeightForContent:(id)arg1 font:(id)arg2 width:(double)arg3 parserType:(unsigned long long)arg4 delegate:(id)arg5 outArrStyles:(id *)arg6;
+ (id)getParserString:(id)arg1;
+ (id)getParserString:(id)arg1 parserType:(unsigned long long)arg2;
+ (id)getStyleString:(id)arg1 font:(id)arg2 width:(double)arg3 parserType:(unsigned long long)arg4;
+ (id)getStyleString:(id)arg1 font:(id)arg2 width:(double)arg3 parserType:(unsigned long long)arg4 delegate:(id)arg5;
+ (id)getStyleString:(id)arg1 parserType:(unsigned long long)arg2;
+ (double)heightForPrefixContent:(id)arg1 TargetContent:(id)arg2 TargetParserString:(id)arg3 SuffixContent:(id)arg4 font:(id)arg5 width:(double)arg6 parserType:(unsigned long long)arg7 delegate:(id)arg8;
+ (double)heightForPrefixContent:(id)arg1 TargetContent:(id)arg2 TargetParserString:(id)arg3 SuffixContent:(id)arg4 font:(id)arg5 width:(double)arg6 parserType:(unsigned long long)arg7 delegate:(id)arg8 outArrStyles:(id *)arg9;
+ (void)initialize;
+ (id)pureStringForContent:(id)arg1;
+ (struct CGSize)sizeForPrefixContent:(id)arg1 TargetContent:(id)arg2 TargetParserString:(id)arg3 SuffixContent:(id)arg4 font:(id)arg5 width:(double)arg6 parserType:(unsigned long long)arg7 delegate:(id)arg8;
+ (struct CGSize)sizeForPrefixContent:(id)arg1 TargetContent:(id)arg2 TargetParserString:(id)arg3 SuffixContent:(id)arg4 font:(id)arg5 width:(double)arg6 parserType:(unsigned long long)arg7 delegate:(id)arg8 outArrStyles:(id *)arg9;
- (void).cxx_destruct;
- (void)addStylesParserByPatternString:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *arrStyles; // @synthesize arrStyles=_arrStyles;
@property(nonatomic) _Bool bDismissHightLightOutside; // @synthesize bDismissHightLightOutside=_bDismissHightLightOutside;
@property(nonatomic) _Bool bEnableBGColor; // @synthesize bEnableBGColor=_bEnableBGColor;
@property(nonatomic) _Bool bHandleLongPress; // @synthesize bHandleLongPress=_bHandleLongPress;
@property(nonatomic) _Bool bHandleTextClick; // @synthesize bHandleTextClick=_bHandleTextClick;
@property(nonatomic) _Bool bSourceUrlForLP; // @synthesize bSourceUrlForLP=_bSourceUrlForLP;
@property(nonatomic) _Bool bTouchBeginOnLink; // @synthesize bTouchBeginOnLink=_bTouchBeginOnLink;
@property(nonatomic) _Bool bTouchesPassOn; // @synthesize bTouchesPassOn=_bTouchesPassOn;
- (void)baseInit;
- (_Bool)canPeek;
- (void)clickOnLinkEvent:(id)arg1;
- (void)clickOnPhoneEvent:(id)arg1;
- (void)clickOnTextEvent:(id)arg1;
- (id)createParser:(unsigned long long)arg1;
- (void)delayedTouchesEnded:(id)arg1;
- (void)dismissHighLight;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) double fWidth; // @synthesize fWidth=_fWidth;
- (id)getContent;
- (id)getParserByPaserType:(unsigned long long)arg1;
- (id)getParserString:(id)arg1;
- (id)getPatternStringFromContent:(id)arg1 patternGenerator:(id)arg2;
- (id)getPreviewLinkForLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (struct CGRect)getPreviewLinkFrameForLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (id)getStyleString:(id)arg1;
- (_Bool)getStylesForContent:(id)arg1 parserString:(id)arg2 parserPosition:(struct _NSParserPosition)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <RichTextLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) __weak id <ILinkEventExt> linkDelegate; // @synthesize linkDelegate=_linkDelegate;
- (void)longPressOnLinkEvent:(id)arg1;
- (void)longPressOnPhoneEvent:(id)arg1;
- (void)longPressOnTextEvent:(id)arg1;
@property(retain, nonatomic) UIFont *oFont; // @synthesize oFont=_oFont;
@property(retain, nonatomic) UIColor *oHighlightedBGColor; // @synthesize oHighlightedBGColor=_oHighlightedBGColor;
@property(retain, nonatomic) UIColor *oNormalBGColor; // @synthesize oNormalBGColor=_oNormalBGColor;
@property(retain, nonatomic) UIColor *oTextColor; // @synthesize oTextColor=_oTextColor;
@property(retain, nonatomic) UIColor *oTextHLColor; // @synthesize oTextHLColor=_oTextHLColor;
- (double)originXForLineAtHeight:(double)arg1;
@property(nonatomic) unsigned long long parserType; // @synthesize parserType=_parserType;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)resetFrameForMinHeight:(double)arg1;
- (void)setArrStyles:(id)arg1 withContent:(id)arg2;
- (void)setContent:(id)arg1;
- (_Bool)setContent:(id)arg1 StyleString:(id)arg2;
- (_Bool)setPrefixContent:(id)arg1 TargetContent:(id)arg2 TargetParserString:(id)arg3 SuffixContent:(id)arg4;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)updateAccessibilityLabel;
- (void)updateFrame:(double)arg1;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
