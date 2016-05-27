//
//  EMPOrganization.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 17/10/2015.
//  Copyright © 2015 Emplate ApS. All rights reserved.
//

@import UIKit;
#import "EMPDefines.h"

/**
 *    This is the EMPOrganization Model. The EMPOrganization objects contains information about the organization from the Emplate API.
 */
@interface EMPOrganization : NSObject
/**
 *    @brief A unique id
 */
@property (nonatomic, strong) NSNumber *organizationId;
/**
 *    @brief The name of the organization
 */
@property (nonatomic, strong) NSString *name;
/**
 *    @brief A description text about the organization
 */
@property (nonatomic, strong) NSString *text;
/**
 *    @brief A URL to the homepage of the organization
 */
@property (nonatomic, strong) NSURL *url;
/**
 *    @brief A color string for the the primary organization color in r,g,b
 *    @see primaryColor
 */
@property (nonatomic, strong) NSString *primaryColorString;
/**
 *    @brief A color string for the the secondary organization color in r,g,b
 *    @see secondaryColor
 */
@property (nonatomic, strong) NSString *secondaryColorString;
/**
 *    @brief A boolean used to see if the organization is using a map for the beacons
 */
@property (nonatomic, assign) BOOL useMap;
/**
 *    @brief A boolean used to see if the status bar should be black
 */
@property (nonatomic, assign) BOOL shouldHaveBlackStatusBar;
/**
 *    @brief An array of all the organizations audiences
 *    @see EMPAudience
 */
@property (nonatomic, strong) NSArray *audiences;
/**
 *    @brief A URL for the organization image
 */
@property (nonatomic, strong) NSURL *imageURL;
/**
 *    @brief A URL for the organization logo
 */
@property (nonatomic, strong) NSURL *logoURL;
/**
 *    @brief The primary organization color
 */
@property (readonly) UIColor *primaryColor;
/**
 *    @brief The primary organization color
 */
@property (readonly) UIColor *secondaryColor;
/**
 *    @brief Get the URL for the image in a certain size.
 *
 *    @param imageSize One of the three sizes EMPImageSizeThumbnail | EMPImageSizeMobile | EMPImageSizeFull
 *
 *    @return The URL for the organization image in the given size.
 */
- (NSURL *)imageURLWithSize:(EMPImageSize)imageSize;
/**
 *    @brief Get the URL for the logo in a certain size.
 *
 *    @param imageSize One of the three sizes EMPImageSizeThumbnail | EMPImageSizeMobile | EMPImageSizeFull
 *
 *    @return The URL for the organization logo in the given size.
 */
- (NSURL *)logoURLWithSize:(EMPImageSize)imageSize;

@end