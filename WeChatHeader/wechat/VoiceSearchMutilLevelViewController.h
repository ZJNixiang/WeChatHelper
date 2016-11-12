//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, NSMutableArray, NSString;

@interface VoiceSearchMutilLevelViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    MMTableView *m_tableView;
    NSMutableArray *m_mutableArray;
    _Bool m_isFirstControl;
    id <VoiceSearchMutilLevelViewDelegate> m_voiceSearchMutilLevelViewDelegate;
    _Bool m_seperatorMode;
}

- (void).cxx_destruct;
- (void)backToPreView:(id)arg1;
- (void)didAppear;
- (id)init;
- (void)initTableView;
- (void)loadView;
@property(retain, nonatomic) NSMutableArray *m_mutableArray; // @synthesize m_mutableArray;
@property(nonatomic) _Bool m_seperatorMode; // @synthesize m_seperatorMode;
@property(nonatomic) __weak id <VoiceSearchMutilLevelViewDelegate> m_voiceSearchMutilLevelViewDelegate; // @synthesize m_voiceSearchMutilLevelViewDelegate;
- (void)onTopBarFrameChanged;
- (void)setNotUploadData;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidUnload;
- (void)willAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
