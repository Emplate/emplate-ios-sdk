//
//  EMPAudience.h
//  EmplateSDK
//
//  Created by Victor Kristensen on 10/02/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;
@import Realm;
#import "EMPApiModel.h"
#import "EMPPost.h"
NS_ASSUME_NONNULL_BEGIN

/**
 This is the EMPAudience Model
 */
@interface EMPAudience : EMPApiModel

/**
 A unique id
 */
@property (nullable) NSNumber<RLMInt> *audienceId;
/**
 The name of the audience
 */
@property NSString *name;
/**
 An array of posts on the audience
 @see EMPPost
 */
@property (nullable) RLMArray<EMPPost *><EMPPost> *posts;
/**
 Date of creation in the Emplate API
 */
@property (nullable) NSDate *createdAt;
/**
 Date of last update in the Emplate API
 */
@property (nullable) NSDate *updatedAt;

@end
NS_ASSUME_NONNULL_END
RLM_ARRAY_TYPE(EMPAudience);
