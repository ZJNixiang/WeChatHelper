//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UISearchBar;

@protocol MMVoiceSearchBarDelegate <NSObject>
- (void)MMVoiceSearchBar:(UISearchBar *)arg1 textDidChange:(NSString *)arg2;
- (void)MMVoiceSearchBarCancelButtonClicked:(UISearchBar *)arg1;
- (void)MMVoiceSearchBarSearchButtonClicked:(UISearchBar *)arg1;
- (_Bool)MMVoiceSearchBarShouldBeginEditing:(UISearchBar *)arg1;
@end

