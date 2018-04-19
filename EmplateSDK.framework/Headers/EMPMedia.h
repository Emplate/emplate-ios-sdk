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
 The url to the image (as string)
 */
@property NSString *urlString;
/**
 The url to the image
 */
@property (readonly) NSURL *url;
/**
 The url to the image
 */
- (NSURL *)urlWithSize:(EMPImageSize)imageSize;
/**
 The aspecet ratio of the image
 */
@property (readonly) CGFloat aspectRatio;

@end
NS_ASSUME_NONNULL_END
RLM_ARRAY_TYPE(EMPMedia);
