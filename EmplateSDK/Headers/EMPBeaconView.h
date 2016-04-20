//
//  EMPBeaconView.h
//  EmplateSDK
//
//  Created by Victor Kristensen on 22/01/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;

@interface EMPBeaconView : NSObject <NSCoding>

/**
 *    @brief The unique id of the guest viewing the beacon
 *    @see EMPGuest
 */
@property (nonatomic, strong) NSNumber *guestId;
/**
 *    @brief The unique id of the viewed beacon
 *    @see EMPBeacon
 */
@property (nonatomic, strong) NSNumber *beaconId;
/**
 *    @brief The date/time when the view of the beacon started
 */
@property (nonatomic, strong) NSDate *enter;
/**
 *    @brief The date/time when the view of the beacon ended
 */
@property (nonatomic, strong) NSDate *exit;

/**
 *    @brief Init a new beacon view with beaconId
 *
 *    @param beaconId The unique id of the viewed beacon
 *
 *    @return A new EMPBeaconView with beaconId set
 */
+ (EMPBeaconView *)beaconViewForBeaconId:(NSNumber *)beaconId;

@end
