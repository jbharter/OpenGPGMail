//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Assistant.h"

#import "MFLibraryUpgraderDelegate-Protocol.h"
#import "MFPersistenceVersionUpgraderDelegate-Protocol.h"

@class MFLibraryUpgrader, MFPersistenceVersionUpgrader, NSButton, NSString, NSView;

@interface LibraryUpgradeAssistant : Assistant <MFLibraryUpgraderDelegate, MFPersistenceVersionUpgraderDelegate>
{
    MFLibraryUpgrader *_libraryUpgrader;
    NSView *_currentView;
    long long _state;
    BOOL _accountsRequireStoragePolicyChange;
    BOOL _isProgressIndeterminate;
    NSView *_accountsRequireCachePolicyChangeView;
    NSView *_patienceView;
    NSView *_epilogueView;
    NSView *_errorView;
    NSButton *_showNewFeaturesButton;
    NSString *_statusMessage;
    double _progress;
    MFPersistenceVersionUpgrader *_persistenceVersionUpgrader;
}

@property(readonly, nonatomic) MFPersistenceVersionUpgrader *persistenceVersionUpgrader; // @synthesize persistenceVersionUpgrader=_persistenceVersionUpgrader;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) BOOL isProgressIndeterminate; // @synthesize isProgressIndeterminate=_isProgressIndeterminate;
@property(copy, nonatomic) NSString *statusMessage; // @synthesize statusMessage=_statusMessage;
@property(nonatomic) BOOL accountsRequireStoragePolicyChange; // @synthesize accountsRequireStoragePolicyChange=_accountsRequireStoragePolicyChange;
@property(nonatomic) __weak NSButton *showNewFeaturesButton; // @synthesize showNewFeaturesButton=_showNewFeaturesButton;
@property(retain, nonatomic) NSView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) NSView *epilogueView; // @synthesize epilogueView=_epilogueView;
@property(retain, nonatomic) NSView *patienceView; // @synthesize patienceView=_patienceView;
@property(retain, nonatomic) NSView *accountsRequireCachePolicyChangeView; // @synthesize accountsRequireCachePolicyChangeView=_accountsRequireCachePolicyChangeView;
//- (void).cxx_destruct;
- (void)upgrader:(id)arg1 didFailWithError:(id)arg2;
- (void)upgraderDidFinish:(id)arg1;
- (void)persistenceUpgraderDidFinish;
- (void)showNewFeatures:(id)arg1;
- (void)requestUserAttentionWithRequestType:(unsigned long long)arg1;
- (void)goForward;
- (void)stop;
- (void)start;
@property(retain, nonatomic) NSView *currentView;
@property(nonatomic) long long state;
- (id)windowTitle;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain, nonatomic) MFLibraryUpgrader *libraryUpgrader;
- (void)dealloc;
- (id)initWithAssistantManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

