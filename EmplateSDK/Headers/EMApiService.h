//
//  EMApiService.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 17/10/2015.
//  Copyright © 2015 Emplate ApS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EMDefines.h"

@interface EMApiService : NSObject

- (void)fetchOrganizationsWithCompletionBlock:(EMArrayBlock)completionBlock failureBlock:(EMErrorBlock)failureBlock;
- (void)fetchOrganizationWithId:(NSUInteger)organizationId completionBlock:(EMOrganizationBlock)completionBlock failureBlock:(EMErrorBlock)failureBlock;
- (void)fetchBeaconsFromOrganization:(NSUInteger)organizationId completionBlock:(EMArrayBlock)completionBlock failureBlock:(EMErrorBlock)failureBlock;
- (void)fetchPostsFromBeacon:(NSUInteger)beaconId completionBlock:(EMArrayBlock)completionBlock failureBlock:(EMErrorBlock)failureBlock;
- (void)fetchPostWithId:(NSUInteger)postId completionBlock:(EMPostBlock)completionBlock failureBlock:(EMErrorBlock)failureBlock;

@end
