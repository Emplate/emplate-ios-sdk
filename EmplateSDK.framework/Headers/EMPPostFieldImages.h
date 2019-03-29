//
//  EMPPostFieldImages.h
//  EmplateSDK
//
//  Created by Victor Kristensen on 01/08/2017.
//  Copyright © 2017 Emplate ApS. All rights reserved.
//

#import <EmplateSDK/EmplateSDK.h>

NS_ASSUME_NONNULL_BEGIN
@interface EMPPostFieldImages : NSObject

#pragma mark - Properties
@property (readonly, nullable) NSString *text;

#pragma mark - Methods
- (instancetype)initWithPostField:(EMPPostField *)postField;

@end
NS_ASSUME_NONNULL_END
