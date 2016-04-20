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

#define EMPImageSizeThumbnail @"thumbnail"
#define EMPImageSizeMobile @"mobile"
#define EMPImageSizeFull @"full"

typedef void (^EMPArrayBlock)(NSArray *array);
typedef void (^EMPBasicBlock)();
typedef void (^EMPBoolBlock)(BOOL isTrue);
typedef void (^EMPDictionaryBlock)(NSDictionary *dictionary);
typedef void (^EMPErrorBlock)(NSError *error);
typedef void (^EMPNumberBlock)(NSNumber *number);
typedef void (^EMPOrganizationBlock)(EMPOrganization *organization);
typedef void (^EMPPostBlock)(EMPPost *post);
typedef void (^EMPGuestBlock)(EMPGuest *guest);
typedef void (^EMPStringBlock)(NSString *string);
typedef void (^EMPImageBlock)(UIImage *image);

typedef NS_OPTIONS(NSUInteger, TypeOfView) {
    TypeOfViewBeaconView        = 1,
    TypeOfViewPostView          = 2
};