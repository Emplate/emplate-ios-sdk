//
//  EMPDefines.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 18/10/2015.
//  Copyright © 2015 Emplate ApS. All rights reserved.
//

@class UIImage;
@class EMPOrganization;
@class EMPPost;
@class EMPGuest;

/**
 *    @brief The EMPArrayBlock - used for completion blocks with arrays
 *
 *    @param array The array with the objects
 */
typedef void (^EMPArrayBlock)(NSArray *array);
/**
 *    @brief The EMPBasicBlock - used for simple completion blocks
 */
typedef void (^EMPBasicBlock)();
/**
 *    @brief The EMPBoolBlock - used for completion blocks with a bool value
 *
 *    @param isTrue The bool value
 */
typedef void (^EMPBoolBlock)(BOOL isTrue);
/**
 *    @brief The EMPDictionaryBlock - used for completion blocks with dictionaries
 *
 *    @param dictionary The dictionary
 */
typedef void (^EMPDictionaryBlock)(NSDictionary *dictionary);
/**
 *    @brief The EMPErrorBlock - used for failure blocks
 *
 *    @param error The error object
 */
typedef void (^EMPErrorBlock)(NSError *error);
/**
 *    @brief The EMPNumberBlock - used for completion blocks with numbers
 *
 *    @param number The number object
 */
typedef void (^EMPNumberBlock)(NSNumber *number);
/**
 *    @brief The EMPOrganizationBlock - used for completion blocks with an EMPOrganization object
 *
 *    @param organization The EMPOrganization object
 */
typedef void (^EMPOrganizationBlock)(EMPOrganization *organization);
/**
 *    @brief The EMPPostBlock - used for completion blocks with an EMPPost object
 *
 *    @param post The EMPPost object
 */
typedef void (^EMPPostBlock)(EMPPost *post);
/**
 *    @brief The EMPGuest - used for completion blocks with an EMPGuest object
 *
 *    @param post The EMPGuest object
 */
typedef void (^EMPGuestBlock)(EMPGuest *guest);
/**
 *    @brief The EMPStringBlock - used for completion blocks with a string
 *
 *    @param post The string object
 */
typedef void (^EMPStringBlock)(NSString *string);
/**
 *    @brief The EMPImageBlock - used for completion blocks with an image object
 *
 *    @param post The image object
 */
typedef void (^EMPImageBlock)(UIImage *image);


typedef NS_OPTIONS(NSUInteger, TypeOfView) {
    TypeOfViewBeaconView        = 1,
    TypeOfViewPostView          = 2
};

typedef enum {
    EMPImageSizeThumbnail = 1,
    EMPImageSizeMobile,
    EMPImageSizeFull
} EMPImageSize;