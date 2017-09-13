//
//  EMPGuest.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 12/04/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;
@import Realm;
#import "EMPApiModel.h"
#import "EMPToken.h"
#import "EMPAction.h"
#import "EMPRedemption.h"
#import "EMPShop.h"
#import "EMPPost.h"

NS_ASSUME_NONNULL_BEGIN

/**
 This is the EMPGuest Model. The EMPGuest objects contains only the unique id for the guest. See EMPAnalyticsManager for more details about EMPGuest.
 */
@interface EMPGuest : EMPApiModel

/**
 A unique id
 */
@property NSNumber<RLMInt> *guestId;
/**
 The guest's balance (how many points)
 */
@property (nullable) NSNumber<RLMInt> *balance;
/**
 The first name of the guest
 */
@property (nullable) NSString *firstName;
/**
 The middle name of the guest
 */
@property (nullable) NSString *middleName;
/**
 The last name of the guest
 */
@property (nullable) NSString *lastName;
/**
 The guest's actions
 */
@property RLMArray<EMPAction *><EMPAction> *actions;
/**
 The guest's redemptions
 */
@property RLMArray<EMPRedemption *><EMPRedemption> *redemptions;
/**
 The shops the guest subscribed to
 @see EMPSubscriptionManager
 */
@property RLMArray<EMPShop *><EMPShop> *shops;
/**
 The posts the guest saved in the Inbox
 @see EMPInboxManager
 */
@property RLMArray<EMPPost *><EMPPost> *posts;
/**
 Date of creation in the Emplate API
 */
@property (nullable) NSDate *createdAt;
/**
 Date of last update in the Emplate API
 */
@property (nullable) NSDate *updatedAt;

@end
NS_ASSUME_NONNULL_END
RLM_ARRAY_TYPE(EMPGuest);
