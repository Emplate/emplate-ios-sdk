//
//  EMPPostPeriod.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 18/10/2015.
//  Copyright © 2015 Emplate ApS. All rights reserved.
//

@import Foundation;

/**
 *    This is the EMPPostPeriod Model. The EMPPostPeriod objects contains information about when a given EMPPost should be active. This is determined by a start and stop date/time. Post periods are assigned to af EMPPost.
 */
@interface EMPPostPeriod : NSObject

/**
 *    @brief The start date/time of the period
 */
@property (nonatomic, strong) NSDate *start;
/**
 *    @brief The end date/time of the period
 */
@property (nonatomic, strong) NSDate *stop;
/**
 *    @brief A boolean indicating whether the period is active right now
 *    @discussion A period is active if the time on the phone is between the start and stop date/time
 */
@property (readonly) BOOL active;

@end
