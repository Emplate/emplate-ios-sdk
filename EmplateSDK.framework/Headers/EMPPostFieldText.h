//
//  EMPPostFieldText.h
//  EmplateSDK
//
//  Created by Victor Kristensen on 03/08/2017.
//  Copyright © 2017 Emplate ApS. All rights reserved.
//

#import "EMPPostField.h"

NS_ASSUME_NONNULL_BEGIN
@interface EMPPostFieldText : NSObject

#pragma mark - Properties
@property (readonly, nullable) NSString *text;

#pragma mark - Methods
- (instancetype)initWithPostField:(EMPPostField *)postField;

@end
NS_ASSUME_NONNULL_END
