//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IMMAssetICloudExt.h"
#import "UIAlertViewDelegate.h"
#import "scrollViewDelegate.h"

@class MMAssetInfo, MMScrollView, MPMoviePlayerController, NSString, NSURL, UIButton, UIImageView, UILabel, UIView;

@interface MMVideoPreviewBrowserController : MMUIViewController <IMMAssetICloudExt, scrollViewDelegate, UIAlertViewDelegate>
{
    MMScrollView *_panelView;
    MPMoviePlayerController *_moviePlayer;
    UIImageView *_bottomBar;
    UIButton *_sendButton;
    UIView *_maskView;
    UIButton *_playBigButton;
    _Bool _isPlaying;
    _Bool _isSending;
    NSURL *_videoOutputURL;
    id <MMVideoPreviewBrowserControllerDelegate> m_delegate;
    id <MMImagePickerControlCenter> _controlCenter;
    MMAssetInfo *_assetInfo;
    UIImageView *m_icloudImageIcon;
    UILabel *m_icloudLabel;
    NSURL *m_originUrl;
}

- (void).cxx_destruct;
- (void)OnCompressBegin;
- (void)OnCompressEnd;
- (void)OnCompressedSuccess:(id)arg1;
- (void)OnPlay:(id)arg1;
- (void)OnSend:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) MMAssetInfo *assetInfo; // @synthesize assetInfo=_assetInfo;
- (void)changePlayStatus:(_Bool)arg1;
- (void)compressVideo:(id)arg1;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter=_controlCenter;
- (void)dealloc;
- (void)hideToolBar:(_Bool)arg1;
- (long long)iCloudAlertViewTag;
- (id)init;
- (void)initBottomBar;
- (void)initData;
- (void)initMaskView;
- (void)initPlayerView;
- (void)initUrl;
- (void)initView;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
@property(nonatomic) __weak id <MMVideoPreviewBrowserControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) UIImageView *m_icloudImageIcon; // @synthesize m_icloudImageIcon;
@property(retain, nonatomic) UILabel *m_icloudLabel; // @synthesize m_icloudLabel;
@property(retain, nonatomic) NSURL *m_originUrl; // @synthesize m_originUrl;
- (void)onAssetVideoDonwloadFailed:(id)arg1;
- (void)onAssetVideoDownloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)systemActived:(id)arg1;
- (void)systemResigned:(id)arg1;
- (void)touchesBegan_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)videoPlayFinished:(id)arg1;
- (void)videoPlayStateChanged:(id)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

