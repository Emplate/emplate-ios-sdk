//
//  EMPSubscriptionManager.h
//  EmplateSDK
//
//  Created by Victor Kristensen on 24/03/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;

@class EMPShop;

/**
 *    This is the EMPSubscriptionManager which is used to subscribe the user to one or more EMPShop objects.
 *
 *    *Use the sharedManager to perform the methods in this manager.*
 */
@interface EMPSubscriptionManager : NSObject

#pragma mark - Getting

/**
 *    @brief Is the user subscribed to a shop
 *    @see EMPShop
 *
 *    @param shop EMPShop
 *
 *    @return BOOL indicating wheter the shop is subscribed to or not
 */
- (BOOL)isShopSubscribedTo:(EMPShop *)shop;

#pragma mark - Setting

/**
 *    @brief Subscribe the user to a shop
 *    @see EMPShop
 *
 *    @param shop The EMPShop to subscribe to
 */
- (void)subscribeToShop:(EMPShop *)shop;
/**
 *    @brief Unsubscribe the user from a shop
 *    @see EMPShop
 *
 *    @param shop The EMPShop to unsubscribe from
 */
- (void)unsubscribeFromShop:(EMPShop *)shop;
/**
 *    @brief Toggle the subscription for a shop
 *    @see EMPShop
 *
 *    @param shop The EMPShop to toggle subscription for
 */
- (void)toggleSubscriptionForShop:(EMPShop *)shop;

#pragma mark - Singleton

/**
 *    @brief The shared instance of the EMPSubscriptionManager
 *    @discussion Should be used for all subscription operations
 *
 *    @return EMPSubscriptionManager
 */
+ (EMPSubscriptionManager *)sharedManager;

@end
