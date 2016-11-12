//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageNodeView.h"

#import "IMsgExt.h"
#import "IWXVideoPlayerViewExt.h"
#import "UIAlertViewDelegate.h"

@class NSString, SightIconView, UIButton, UIImageView, UILabel;

@interface VideoMessageNodeView : BaseMessageNodeView <IMsgExt, IWXVideoPlayerViewExt, UIAlertViewDelegate>
{
    UIImageView *m_oImageView;
    SightIconView *m_oSightIconView;
    UIImageView *m_oVideoInfoBkgView;
    UILabel *m_oTimeLabel;
    UILabel *m_oFileSizeLabel;
    UIButton *m_oCancelBtn;
    NSString *m_videoPath;
    _Bool m_bhasDownloadComplete;
    _Bool m_bHasVideoFile;
    _Bool m_bIsLayoutsubView;
    int m_uiStatus;
}

+ (_Bool)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (void)StartDownloadVideo:(id)arg1;
- (void)StartUploadVideo:(id)arg1;
- (void)StopDownloadVideo:(id)arg1;
- (void)StopUploadVideo:(id)arg1;
- (_Bool)canPlayVideo;
- (void)checkHasVideoFile;
- (void)dealloc;
- (id)getCoverImage;
- (id)getMessageImageView;
- (id)getMoreMainInfomationAccessibilityDescription;
- (struct CGPoint)getSendOKViewOrgin;
- (void)initVideoInfoView;
- (id)initWithMessageWrap:(id)arg1 Contact:(id)arg2 ChatContact:(id)arg3;
- (_Bool)isTouchInView:(id)arg1;
- (void)layoutSubviewsInternal;
- (void)onClearResource;
- (void)onClick:(_Bool)arg1;
- (void)onDisappear;
- (void)onDownloadVideoCommonFail:(id)arg1;
- (void)onDownloadVideoExpireFail:(id)arg1;
- (void)onFavoriteAdd:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onLongTouch;
- (void)onMenuItemWillHide;
- (void)onMoreOperate:(id)arg1;
- (void)onTouchCancel;
- (void)onTouchDown;
- (void)onTouchDownRepeat;
- (void)onTouchUpInside;
- (void)onWXVideoPlayerViewPlay:(id)arg1;
- (void)resend:(id)arg1;
- (void)setVideoPlayMode:(_Bool)arg1;
- (void)showOpearation;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (id)thumbImage;
- (void)updateBkgImage:(_Bool)arg1;
- (void)updateContentViewHeight;
- (void)updateStatus:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
