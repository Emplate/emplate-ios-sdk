//
//  EMPApiService.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 17/10/2015.
//  Copyright © 2015 Emplate ApS. All rights reserved.
//

@import Foundation;
#import "EMPDefines.h"

/**
 *    This is the EMPApiService class. Use this class to get data from the Emplate API. At the moment there is only some specific API calls available. In the future it will be possible to build your own request to the API, to the exactly the data you need.
 *
 *    *Use the sharedService to perform the methods in this service.*
 */
@interface EMPApiService : NSObject

#pragma mark - Get data

/**
 *    @brief Get all public EMPOrganization objects
 *
 *    @param completionBlock A completion block with the array of EMPOrganization objects
 *    @param failureBlock    A failure block with the error object
 */
- (void)getOrganizationsWithCompletionBlock:(EMPArrayBlock)completionBlock failureBlock:(EMPErrorBlock)failureBlock;
/**
 *    @brief Get a single EMPOrganization from an organizationId
 *
 *    @param organizationId  The unique id of the organization
 *    @param completionBlock A completion block with the EMPOrganization object
 *    @param failureBlock    A failure block with the error object
 */
- (void)getOrganizationWithId:(NSNumber *)organizationId completionBlock:(EMPOrganizationBlock)completionBlock failureBlock:(EMPErrorBlock)failureBlock;
/**
 *    @brief Get EMPBeacon objects (without their EMPPost objects) from an organizationId
 *
 *    @param organizationId  The unique id of the organization
 *    @param completionBlock A completion block with the array of EMPBeacon objects
 *    @param failureBlock    A failure block with the error object
 */
- (void)getBeaconsFromOrganization:(NSNumber *)organizationId completionBlock:(EMPArrayBlock)completionBlock failureBlock:(EMPErrorBlock)failureBlock;
/**
 *    @brief Get EMPBeacon objects and their EMPPost objects from an organizationId
 *
 *    @param organizationId  The unique id of the organization
 *    @param completionBlock A completion block with the array of EMPBeacon objects
 *    @param failureBlock    A failure block with the error object
 */
- (void)getBeaconsAndPostsFromOrganization:(NSNumber *)organizationId completionBlock:(EMPArrayBlock)completionBlock failureBlock:(EMPErrorBlock)failureBlock;
/**
 *    @brief Get all EMPPost objects from an beaconId
 *
 *    @param beaconId        The unique id of the beacon
 *    @param completionBlock A completion block with the array of EMPPost objects
 *    @param failureBlock    A failure block with the error object
 */
- (void)getPostsFromBeacon:(NSNumber *)beaconId completionBlock:(EMPArrayBlock)completionBlock failureBlock:(EMPErrorBlock)failureBlock;
/**
 *    @brief Get a single EMPPost from a postId
 *
 *    @param postId          The unique id of the post
 *    @param completionBlock A completion block with the EMPPost object
 *    @param failureBlock    A failure block with the error object
 */
- (void)getPostWithId:(NSNumber *)postId completionBlock:(EMPPostBlock)completionBlock failureBlock:(EMPErrorBlock)failureBlock;
/**
 *    @brief Get all EMPShopCategory objects from an organizationId
 *
 *    @param organizationId  The unique id of the organization
 *    @param completionBlock A completion block with the array of EMPShopCategory objects
 *    @param failureBlock    A failure block with the error object
 */
- (void)getShopCategoriesFromOrganization:(NSNumber *)organizationId completionBlock:(EMPArrayBlock)completionBlock failureBlock:(EMPErrorBlock)failureBlock;
/**
 *    @brief Get all EMPShop objects from an organizationId
 *
 *    @param organizationId  The unique id of the organization
 *    @param completionBlock A completion block with the array of EMPShop objects
 *    @param failureBlock    A failure block with the error object
 */
- (void)getShopsFromOrganization:(NSNumber *)organizationId completionBlock:(EMPArrayBlock)completionBlock failureBlock:(EMPErrorBlock)failureBlock;

#pragma mark - Singleton

/**
 *    @brief The shared instance of EMPApiService
 *    @discussion This should be used for all API operations
 *
 *    @return EMPApiService
 */
+ (EMPApiService *)sharedService;

@end
