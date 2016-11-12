//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "FTSJSEventDelegate.h"
#import "FTSWebSearchDataSource.h"
#import "MMSearchBarDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UISearchBarDelegate.h"

@class MMSearchBar, MMUISearchBar, MMUIViewController, NSString, UIImageView, WSResultViewLogic, WebSearchView;

@interface BrandServiceWebSearchController : MMObject <MMSearchBarDelegate, FTSJSEventDelegate, FTSWebSearchDataSource, UISearchBarDelegate, UIScrollViewDelegate>
{
    MMUIViewController *m_contentVC;
    WebSearchView *_resultView;
    WebSearchView *_detailView;
    WSResultViewLogic *_resultViewLogic;
    unsigned int _entryFlag;
    NSString *_keywordForHomePage;
    NSString *_keywordForDetailPage;
    _Bool _isDetailSearch;
    unsigned long long _detailSearchType;
    NSString *_searchID;
    MMSearchBar *_searchBar;
    MMUISearchBar *_searchBarForDetailPage;
    UIImageView *_searchBarWrap;
    UIImageView *_bottomViewShadow;
    double _searchTextFieldNormalWidth;
    struct CGSize _searchIconDefaultSize;
    _Bool _hasMoving;
    double _moveStartOffset;
    double _moveCurOffset;
    double _moveContentOffsetY;
    _Bool _bSwizzle;
    unsigned int _searchScene;
}

- (void).cxx_destruct;
- (void)animatedPushDetailView;
- (void)asyncSearch:(id)arg1;
- (unsigned long long)businessType;
- (void)cancelMoveDetailView;
- (void)clearDetailView;
- (void)dealloc;
- (void)enableButton:(id)arg1;
- (id)getCurrentSearchBar;
- (unsigned int)getGo2ProfileScene;
- (id)getSearchContentViewController;
- (double)getSearchTextFieldWidth;
- (void)handlePanGestureForDetailView:(id)arg1;
- (void)hideKeyboard;
- (void)hideSearchDisplayContainerView;
- (void)initData;
- (void)initDetailView;
- (void)initResultView;
- (void)initSearchBar;
- (void)initSearchBarWrap;
- (void)initView;
- (id)initWithContentViewController:(id)arg1 withEntryFlag:(unsigned int)arg2 withSearchScene:(unsigned int)arg3;
- (void)internalSwizzle;
- (_Bool)isSupportSuggestion;
- (void)keyboardDidHide:(id)arg1;
- (void)loadBSSResult;
- (void)loadLocalHtmlForDetailPage:(id)arg1;
- (void)mmSearchBarTextDidChange:(id)arg1;
- (void)mmSearchDisplayControllerDidBeginSearch;
- (void)mmSearchDisplayControllerWillBeginSearch;
- (void)mmsearchBarCancelButtonClicked:(id)arg1;
- (void)mmsearchBarSearchButtonClicked:(id)arg1;
- (_Bool)mmsearchBarShouldChangeTextInRange:(struct _NSRange)arg1 replacementText:(id)arg2;
- (void)mmsearchBarTextDidBeginEditing:(id)arg1;
- (void)moveDetailViewToRight;
- (void)notifyPageOfQueryChanged:(id)arg1;
- (void)notifyPageOfSearchClick:(id)arg1;
- (void)onBackBtnClick;
- (void)onClickRecmdWord:(id)arg1;
- (void)onClickSearchButton:(id)arg1;
- (void)onFailReceiveJson;
- (void)onLaunchDetailPage:(id)arg1;
- (void)onLaunchPage:(id)arg1 withParams:(id)arg2;
- (void)onOpenBrandContact:(id)arg1 withParams:(id)arg2;
- (void)onOpenMsgSession:(id)arg1;
- (void)onPreSearch:(id)arg1;
- (void)onReceiveJson:(id)arg1;
- (void)onRemoveDetailViewAndSearchWrap;
- (void)onSearchInputChanged:(id)arg1;
- (void)onSearchRecmdDataFail;
- (void)popFromDetailSearch;
- (id)query;
- (void)resetSearch;
- (void)resetSearchBarFrame;
- (void)resetSearchIconFrame;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarBecomeFirstResponder;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarResignFirstResponder;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
@property(nonatomic) unsigned int searchScene; // @synthesize searchScene=_searchScene;
- (void)swizzle;
- (void)unSwizzle;
- (void)updateMovingDetailView;
- (id)urlParmasForDetailPage:(id)arg1;
- (id)urlParmasForMainPage;
- (void)viewDidPop;
- (void)willBeginDetailSearch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
