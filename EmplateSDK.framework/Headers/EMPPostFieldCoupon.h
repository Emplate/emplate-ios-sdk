//
//  EMPPostFieldCoupon.h
//  EmplateSDK
//
//  Created by Victor Kristensen on 02/08/2017.
//  Copyright © 2017 Emplate ApS. All rights reserved.
//

#import <EmplateSDK/EmplateSDK.h>

NS_ASSUME_NONNULL_BEGIN
@interface EMPPostFieldCoupon : NSObject

#pragma mark - Properties
@property (readonly) NSURL *image;
@property (readonly, nullable) NSString *text;
@property (readonly, nullable) NSString *priceBefore;
@property (readonly, nullable) NSString *price;
@property (readonly, nullable) NSString *discount;
@property (readonly) BOOL redeemable;

#pragma mark - Methods
- (instancetype)initWithPostField:(EMPPostField *)postField;

@end
NS_ASSUME_NONNULL_END
