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
 The prize the redemption was created for
 @see EMPPrize
 */
@property (nullable) EMPPrize *prize;
/**
 Date of creation in the Emplate API
 */
@property (nullable) NSDate *createdAt;

@end
NS_ASSUME_NONNULL_END
RLM_ARRAY_TYPE(EMPRedemption);
