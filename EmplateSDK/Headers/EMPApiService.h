//
//  EMPApiService.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 17/10/2015.
//  Copyright © 2015 Emplate ApS. All rights reserved.
//

@import Foundation;
#import "EMPDefines.h"

@interface EMPApiService : NSObject

#pragma mark - Get data

- (void)getOrganizationsWithCompletionBlock:(EMPArrayBlock)completionBlock failureBlock:(EMPErrorBlock)failureBlock;
- (void)getOrganizationWithId:(NSNumber *)organizationId completionBlock:(EMPOrganizationBlock)completionBlock failureBlock:(EMPErrorBlock)failureBlock;
- (void)getBeaconsFromOrganization:(NSNumber *)organizationId completionBlock:(EMPArrayBlock)completionBlock failureBlock:(EMPErrorBlock)failureBlock;
- (void)getBeaconsAndPostsFromOrganization:(NSNumber *)organizationId completionBlock:(EMPArrayBlock)completionBlock failureBlock:(EMPErrorBlock)failureBlock;
- (void)getPostsFromBeacon:(NSNumber *)beaconId completionBlock:(EMPArrayBlock)completionBlock failureBlock:(EMPErrorBlock)failureBlock;
- (void)getPostWithId:(NSNumber *)postId completionBlock:(EMPPostBlock)completionBlock failureBlock:(EMPErrorBlock)failureBlock;
- (void)getShopCategoriesFromOrganization:(NSNumber *)organizationId completionBlock:(EMPArrayBlock)completionBlock failureBlock:(EMPErrorBlock)failureBlock;
- (void)getShopsFromOrganization:(NSNumber *)organizationId completionBlock:(EMPArrayBlock)completionBlock failureBlock:(EMPErrorBlock)failureBlock;

#pragma mark - Analytics

/**
 *    @brief Create a new guest (get a new guestId)
 *
 *    @param guest           The new EMPGuest object (should not have a guestId)
 *    @param completionBlock A block to be called when finished
 *    @param failureBlock    A block to be called if something went wrong
 */
- (void)createGuest:(EMPGuest *)guest completionBlock:(EMPGuestBlock)completionBlock failureBlock:(EMPErrorBlock)failureBlock;
/**
 *    @brief Send logged views from the AnalyticsManager
 *    @discussion Is used to send PostViews and BeaconViews
 *    @see EMPAnalyticsService
 *
 *    @param views           A set of PostViews or BeaconViews
 *    @param typeOfView      The type of views to send TypeOfView
 *    @param completionBlock A block to be called when finished
 *    @param failureBlock    A block to be called if something went wrong
 */
- (void)sendLoggedViews:(NSSet *)views typeOfView:(TypeOfView)typeOfView completionBlock:(EMPArrayBlock)completionBlock failureBlock:(EMPErrorBlock)failureBlock;
/**
 *    @brief Update shop subscriptions for the user
 *
 *    @param subscriptions   An array of shopIds
 *    @param completionBlock A block to be called when finished
 *    @param failureBlock    A block to be called if something went wrong
 */
- (void)updateSubscriptions:(NSArray *)subscriptions completionBlock:(EMPBasicBlock)completionBlock failureBlock:(EMPErrorBlock)failureBlock;

#pragma mark - Singleton

/**
 *    @brief The shared instance of EMPApiService
 *    @discussion This should be used for all API operations
 *
 *    @return EMPApiService
 */
+ (EMPApiService *)sharedService;

@end
