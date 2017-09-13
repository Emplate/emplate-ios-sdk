//
//  EMPBeaconCategory.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 03/11/2016.
//  Copyright (c) 2016 Emplate ApS. All rights reserved.
//

@import Foundation;
@import Realm;
#import "EMPApiModel.h"
#import "EMPBeacon.h"
NS_ASSUME_NONNULL_BEGIN

/**
 This is the BeaconCategory model. A BeaconCategory can have multiple beacons assigned.
 */
@interface EMPBeaconCategory : EMPApiModel

/**
 A unique id
 */
@property (nullable) NSNumber<RLMInt> *beaconCategoryId;
/**
 The name of the BeaconCategory
 */
@property NSString *name;
/**
 An array of beacons on the BeaconCategory
 @see EMPBeacon
 */
@property RLMArray<EMPBeacon *><EMPBeacon> *beacons;
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
RLM_ARRAY_TYPE(EMPBeaconCategory)
