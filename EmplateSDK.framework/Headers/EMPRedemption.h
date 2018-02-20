//
//  EMPRedemption.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 18/08/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;
@import Realm;
#import "EMPApiModel.h"
#import "EMPPrize.h"

NS_ASSUME_NONNULL_BEGIN

/**
 This is the EMPRedemptions model.
 */
@interface EMPRedemption : EMPApiModel
/**
 A unique id
 */
@property (nullable) NSNumber<RLMInt> *redemptionId;
/**
 Date of creation in the Emplate API
 */
@property NSDate *createdAt;
/**
 The prize cost
 */
@property NSInteger cost;
/**
 The prize title
 */
@property NSString *title;

@end
NS_ASSUME_NONNULL_END
RLM_ARRAY_TYPE(EMPRedemption);
