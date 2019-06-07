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
#import "EMPMedia.h"
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
 The thumbnail for the post
 @see EMPMedia
 */
@property (nullable) EMPMedia *thumbnail;
/**
 A boolean indicating if a post can be reserved and collected in the shop
 */
@property BOOL collectible;
/**
 The required parameters for collectible posts
 */
@property (nullable) NSString *parametersJSON;
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
@property NSDate *createdAt;
/**
 Date of last update in the Emplate API
 */
@property NSDate *updatedAt;
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

@end
NS_ASSUME_NONNULL_END
RLM_ARRAY_TYPE(EMPPost);
