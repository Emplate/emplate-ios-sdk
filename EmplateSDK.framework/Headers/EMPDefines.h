//
//  EMPDefines.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 18/10/2015.
//  Copyright © 2015 Emplate ApS. All rights reserved.
//

@class RLMResults;
@class RLMObject;
@protocol EMPApiModel;

/**
 The EMPObjectBlock - used for completion blocks in the `EMPApiClient` when getting single objects

 @param object The object queried from Realm
 @param error An error object if any errors occurred
 */
typedef void (^EMPObjectBlock)(id<EMPApiModel> object, NSError *error);
/**
 The EMPObjectsBlock - used for completion blocks in the `EMPApiClient` when getting multiple objects

 @param objects A collection of objects queried from Realm
 @param error An error object if any errors occurred
 */
typedef void (^EMPObjectsBlock)(RLMResults *objects, NSError *error);
/**
 The EMPErrorBlock - used for completion blocks in the `EMPApiClient` when getting no objects

 @param error An error object if any errors occurred
 */
typedef void (^EMPErrorBlock)(NSError *error);

typedef enum {
    EMPImageSizeThumbnail = 1,
    EMPImageSizeMobile,
    EMPImageSizeFull
} EMPImageSize;
