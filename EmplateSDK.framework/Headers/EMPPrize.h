//
//  EMPPrize.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 18/08/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;
@import Realm;
#import "EMPApiModel.h"
#import "EMPDefines.h"
#import "EMPMedia.h"

NS_ASSUME_NONNULL_BEGIN

/**
 This is the EMPPrize model.
 */
@interface EMPPrize : EMPApiModel

/**
 A unique id
 */
@property (nullable) NSNumber<RLMInt> *prizeId;
/**
 The name of the prize
 */
@property NSString *title;
/**
 A descriptive text about the prize
 */
@property (nullable) NSString *text;
/**
 The cost of the prize
 */
@property NSInteger cost;
/**
 A boolean indicating whether the prize is active or not
 */
@property BOOL active;
/**
 An image for the prize
 */
@property (nullable) EMPMedia *image;
/**
 Warning when redeeming the prize
 */
@property (nullable) NSString *warning;
/**
 Is the user able to redeem the prize at the time the prize is loaded from the API?
 */
@property BOOL userCanRedeem;
/**
 The error message to show when the prize can't be redeemed
 */
@property (nullable) NSString *errorMessage;
/**
 The info to show for the prize if it's limited
 */
@property (nullable) NSString *infoMessage;
/**
 A JSON encoded array of the applied prize limits
 */
@property (nullable) NSString *limits;
/**
 How many exclusive redemptions does the guest has left?
 */
@property NSInteger exclusiveLeft;
/**
 If the guest has no exclusive redemptions left, this date shows when the guest can redeem again
 */
@property (nullable) NSDate *exclusiveNextRedemption;
/**
 Date of creation in the Emplate API
 */
@property (nullable) NSDate *createdAt;
/**
 Date of last update in the Emplate API
 */
@property (nullable) NSDate *updatedAt;
/**
 Is the prize limited as an exclusive prize?
 */
@property (readonly) BOOL isExclusive;

@end
NS_ASSUME_NONNULL_END
RLM_ARRAY_TYPE(EMPPrize);
