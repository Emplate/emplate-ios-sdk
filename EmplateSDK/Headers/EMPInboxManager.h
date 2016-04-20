//
//  EMPInboxManager.h
//  EmplateSDK
//
//  Created by Victor Kristensen on 03/02/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;
#import "EMPPost.h"

@interface EMPInboxManager : NSObject

@property (strong, readwrite) NSMutableArray<EMPPost *> *cachedPosts;

#pragma mark - Getting
/**
 *    @brief An array of all saved active posts
 */
@property (readonly) NSArray<EMPPost *> *savedActivePosts;
/**
 *    @brief The number of active posts
 */
@property (readonly) NSNumber *numberOfActivePosts;
/**
 *    @brief The number of unread posts
 */
@property (readonly) NSNumber *numberOfUnreadPosts;

/**
 *    @brief Get an EMPPost from a postId
 *    @see EMPPost
 *
 *    @param postId The unique id of the EMPPost
 *
 *    @return The EMPPost
 */
- (EMPPost *)postWithId:(NSNumber *)postId;
/**
 *    @brief Is the post saved?
 *
 *    @param post The EMPPost
 *
 *    @return BOOL indicating if the post is saved
 */
- (BOOL)isPostSaved:(EMPPost *)post;
/**
 *    @brief Is the post read?
 *
 *    @param post The EMPPost
 *
 *    @return BOOL indicating if the post is read
 */
- (BOOL)isPostRead:(EMPPost *)post;

#pragma mark - Setting

/**
 *    @brief Remove all posts from the inbox
 */
- (void)removeAllPosts;
/**
 *    @brief Remove all inactive posts
 */
- (void)removeAllInactivePosts;
/**
 *    @brief Add a post to the inbox
 *
 *    @param post The EMPPost to add
 */
- (void)addPost:(EMPPost *)post;
/**
 *    @brief Remove a post from the inbox
 *    @see EMPPost
 *
 *    @param post The EMPPost to remove
 */
- (void)removePost:(EMPPost *)post;
/**
 *    @brief Mark a post as read
 *    @see EMPPost
 *
 *    @param post The EMPPost to mark as read
 */
- (void)markPostAsRead:(EMPPost *)post;
/**
 *    @brief Mark a post as unread
 *    @see EMPPost
 *
 *    @param post The EMPPost to mark as unread
 */
- (void)markPostAsUnread:(EMPPost *)post;

#pragma mark - Singleton

/**
 *    @brief The shared instance of the InboxManager
 *    @discussion This should be used for all inbox operations
 *
 *    @return EMPInboxManager
 */
+ (EMPInboxManager *)sharedManager;

@end

#define EMPInboxManagerDidUpdateInbox @"EMPInboxManagerDidUpdateInbox"