//
//  EMPSubscriptionManager.h
//  EmplateSDK
//
//  Created by Victor Kristensen on 24/03/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;

@class EMPShop;

NS_ASSUME_NONNULL_BEGIN
/**
 This is the EMPSubscriptionManager which is used to subscribe the user to one or more EMPShop objects.

 *Use the sharedManager to perform the methods in this manager.*
 */
@interface EMPSubscriptionManager : NSObject

#pragma mark - Getting

/**
 Is the user subscribed to a shop
 @see EMPShop

 @param shop EMPShop

 @return BOOL indicating wheter the shop is subscribed to or not
 */
- (BOOL)isShopSubscribedTo:(EMPShop *)shop;

#pragma mark - Setting

/**
 Subscribe the user to a shop
 @see EMPShop

 @param shop The EMPShop to subscribe to
 */
- (void)subscribeToShop:(EMPShop *)shop;
/**
 Unsubscribe the user from a shop
 @see EMPShop

 @param shop The EMPShop to unsubscribe from
 */
- (void)unsubscribeFromShop:(EMPShop *)shop;
/**
 Toggle the subscription for a shop
 @see EMPShop

 @param shop The EMPShop to toggle subscription for
 */
- (void)toggleSubscriptionForShop:(EMPShop *)shop;
/**
 Sync the subscriptions with the API.
 */
- (void)syncSubscriptions;

#pragma mark - Singleton

/**
 The shared instance of the EMPSubscriptionManager

 _Should be used for all subscription operations._

 @return EMPSubscriptionManager
 */
+ (EMPSubscriptionManager *)sharedManager;

@end

NS_ASSUME_NONNULL_END
