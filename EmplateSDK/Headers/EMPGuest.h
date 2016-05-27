//
//  EMPGuest.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 12/04/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;

/**
 *    @brief This is the EMPGuest Model. The EMPGuest objects contains only the unique id for the guest. See EMPAnalyticsService for more details about EMPGuest.
 */
@interface EMPGuest : NSObject

/**
 *    @brief A unique id
 */
@property (nonatomic, strong) NSNumber *guestId;

@end