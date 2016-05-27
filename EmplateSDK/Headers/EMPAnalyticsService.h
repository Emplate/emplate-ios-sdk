//
//  EMPAnalyticsService.h
//  EmplateSDK
//
//  Created by Victor Kristensen on 22/01/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;

@class EMPPost;
@class EMPAudience;

/**
 *    This is the EMPAnalyticsService class. This class is used to track data about the user of the app.
 * 
 *    When the service is initialized the first time, the user (EMPGuest) will automatically get a new guestId from the Emplate API. This is only done one time, and the user will keep the same guestId. Every analytics entry in the Emplate API is related to the EMPGuest.
 *
 *    To track which EMPPost objects the user is opening, you will have to use the startPostViewOfPost: and finishPostViewOfPost:. The service will automatically add the guestId, date/time to the EMPPostView, and send it to the Emplate API. *If you're using different EMPAudiences for the EMPPost objects, please use the startPostViewOfPost:audience: and finishPostViewOfPost:audience: to relate the PostViews to the audiences as well.*
 *
 *    You will only need to handle the PostViews. BeaconViews are automatically created in the EMPBeaconManager when the phone is near beacons.
 *
 *    If the phone is offline when creating PostViews or BeaconViews, they will be cached and resent when the internet connection is reestablished.
 *
 *    *Use the sharedService to perform the methods in this service.*
 */
@interface EMPAnalyticsService : NSObject

/**
 *    @brief The unique id of the guest
 *    @discussion The guest is the user of the app. The guestId is automatically obtained on init of the EMPAnalyticsManager
 *    @see EMPGuest
 */
@property (readonly) NSNumber *guestId;

#pragma mark - PostViews

/**
 *    @brief Start a new PostView (with audienceId)
 *    @see startPostViewOfPost:
 *    @see EMPPost
 *
 *    @param post     The EMPPost to start view of
 *    @param audience The EMPAudience the post is viewed by
 */
- (void)startPostViewOfPost:(EMPPost *)post audience:(EMPAudience *)audience;
/**
 *    @brief Finish an existing (with audience)
 *    @see startPostViewOfPost:
 *    @see EMPPost
 *
 *    @param post     The EMPPost to finish view of
 *    @param audience The EMPAudience the post is viewed by
 */
- (void)finishPostViewOfPost:(EMPPost *)post audience:(EMPAudience *)audience;
/**
 *    @brief Start a new PostView
 *
 *    @param post     The EMPPost to start view of
 */
- (void)startPostViewOfPost:(EMPPost *)post;
/**
 *    @brief Finish an existing PostView
 *    @see EMPPost
 *
 *    @param post     The EMPPost to finish view of
 */
- (void)finishPostViewOfPost:(EMPPost *)post;

#pragma mark - Singleton

/**
 *    @brief The shared instance of the AnalyticsService
 *    @discussion This should be used for all analytics operations
 *
 *    @return EMPAnalyticsService
 */
+ (EMPAnalyticsService *)sharedService;

@end

#define EMPAnalyticsServiceDidSetGuestId @"EMPLogServiceDidSetGuestId"