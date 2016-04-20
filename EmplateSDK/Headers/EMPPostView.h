//
//  EMPPostView.h
//  EmplateSDK
//
//  Created by Victor Kristensen on 22/01/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;

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

/**
 *    @brief Init a new post view with postId and audienceId
 *
 *    @param postId     The unique id of the viewed post
 *    @param audienceId The unique id of the viewed post's audience
 *
 *    @return A new EMPPostView with postId and audienceId set
 */
+ (EMPPostView *)postViewForPostId:(NSNumber *)postId audienceId:(NSNumber *)audienceId;

@end
