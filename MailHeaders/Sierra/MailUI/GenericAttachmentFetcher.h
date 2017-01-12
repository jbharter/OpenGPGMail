//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MCActivityTarget.h"

@class NSArray, NSMutableSet, NSString;

@interface GenericAttachmentFetcher : NSObject <MCActivityTarget>
{
    NSMutableSet *_attachmentsBeingDownloaded;	// 8 = 0x8
    NSArray *_attachmentViewControllers;	// 16 = 0x10
    GenericAttachmentFetcher *_me;	// 24 = 0x18
}

@property(retain, nonatomic) GenericAttachmentFetcher *me; // @synthesize me=_me;
@property(copy, nonatomic) NSArray *attachmentViewControllers; // @synthesize attachmentViewControllers=_attachmentViewControllers;
- (void).cxx_destruct;	// IMP=0x000000010018eb49
@property(readonly, nonatomic) double temporaryFolderTimeout;
- (void)didSaveAttachment:(id)arg1 toPath:(id)arg2;	// IMP=0x000000010018ead4
- (void)didSaveAttachments:(id)arg1 paths:(id)arg2;	// IMP=0x000000010018eace
- (void)downloadedAllAttachments;	// IMP=0x000000010018eac8
- (void)didFinishBackgroundLoadOfAttachment:(id)arg1;	// IMP=0x000000010018eac2
- (void)beginSaveOfAttachments:(id)arg1 toTemporaryFolderWithName:(id)arg2 taskName:(id)arg3;	// IMP=0x000000010018e9a1
- (void)_saveAttachments:(id)arg1 itemManager:(id)arg2;	// IMP=0x000000010018e04e
@property(readonly, copy, nonatomic) NSArray *downloadedAttachments;
- (void)cancelBackgroundLoad;	// IMP=0x000000010018dda6
- (void)beginBackgroundLoad;	// IMP=0x000000010018d8cf
- (void)_downloadCompleted:(id)arg1;	// IMP=0x000000010018d6be
- (id)init;	// IMP=0x000000010018d6aa
- (id)initWithAttachmentViewControllers:(id)arg1;	// IMP=0x000000010018d62f
- (void)dealloc;	// IMP=0x000000010018d59e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isSmartMailbox;
@property(readonly) Class superclass;

@end
