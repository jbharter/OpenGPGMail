//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class MCTaskHandler, NSError;

@interface MCTaskHandlerOperation : NSOperation
{
    BOOL _succeeded;	// 24 = 0x18
    MCTaskHandler *_handler;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
}

@property(retain) NSError *error; // @synthesize error=_error;
@property BOOL succeeded; // @synthesize succeeded=_succeeded;
@property(retain) MCTaskHandler *handler; // @synthesize handler=_handler;
- (void).cxx_destruct;	// IMP=0x00000000000a80af

@end

