//
//  EMPShop.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 21/03/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;
@import Realm;
#import "EMPDefines.h"
#import "EMPBeacon.h"
#import "EMPApiModel.h"
#import "EMPMedia.h"
NS_ASSUME_NONNULL_BEGIN

/**
 This is the EMPShop Model.

 The EMPShop objects contains information about the shops created in the Emplate Control Panel.

 The `EMPSubscriptionManager` is used to subscribe the user (`EMPGuest`) to one or more shops.
 */
@interface EMPShop : EMPApiModel

/**
 A unique id
 */
@property (nullable) NSNumber<RLMInt> *shopId;
/**
 The shop name
 */
@property NSString *name;
/**
 An image for the shop
 */
@property (nullable) EMPMedia *image;
/**
 A URL string for the shop homepage
 */
@property (nullable) NSString *homepageURLString;
/**
 An image with the shop directions
 */
@property (nullable) EMPMedia *directions;
/**
 A string with details about the shop opening hours
 */
@property (nullable) NSString *hours;
/**
 A string with shop phone number
 */
@property (nullable) NSString *phone;
/**
 A description of the shop
 */
@property (nullable) NSString *descriptionText;
/**
 A string with the shop email
 */
@property (nullable) NSString *email;
/**
 A logo for the Shop
 */
@property (nullable) EMPMedia *logo;
/**
 A string with a URL to facebook
 */
@property (nullable) NSString *facebookURLString;
/**
 Is Click & Collect enabled for the shop?
 */
@property BOOL cncEnabled;
/**
 Date of creation in the Emplate API
 */
@property (nullable) NSDate *createdAt;
/**
 Date of last update in the Emplate API
 */
@property (nullable) NSDate *updatedAt;
/**
 An array of the shop's beacon
 @see EMPBeacon
 */
@property RLMArray<EMPBeacon *><EMPBeacon> *beacons;
/**
 The ShopCategory object(s) the beacon is assigned to
 @see EMPShopCategory
 */
@property (readonly) RLMLinkingObjects *shopCategories;

#pragma mark - URL Getters
/**
 The shop's homepage as URL
 */
@property (nullable, readonly) NSURL *homepageURL;
/**
 A URL to facebook
 */
@property (nullable, readonly) NSURL *facebookURL;

@end
NS_ASSUME_NONNULL_END
RLM_ARRAY_TYPE(EMPShop);
