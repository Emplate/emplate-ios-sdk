//
//  EMPPostFieldVideo.h
//  EmplateSDK
//
//  Created by Victor Kristensen on 03/08/2017.
//  Copyright © 2017 Emplate ApS. All rights reserved.
//

#import <EmplateSDK/EmplateSDK.h>

NS_ASSUME_NONNULL_BEGIN
@interface EMPPostFieldVideo : NSObject

#pragma mark - Properties
@property (readonly, nullable) NSURL *youtubeURL;

#pragma mark - Methods
- (instancetype)initWithPostField:(EMPPostField *)postField;

@end
NS_ASSUME_NONNULL_END
