//
//  EMPMedia.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 18/04/2018.
//  Copyright © 2018 Emplate ApS. All rights reserved.
//

@import Foundation;
@import UIKit;
@import Realm;
#import "EMPApiModel.h"
#import "EMPDefines.h"

NS_ASSUME_NONNULL_BEGIN

/**
 This is the EMPMedia Model. The EMPMedia models represents images in the Emplate API
 */
@interface EMPMedia : EMPApiModel
/**
 A unique id
 */
@property NSNumber<RLMInt> *mediaId;
/**
 The width of the original image
 */
@property int width;
/**
 The height of the original image
 */
@property int height;
/**
 The url to the image in original size (as string)
 */
@property NSString *urlOriginal;
/**
 The url to the image in large size (as string)
 */
@property (nullable) NSString *urlLarge;
/**
 The url to the image in mobile size (as string)
 */
@property (nullable) NSString *urlMobile;
/**
 The url to the image in thumbnail size (as string)
 */
@property (nullable) NSString *urlThumbnail;
/**
 The url to the image
 */
- (NSURL *)urlInSize:(EMPImageSize)imageSize;
/**
 The aspecet ratio of the image
 */
@property (readonly) CGFloat aspectRatio;

@end
NS_ASSUME_NONNULL_END
RLM_ARRAY_TYPE(EMPMedia);
