//
//  OCMockito - MKVerificationData.h
//  Copyright 2011 Jonathan M. Reid. See LICENSE.txt
//

#import <Foundation/Foundation.h>

#import "MKTestLocation.h"

@class MKInvocationContainer;
@class MKInvocationMatcher;


@interface MKVerificationData : NSObject

@property(nonatomic, retain) MKInvocationContainer *invocations;
@property(nonatomic, retain) MKInvocationMatcher *wanted;
@property(nonatomic, assign) MKTestLocation testLocation;

@end
