//
//  EMPShop.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 21/03/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;
#import "EMPDefines.h"

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
 *    @brief A method for getting the shop image in a completion block
 *
 *    @param completionBlock a completion block called when loading is finish
 *    @param failureBlock    a failure block called if something went wrong
 */
- (void)getImageWithCompletion:(EMPImageBlock)completionBlock withFailureBlock:(EMPErrorBlock)failureBlock;
/**
 *    @brief A method for getting the shop directions image in a completion block
 *
 *    @param completionBlock a completion block called when loading is finish
 *    @param failureBlock    a failure block called if something went wrong
 */
- (void)getDirectionsWithCompletion:(EMPImageBlock)completionBlock withFailureBlock:(EMPErrorBlock)failureBlock;

@end