//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EmailImporter.h"

@class NSSet;

@interface FilesystemEmailImporter : EmailImporter
{
}

- (void)verifyFromSpaceHeaderForScanner:(id)arg1 dataLength:(unsigned long long)arg2;	// IMP=0x000000010018136a
- (void)sniffLineDelimiterFromData:(id)arg1;	// IMP=0x0000000100181117
- (BOOL)isValidMailbox:(id)arg1;	// IMP=0x0000000100180ce2
@property(readonly, nonatomic) char *fromString;
@property(readonly, copy, nonatomic) NSSet *pathExtensions;
- (void)readMailbox:(id)arg1 intoMailbox:(id)arg2;	// IMP=0x00000001001805e4
- (void)processUserSelection;	// IMP=0x000000010017fe6e
- (void)prepareForImport;	// IMP=0x000000010017fe1d

@end
