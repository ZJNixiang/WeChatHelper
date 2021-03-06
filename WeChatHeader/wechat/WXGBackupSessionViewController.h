//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMLoadSessionExt.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, NSMutableArray, NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface WXGBackupSessionViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, MMLoadSessionExt, UIAlertViewDelegate>
{
    unsigned long long m_curMaxDataCount;
    id <WXGBackupSessionViewControllerDelegate> _delegate;
    MMTableView *_sessionTableView;
    UIImageView *_footerImageView;
    UIButton *_selectAllButton;
    UILabel *_sizeLabel;
    UILabel *_emptyTipLabel;
    NSMutableArray *_selectedSessionArray;
    UIActivityIndicatorView *_loadingIndicatorView;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <WXGBackupSessionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *emptyTipLabel; // @synthesize emptyTipLabel=_emptyTipLabel;
@property(retain, nonatomic) UIImageView *footerImageView; // @synthesize footerImageView=_footerImageView;
- (unsigned long long)getDataSize:(id)arg1;
- (id)getDataSizeShowString:(id)arg1;
- (id)getSelectButtonTitle;
- (struct CGRect)getTableViewFrame;
- (id)init;
- (void)initData;
- (void)initFooterPannelView;
- (void)initView;
- (_Bool)isSessionDataEmpty;
- (_Bool)isSessionDataFull;
- (void)loadMoreData;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
- (void)onCancel;
- (void)onDone;
- (void)onLoadDataFinished;
- (void)onLoadSessionDataFinished;
- (void)onReloadDataItem;
- (void)onReturn;
- (void)onSelecteAll;
- (void)onSelectedDataChange;
- (void)resetEmptyTipLabelWithTip:(id)arg1;
@property(retain, nonatomic) UIButton *selectAllButton; // @synthesize selectAllButton=_selectAllButton;
@property(retain, nonatomic) NSMutableArray *selectedSessionArray; // @synthesize selectedSessionArray=_selectedSessionArray;
@property(retain, nonatomic) MMTableView *sessionTableView; // @synthesize sessionTableView=_sessionTableView;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateDoneButton;
- (void)updateFooterPannelView;
- (void)updateTableFooterView;
- (void)updateTableView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)whetherSessionItemSelected:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

