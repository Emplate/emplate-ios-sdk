//
//  EMPGeofence.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 04/04/2017.
//  Copyright © 2017 Emplate ApS. All rights reserved.
//

@import Foundation;
@import CoreLocation;
@import Realm;
#import "EMPApiModel.h"
#import "EMPPost.h"
NS_ASSUME_NONNULL_BEGIN

/**
 This is the EMPGeofence Model. The EMPGeofence objects contains information about geofences created in the Emplate API.
 Geofences can have multiple EMPPost objects assigned in the posts array.
 */
@interface EMPGeofence : EMPApiModel

/**
 A unique id
 */
@property (nullable) NSNumber<RLMInt> *geofenceId;
/**
 The name of the geofence
 */
@property NSString *name;
/**
 The message string to use in geofence notifications
 */
@property (nullable) NSString *message;
/**
 A latitude degree of the geofence
 @see coordinate
 */
@property double latitude;
/**
 A longitude degree of the geofence
 @see coordinate
 */
@property double longitude;
/**
 A radius for the geofence region in meters (should not be less than 50 meter)
 @see region
 */
@property double radius;
/**
 An array of posts on the geofence
 @see EMPPost
 */
@property (nullable) RLMArray<EMPPost *><EMPPost> *posts;
/**
 Date of creation in the Emplate API
 */
@property (nullable) NSDate *createdAt;
/**
 Date of last update in the Emplate API
 */
@property (nullable) NSDate *updatedAt;
/**
 A CLCircularRegion based on the geofence's latitude, longitude and radius
 */
@property (readonly) CLCircularRegion *region;
/**
 The messaged used in geofence notifications

 *Is based on the message property. If the message property is empty, the notification message will contain the name of the geofence.*
 */
@property (readonly) NSString *notificationMessage;
/**
 A boolean indicating that the geofence is active

 *A geofence is active if it has one or more active posts assigned.*
 @see EMPPost
 */
@property (readonly) BOOL active;
/**
 The location coordinate of the geofence
 */
@property (readonly) CLLocationCoordinate2D coordinate;
/**
 An array of all active posts
 @see EMPPost
 */
@property (readonly) RLMResults<EMPPost *> *activePosts;

@end

NS_ASSUME_NONNULL_END
RLM_ARRAY_TYPE(EMPGeofence)
