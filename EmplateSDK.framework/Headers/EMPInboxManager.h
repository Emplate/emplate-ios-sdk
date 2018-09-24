//
//  EMPInboxManager.h
//  EmplateSDK
//
//  Created by Victor Kristensen on 03/02/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;
#import "EMPPost.h"

/**
 This is the EMPInboxManager which is used to built an inbox of EMPPost objects in the app. EMPPost objects in the EMPInboxManager can be marked as read/unread. As default all posts are marked as unread when added to the inbox.

 If you've set up your Info.plist the app will also update the AppIcon badge on the homescreen corresponding to the current number of unread active EMPPost objects in the inbox.

 *Use the sharedManager to perform the methods in this manager.*
 */
@interface EMPInboxManager : NSObject

#pragma mark - Getting
/**
 An array of all saved posts
 */
@property (readonly) RLMResults<EMPPost *> *allPosts;
/**
 An array of all active posts
 */
@property (readonly) RLMResults<EMPPost *> *activePosts;
/**
 An array of all saved posts
 */
@property (readonly) RLMResults<EMPPost *> *savedPosts;
/**
 An array of all active saved posts
 */
@property (readonly) RLMResults<EMPPost *> *activeSavedPosts;
/**
 The number of unread posts
 */
@property (readonly) NSInteger numberOfUnreadPosts;
/**
 Is the post added to the Inbox?

 @param post The EMPPost

 @return BOOL indicating if the post is added to the Inbox
 */
- (BOOL)isPostAdded:(EMPPost *)post;
/**
 Is the post saved in the Inbox?
 
 @param post The EMPPost
 
 @return BOOL indicating if the post is saved in the Inbox
 */
- (BOOL)isPostSaved:(EMPPost *)post;

#pragma mark - Setting

/**
 Remove all posts from the inbox
 */
- (void)removeAllPosts;
/**
 Remove all inactive posts
 */
- (void)removeAllInactivePosts;
/**
 Add a post to the inbox

 @param post The EMPPost to add
 */
- (void)addPost:(EMPPost *)post;
/**
 Remove a post from the inbox
 @see EMPPost

 @param post The EMPPost to remove
 */
- (void)removePost:(EMPPost *)post;
/**
 Marks a post as either read or unread depending on the read parameter
 @see EMPPost

 @param post The EMPPost to mark its read status as the same as the read parameter
 */
- (void)markPost:(EMPPost *)post asRead:(BOOL)read;
/**
 Marks a post as either saved or unsaved depending on the saved parameter
 @see EMPPost
 
 @param post The EMPPost to mark its saved status as the same as the saved parameter
 */
- (void)markPost:(EMPPost *)post asSaved:(BOOL)Saved;

#pragma mark - Singleton

/**
 The shared instance of the InboxManager

 _This should be used for all inbox operations._

 @return EMPInboxManager
 */
+ (EMPInboxManager *)sharedManager;

@end

#define EMPInboxManagerDidUpdateInbox @"EMPInboxManagerDidUpdateInbox"
