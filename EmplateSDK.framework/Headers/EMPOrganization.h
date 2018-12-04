//
//  EMPOrganization.h
//  EmplateSDK
//
//  Created by S¯ren Gregersen on 17/10/2015.
//  Copyright © 2015 Emplate ApS. All rights reserved.
//

@import UIKit;
@import Realm;
#import "EMPDefines.h"
#import "EMPAudience.h"
#import "EMPShopCategory.h"
#import "EMPRegion.h"
#import "EMPMedia.h"
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
 An array of all the organizations shop categories
 @see EMPShopCategory
 */
@property RLMArray<EMPShopCategory *><EMPShopCategory> *shopCategories;
/**
 An array of all the organizations regions
 @see EMPRegion
 */
@property RLMArray<EMPRegion *><EMPRegion> *regions;
/**
 An array of all the organizations audiences
 @see EMPAudience
 */
@property RLMArray<EMPAudience *><EMPAudience> *audiences;
/**
 An image for the organization
 */
@property (nullable) EMPMedia *image;
/**
 A logo for the organization
 */
@property (nullable) EMPMedia *logo;
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
 A number indicating how many times it should be possible to check in and create actions
 @see EMPAction
 */
@property int checkinsPerWeek;
/**
 A number indicating how many exclusive prizes a guest can redeem in 365 days
 @see EMPPrize
 */
@property int exclusiveMax;
/**
 Warning when redeeming the prize
 */
@property NSString *prizeWarning;
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

@end
NS_ASSUME_NONNULL_END
RLM_ARRAY_TYPE(EMPOrganization);

