//
//  EMPAnalyticsService.h
//  EmplateSDK
//
//  Created by Victor Kristensen on 22/01/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;

@interface EMPAnalyticsService : NSObject

/**
 *    @brief The unique id of the guest
 *    @discussion The guest is the user of the app. The guestId is automatically obtained on init of the EMPAnalyticsManager
 *    @see EMPGuest
 */
@property (readonly) NSNumber *guestId;
/**
 *    @brief Send all finsihed views to the API
 *    @discussion This will send all finished PostViews and BeaconViews to the Emplate API through the EMPApiService
 */
- (void)sendAllFinishedViews;

#pragma mark - PostViews

/**
 *    @brief Start a new PostView (with audienceId)
 *    @see startPostViewOfPostId:
 *    @see EMPPost
 *
 *    @param postId     The unique id of the EMPPost
 *    @param audienceId The unique id of the EMPAudience
 */
- (void)startPostViewOfPostId:(NSNumber *)postId audienceId:(NSNumber *)audienceId;
/**
 *    @brief Finish an existing (with audienceId)
 *    @see startPostViewOfPostId:
 *    @see EMPPost
 *
 *    @param postId     The unique id of the EMPPost
 *    @param audienceId The unique id of the EMPAudience
 */
- (void)finishPostViewOfPostId:(NSNumber *)postId audienceId:(NSNumber *)audienceId;
/**
 *    @brief Start a new PostView
 *
 *    @param postId     The unique id of the EMPPost
 */
- (void)startPostViewOfPostId:(NSNumber *)postId;
/**
 *    @brief Finish an existing PostView
 *    @see EMPPost
 *
 *    @param postId     The unique id of the EMPPost
 */
- (void)finishPostViewOfPostId:(NSNumber *)postId;

#pragma mark - BeaconViews

/**
 *    @brief Start a new BeaconView
 *    @see EMPBeacon
 *
 *    @param beaconId The unique id of the EMPBeacon
 */
- (void)startBeaconViewOfBeaconId:(NSNumber *)beaconId;
/**
 *    @brief Finish an existing BeaconView
 *    @see EMPBeacon
 *
 *    @param beaconId The unique id of the EMPBeacon
 */
- (void)finishBeaconViewOfBeaconId:(NSNumber *)beaconId;
/**
 *    @brief Finish all unfinished BeaconViews
 */
- (void)finishAllUnfinishedBeaconViews;

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