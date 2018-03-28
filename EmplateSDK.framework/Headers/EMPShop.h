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
 A URL string for the shop image
 */
@property (nullable) NSString *imageURLString;
/**
 A URL string for the shop homepage
 */
@property (nullable) NSString *homepageURLString;
/**
 A URL string for the shop directions image
 */
@property (nullable) NSString *directionsURLString;
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
 A string with a URL to the logo
 */
@property (nullable) NSString *logoURLString;
/**
 A string with a URL to facebook
 */
@property (nullable) NSString *facebookURLString;
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
 The URL for the shop image
 */
@property (nullable, readonly) NSURL *imageURL;
/**
 The shop's homepage as URL
 */
@property (nullable, readonly) NSURL *homepageURL;
/**
 The URL for the directions image
 */
@property (nullable, readonly) NSURL *directionsURL;
/**
 A URL to the logo
 */
@property (nullable, readonly) NSURL *logoURL;
/**
 A URL to facebook
 */
@property (nullable, readonly) NSURL *facebookURL;

@end
NS_ASSUME_NONNULL_END
RLM_ARRAY_TYPE(EMPShop);
