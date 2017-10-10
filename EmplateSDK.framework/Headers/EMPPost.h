//
//  EMPPost.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 18/10/2015.
//  Copyright © 2015 Emplate ApS. All rights reserved.
//

@import Foundation;
@import Realm;
#import "EMPDefines.h"
#import "EMPPostPeriod.h"
#import "EMPApiModel.h"
#import "EMPPostField.h"
NS_ASSUME_NONNULL_BEGIN

/**
 This is the EMPPost model. EMPPost objects contains the details for the post created in the Emplate Control Panel. EMPPost objects can also be assigned to EMPBeacon objects.
 */
@interface EMPPost : EMPApiModel
/**
 A unique id
 */
@property (nullable) NSNumber<RLMInt> *postId;
/**
 The name of the post
 */
@property NSString *name;
/**
 An HTML string with the post content
 */
@property (nullable) NSString *content;
/**
 A URL for the organization image
 */
@property (nullable) NSString *thumbnailURL;
/**
 An array of periods where the post should be active
 @see EMPPostPeriod
 */
@property RLMArray<EMPPostPeriod *><EMPPostPeriod> *periods;
/**
 An array of postFields of the post
 @see EMPPostField
 */
@property RLMArray<EMPPostField *><EMPPostField> *postFields;
/**
 The beacon object(s) the post is assigned to

 _A Post can only be assigned to one beacon in the Emplate API, but Realm will find all beacons linking to this post. In all normal cases this collection will only contain a single beacon._
 @see EMPBeacon
 */
@property (readonly) RLMLinkingObjects *beacons;
/**
 The audience object(s) the post is assigned to
 @see EMPAudience
 */
@property (readonly) RLMLinkingObjects *audiences;
/**
 Date of creation in the Emplate API
 */
@property (nullable) NSDate *createdAt;
/**
 Date of last update in the Emplate API
 */
@property (nullable) NSDate *updatedAt;
/**
 A boolean indicating if a post has been read
 */
@property BOOL read;
/**
 A boolean indicating if a post has been saved
 */
@property BOOL saved;
/**
 A boolean indicating that the post is active

 _A post is active if it has one or more active EMPPostPeriods or no periods at all._
 @see EMPPostPeriod
 */
@property (readonly) BOOL active;
/**
 Get the URL for the thumbnail in a certain size.

 @param imageSize One of the three sizes EMPImageSizeThumbnail | EMPImageSizeMobile | EMPImageSizeFull

 @return The URL for the post thumbnail in the given size.
 */
- (nullable NSURL *)thumbnailURLWithSize:(EMPImageSize)imageSize;

@end
NS_ASSUME_NONNULL_END
RLM_ARRAY_TYPE(EMPPost);
