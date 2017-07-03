//
//  EMPPostPeriod.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 18/10/2015.
//  Copyright © 2015 Emplate ApS. All rights reserved.
//

@import Foundation;
@import Realm;
#import "EMPApiModel.h"
NS_ASSUME_NONNULL_BEGIN

/**
 This is the EMPPostPeriod Model.

 The EMPPostPeriod objects contains information about when a given EMPPost should be active. This is determined by a start and stop date/time. Post periods are assigned to af EMPPost.
 */
@interface EMPPostPeriod : EMPApiModel

/**
 A unique id
 */
@property (nullable) NSNumber<RLMInt> *postPeriodId;
/**
 The start date/time of the period
 */
@property NSDate *start;
/**
 The end date/time of the period
 */
@property NSDate *stop;
/**
 Date of creation in the Emplate API
 */
@property (nullable) NSDate *createdAt;
/**
 Date of last update in the Emplate API
 */
@property (nullable) NSDate *updatedAt;
/**
 A boolean indicating whether the period is active right now

 _A period is active if the time on the phone is between the start and stop date/time._
 */
@property (readonly) BOOL active;

@end
NS_ASSUME_NONNULL_END
RLM_ARRAY_TYPE(EMPPostPeriod);
