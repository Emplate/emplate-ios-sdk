//
//  EMPBeacon.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 18/10/2015.
//  Copyright © 2015 Emplate ApS. All rights reserved.
//

@import Foundation;
@import CoreLocation;

/**
 *    This is the EMPBeacon Model. The EMPBeacon objects contains information about the physical beacons, and can have EMPPost objects assigned in the posts array.
 */
@interface EMPBeacon : NSObject

/**
 *    @brief A unique id
 */
@property (nonatomic, strong) NSNumber *beaconId;
/**
 *    @brief The name of the beacon
 */
@property (nonatomic, strong) NSString *name;
/**
 *    @brief The iBeacon UUID (string)
 */
@property (nonatomic, strong) NSString *uuidString;
/**
 *    @brief The iBeacon major number
 */
@property (nonatomic, strong) NSNumber *major;
/**
 *    @brief The iBeacon minor number
 */
@property (nonatomic, strong) NSNumber *minor;
/**
 *    @brief The message string to use in beacon notifications
 */
@property (nonatomic, strong) NSString *message;
/**
 *    @brief An array of posts on the beacon
 *    @see EMPPost
 */
@property (nonatomic, strong) NSArray *posts;
/**
 *    @brief Boolean to indicate if the beacon is a shopBeacon
 *    @discussion Has to be set manually - this is done by EMPSubscriptionManager when a beacon is added to the EMPBeaconManager
 */
@property (nonatomic, assign) BOOL isShopBeacon;

/**
 *    @brief The iBeacon UUID based on the uuidString
 */
@property (readonly) NSUUID *uuid;
/**
 *    @brief A CLBeaconRegion based on the beacon's uuid, major and minor
 */
@property (readonly) CLBeaconRegion *beaconRegion;
/**
 *    @brief The messaged used in beacon notifications
 *    @discussion Is based on the message property. If the message property is empty, the notification message will contain the name of the beacon
 */
@property (readonly) NSString *notificationMessage;
/**
 *    @brief A boolean indicating that the beacon is active
 *    @discussion A beacon is active if it has one or more active posts assigned
 *    @see EMPPost
 */
@property (readonly) BOOL active;
/**
 *    @brief An array of all active posts
 *    @see EMPPost
 */
@property (readonly) NSArray *activePosts;

@end
