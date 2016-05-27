//
//  EMPShop.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 21/03/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;
#import "EMPDefines.h"

/**
 *    This is the EMPShop Model. The EMPShop objects contains information about the shops created in the Emplate Control Panel. The EMPSubscriptionManager is used to subscribe the user (EMPGuest) to one or more shops.
 */
@interface EMPShop : NSObject

/**
 *    @brief A unique id
 */
@property (nonatomic, strong) NSNumber *shopId;
/**
 *    @brief The shop name
 */
@property (nonatomic, strong) NSString *name;
/**
 *    @brief A URL for the shop image
 */
@property (nonatomic, strong) NSURL *imageURL;
/**
 *    @brief A URL for the shop directions image
 */
@property (nonatomic, strong) NSURL *directionsURL;
/**
 *    @brief A string with details about the shop opening hours
 */
@property (nonatomic, strong) NSString *hours;
/**
 *    @brief A string with shop phone number
 */
@property (nonatomic, strong) NSString *phone;
/**
 *    @brief A URL for the shop homepage
 */
@property (nonatomic, strong) NSURL *homepage;
/**
 *    @brief An array of the shop's beacon
 *    @see EMPBeacon
 */
@property (nonatomic, strong) NSArray *beacons;
/**
 *    @brief Get the URL for the image in a certain size.
 *
 *    @param imageSize One of the three sizes EMPImageSizeThumbnail | EMPImageSizeMobile | EMPImageSizeFull
 *
 *    @return The URL for the shop image in the given size.
 */
- (NSURL *)imageURLWithSize:(EMPImageSize)imageSize;
/**
 *    @brief Get the URL for the directions image in a certain size.
 *
 *    @param imageSize One of the three sizes EMPImageSizeThumbnail | EMPImageSizeMobile | EMPImageSizeFull
 *
 *    @return The URL for the directions image in the given size.
 */
- (NSURL *)directionsURLWithSize:(EMPImageSize)imageSize;

@end