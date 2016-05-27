//
//  EMPPost.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 18/10/2015.
//  Copyright © 2015 Emplate ApS. All rights reserved.
//

@import Foundation;
#import "EMPDefines.h"

/**
 *    This is the EMPPost model. EMPPost objects contains the details for the post created in the Emplate Control Panel. EMPPost objects can also be assigned to EMPBeacon objects.
 */
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
 *    @brief Get the URL for the thumbnail in a certain size.
 *
 *    @param imageSize One of the three sizes EMPImageSizeThumbnail | EMPImageSizeMobile | EMPImageSizeFull
 *
 *    @return The URL for the post thumbnail in the given size.
 */
- (NSURL *)thumbnailURLWithSize:(EMPImageSize)imageSize;

@end
