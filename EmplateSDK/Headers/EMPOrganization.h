//
//  EMPOrganization.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 17/10/2015.
//  Copyright © 2015 Emplate ApS. All rights reserved.
//

@import UIKit;
#import "EMPDefines.h"

@interface EMPOrganization : NSObject
/**
 *    @brief A unique id
 */
@property (nonatomic, strong) NSNumber *organizationId;
/**
 *    @brief The name of the organization
 */
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *chooseButtonText; // TODO: Remove this
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
 *    @see getImageInSize:withCompletion:withFailureBlock:
 */
@property (nonatomic, strong) NSURL *imageURL;
/**
 *    @brief A URL for the organization logo
 *    @see getLogoInSize:withCompletion:withFailureBlock:
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
 *    @brief A method for getting the organization image in a completion block
 *
 *    @param imageSize       EMPImageSizeThumbnail | EMPImageSizeMobile | EMPImageSizeFull
 *    @param completionBlock a completion block called when loading is finish
 *    @param failureBlock    a failure block called if something went wrong
 */
- (void)getLogoInSize:(NSString *)imageSize withCompletion:(EMPImageBlock)completionBlock withFailureBlock:(EMPErrorBlock)failureBlock;
/**
 *    @brief A method for getting the organization logo in a completion block
 *
 *    @param imageSize       EMPImageSizeThumbnail | EMPImageSizeMobile | EMPImageSizeFull
 *    @param completionBlock a completion block called when loading is finish
 *    @param failureBlock    a failure block called if something went wrong
 */
- (void)getImageInSize:(NSString *)imageSize withCompletion:(EMPImageBlock)completionBlock withFailureBlock:(EMPErrorBlock)failureBlock;

@end