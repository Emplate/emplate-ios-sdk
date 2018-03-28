//
//  EMPRegion.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 28/03/2018.
//  Copyright © 2018 Emplate ApS. All rights reserved.
//

@import Foundation;
@import CoreLocation;
@import Realm;
#import "EMPApiModel.h"
NS_ASSUME_NONNULL_BEGIN

/**
 This is the EMPRegion Model. Regions relates to Organizations
 */
@interface EMPRegion : EMPApiModel
/**
 A unique id
 */
@property (nullable) NSNumber<RLMInt> *regionId;
/**
 The start date of the region
 */
@property NSDate *start;
/**
 The end date for the region
 */
@property NSDate *stop;
/**
 The iBeacon UUID (string)
 */
@property NSString *uuid;
/**
 The iBeacon major number
 */
@property (nullable) NSNumber<RLMInt> *major;
/**
 The iBeacon minor number
 */
@property (nullable) NSNumber<RLMInt> *minor;
/**
 A CLBeaconRegion based on the region's uuid, major and minor
 */
@property (readonly) CLBeaconRegion *beaconRegion;
/**
 Is the region active right now?
 */
@property (readonly) BOOL active;

@end

NS_ASSUME_NONNULL_END
RLM_ARRAY_TYPE(EMPRegion);
