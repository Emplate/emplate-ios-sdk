//
//  EMPBeacon.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 18/10/2015.
//  Copyright © 2015 Emplate ApS. All rights reserved.
//

@import Foundation;
@import CoreLocation;
@import Realm;
#import "EMPPost.h"
#import "EMPApiModel.h"
NS_ASSUME_NONNULL_BEGIN

/**
 This is the EMPBeacon Model. The EMPBeacon objects contains information about the physical beacons, and can have EMPPost objects assigned in the posts array.
 */
@interface EMPBeacon : EMPApiModel

/**
 A unique id
 */
@property (nullable) NSNumber<RLMInt> *beaconId;
/**
 The name of the beacon
 */
@property NSString *name;
/**
 The iBeacon UUID (string)
 */
@property NSString *uuidString;
/**
 The iBeacon major number
 */
@property NSNumber<RLMInt> *major;
/**
 The iBeacon minor number
 */
@property NSNumber<RLMInt> *minor;
/**
 The message string to use in beacon notifications
 */
@property (nullable) NSString *message;
/**
 A latitude degree of the beacon
 @see coordinate
 */
@property (nullable) NSNumber<RLMDouble> *latitude;
/**
 A longitude degree of the beacon
 @see coordinate
 */
@property (nullable) NSNumber<RLMDouble> *longitude;
/**
 An array of posts on the beacon
 @see EMPPost
 */
@property RLMArray<EMPPost *><EMPPost> *posts;
/**
 The Shop object(s) the beacon is assigned to
 @discussion A Beacon can only be assigned to one Shop in the Emplate API, but Realm will find all shops linking to this beacon. In all normal cases this collection will only contain a single Shop
 @see EMPShop
 */
@property (readonly) RLMLinkingObjects *shops;
/**
 The BeaconCategory object(s) the beacon is assigned to
 @discussion A Beacon can only be assigned to one BeaconCategory in the Emplate API, but Realm will find all BeaconCategories linking to this beacon. In all normal cases this collection will only contain a single BeaconCategory
 @see EMPBeaconCategory
 */
@property (readonly) RLMLinkingObjects *beaconCategories;
/**
 Date of creation in the Emplate API
 */
@property (nullable) NSDate *createdAt;
/**
 Date of last update in the Emplate API
 */
@property (nullable) NSDate *updatedAt;
/**
 The iBeacon UUID based on the uuidString
 */
@property (readonly) NSUUID *uuid;
/**
 A CLBeaconRegion based on the beacon's uuid, major and minor
 */
@property (readonly) CLBeaconRegion *beaconRegion;
/**
 The messaged used in beacon notifications

 *Is based on the message property. If the message property is empty, the notification message will contain the name of the beacon.*
 */
@property (readonly) NSString *notificationMessage;
/**
 A boolean indicating that the beacon is active

 *A beacon is active if it has one or more active posts assigned.*

 @see EMPPost
 */
@property (readonly) BOOL active;
/**
 The location coordinate of the beacon
 */
@property (readonly) CLLocationCoordinate2D coordinate;
/**
 An array of all active posts
 @see EMPPost
 */
@property (readonly) RLMResults<EMPPost *> *activePosts;

@end
NS_ASSUME_NONNULL_END
RLM_ARRAY_TYPE(EMPBeacon);
