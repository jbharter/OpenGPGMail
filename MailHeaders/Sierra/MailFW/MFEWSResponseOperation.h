//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCMonitoredOperation.h"

@class MFEWSGateway, NSError;

@interface MFEWSResponseOperation : MCMonitoredOperation
{
    BOOL _isOffline;	// 24 = 0x18
    id _response;	// 32 = 0x20
    MFEWSGateway *_gateway;	// 40 = 0x28
    id <MFEWSErrorHandler> _errorHandler;	// 48 = 0x30
    NSError *_lastError;	// 56 = 0x38
}

@property BOOL isOffline; // @synthesize isOffline=_isOffline;
@property(retain) NSError *lastError; // @synthesize lastError=_lastError;
@property(retain, nonatomic) id <MFEWSErrorHandler> errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) MFEWSGateway *gateway; // @synthesize gateway=_gateway;
@property(retain) id response; // @synthesize response=_response;
- (void).cxx_destruct;	// IMP=0x00000000000b68a7
- (id)description;	// IMP=0x00000000000b66cc
- (BOOL)handleResponseMessage:(id)arg1 withObject:(id)arg2;	// IMP=0x00000000000b5ba7
- (BOOL)handleResponseMessage:(id)arg1;	// IMP=0x00000000000b5b93
- (void)handleResponseMessages;	// IMP=0x00000000000b580b
- (void)failWithError:(id)arg1;	// IMP=0x00000000000b57d9
- (void)executeOperation;	// IMP=0x00000000000b5767
- (void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2;	// IMP=0x00000000000b56f1
- (void)main;	// IMP=0x00000000000b54ea
- (id)init;	// IMP=0x00000000000b541b
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;	// IMP=0x00000000000b537c

@end
