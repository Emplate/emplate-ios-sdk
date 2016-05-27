//
//  EMPPostView.h
//  EmplateSDK
//
//  Created by Victor Kristensen on 22/01/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;
@class EMPPost;
@class EMPAudience;

/**
 *    This is the EMPPostView Model. This model is used to track analytics when users are viewing EMPPost objects.
 */
@interface EMPPostView : NSObject <NSCoding>

/**
 *    @brief The unique id of the guest viewing the beacon
 *    @see EMPGuest
 */
@property (nonatomic, strong) NSNumber *guestId;
/**
 *    @brief The unique id of the viewed post
 *    @see EMPPost
 */
@property (nonatomic, strong) NSNumber *postId;
/**
 *    @brief The unique id of the viewed post's audience
 *    @see EMPAudience
 */
@property (nonatomic, strong) NSNumber *audienceId;
/**
 *    @brief The date/time when the view of the post started
 */
@property (nonatomic, strong) NSDate *timeIn;
/**
 *    @brief The date/time when the view of the post ended
 */
@property (nonatomic, strong) NSDate *timeOut;

@end
