//
//  EMPPostView.h
//  EmplateSDK
//
//  Created by Victor Kristensen on 22/01/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;
@import Realm;
@class EMPPost;
@class EMPAudience;
#import "EMPApiModel.h"
NS_ASSUME_NONNULL_BEGIN

/**
 This is the EMPPostView Model. This model is used to track analytics when users are viewing EMPPost objects.
 */
@interface EMPPostView : EMPApiModel

/**
 A unique id
 @see EMPGuest
 */
@property (nullable) NSNumber<RLMInt> *postViewId;
/**
 The unique id of the guest viewing the beacon
 @see EMPGuest
 */
@property NSNumber<RLMInt> *guestId;
/**
 The unique id of the viewed post
 @see EMPPost
 */
@property NSNumber<RLMInt> *postId;
/**
 The unique id of the viewed post's audience
 @see EMPAudience
 */
@property (nullable) NSNumber<RLMInt> *audienceId;
/**
 The date/time when the view of the post started
 */
@property NSDate *timeIn;
/**
 The date/time when the view of the post ended
 */
@property NSDate *timeOut;

@end
NS_ASSUME_NONNULL_END
RLM_ARRAY_TYPE(EMPPostView);
