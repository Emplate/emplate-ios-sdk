//
//  EMPOrganization.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 17/10/2015.
//  Copyright © 2015 Emplate ApS. All rights reserved.
//

@import UIKit;
@import Realm;
#import "EMPDefines.h"
#import "EMPAudience.h"
#import "EMPShop.h"
#import "EMPApiModel.h"

NS_ASSUME_NONNULL_BEGIN

/**
 This is the EMPOrganization Model.

 The EMPOrganization objects contains information about the organization from the Emplate API.
 */
@interface EMPOrganization : EMPApiModel
/**
 A unique id
 */
@property (nullable) NSNumber<RLMInt> *organizationId;
/**
 The name of the organization
 */
@property NSString *name;
/**
 A description text about the organization
 */
@property (nullable) NSString *text;
/**
 A URL string to the homepage of the organization
 */
@property (nullable) NSString *urlString;
/**
 A color string for the the primary organization color in r,g,b
 @see color
 */
@property (nullable) NSString *colorString;
/**
 An array of all the organizations shops
 @see EMPAudience
 */
@property (nullable) RLMArray<EMPShop *><EMPShop> *shops;
/**
 An array of all the organizations audiences
 @see EMPAudience
 */
@property (nullable) RLMArray<EMPAudience *><EMPAudience> *audiences;
/**
 A URL string for the organization image
 */
@property (nullable) NSString *imageURLString;
/**
 A URL string for the organization logo
 */
@property (nullable) NSString *logoURLString;
/**
 A latitude degree of the organization
 @see coordinate
 */
@property (nullable) NSNumber<RLMDouble> *latitude;
/**
 A longitude degree of the organization
 @see coordinate
 */
@property (nullable) NSNumber<RLMDouble> *longitude;
/**
 Date of creation in the Emplate API
 */
@property (nullable) NSDate *createdAt;
/**
 Date of last update in the Emplate API
 */
@property (nullable) NSDate *updatedAt;
/**
 A URL to the homepage of the organization
 */
@property (readonly, nullable) NSURL *url;
/**
 The organization color
 */
@property (readonly, nullable) UIColor *color;
/**
 The location coordinate of the organization
 */
@property (readonly) CLLocationCoordinate2D coordinate;
/**
 Get the URL for the image in a certain size.

 @param imageSize One of the three sizes EMPImageSizeThumbnail | EMPImageSizeMobile | EMPImageSizeFull

 @return The URL for the organization image in the given size.
 */
- (nullable NSURL *)imageURLWithSize:(EMPImageSize)imageSize;
/**
 Get the URL for the logo in a certain size.

 @param imageSize One of the three sizes EMPImageSizeThumbnail | EMPImageSizeMobile | EMPImageSizeFull

 @return The URL for the organization logo in the given size.
 */
- (nullable NSURL *)logoURLWithSize:(EMPImageSize)imageSize;

@end
NS_ASSUME_NONNULL_END
RLM_ARRAY_TYPE(EMPOrganization);
