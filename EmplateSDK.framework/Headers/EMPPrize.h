//
//  EMPPrize.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 18/08/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;
@import Realm;
#import "EMPApiModel.h"
#import "EMPDefines.h"

NS_ASSUME_NONNULL_BEGIN

/**
 This is the EMPPrize model.
 */
@interface EMPPrize : EMPApiModel

/**
 A unique id
 */
@property (nullable) NSNumber<RLMInt> *prizeId;
/**
 The name of the prize
 */
@property NSString *title;
/**
 A descriptive text about the prize
 */
@property (nullable) NSString *text;
/**
 The cost of the prize
 */
@property NSInteger cost;
/**
 A boolean indicating whether the prize is active or not
 */
@property BOOL active;
/**
 A URL for the prize image
 */
@property (nullable) NSString *imageURL;
/**
 A string indicating the prize limit rule
 */
@property (nullable) NSString *prizeLimitRulesKey;
/**
 Date of creation in the Emplate API
 */
@property (nullable) NSDate *createdAt;
/**
 Date of last update in the Emplate API
 */
@property (nullable) NSDate *updatedAt;
/**
 Get the URL for the thumbnail in a certain size.

 @param imageSize  One of the three sizes *EMPImageSizeThumbnail* | *EMPImageSizeMobile* | *EMPImageSizeFull*
 @return A `NSURL` for the image in the given size
 */
- (nullable NSURL *)imageURLWithSize:(EMPImageSize)imageSize;

@end
NS_ASSUME_NONNULL_END
RLM_ARRAY_TYPE(EMPPrize);
