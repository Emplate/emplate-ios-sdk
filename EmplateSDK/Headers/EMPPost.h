//
//  EMPPost.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 18/10/2015.
//  Copyright © 2015 Emplate ApS. All rights reserved.
//

@import Foundation;
#import "EMPDefines.h"

@interface EMPPost : NSObject

/**
 *    @brief A unique id
 */
@property (nonatomic, strong) NSNumber *postId;
/**
 *    @brief The name of the post
 */
@property (nonatomic, strong) NSString *name;
/**
 *    @brief An HTML string with the post content
 */
@property (nonatomic, strong) NSString *content;
/**
 *    @brief A URL for the organization image
 *    @see getThumbnailWithCompletion:withFailureBlock:
 */
@property (nonatomic, strong) NSURL *thumbnailURL;
/**
 *    @brief A boolean indicating wheter the post view are allowed to rotate
 */
@property (nonatomic, assign) BOOL rotate;
/**
 *    @brief An array of periods where the post should be active
 *    @see EMPPostPeriod
 */
@property (nonatomic, strong) NSArray *periods;
/**
 *    @brief A boolean indicating that the post is active
 *    @discussion A post is active if it has one or more active EMPPostPeriods or no periods at all
 *    @see EMPPostPeriod
 */
@property (readonly) BOOL active;
/**
 *    @brief A method for getting the post thumbnail in a completion block
 *
 *    @param completionBlock a completion block called when loading is finish
 *    @param failureBlock    a failure block called if something went wrong
 */
- (void)getThumbnailWithCompletion:(EMPImageBlock)completionBlock withFailureBlock:(EMPErrorBlock)failureBlock;

@end
