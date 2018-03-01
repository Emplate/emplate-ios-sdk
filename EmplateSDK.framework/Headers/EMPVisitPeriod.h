//
//  EMPVisitPeriod.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 22/02/2018.
//  Copyright © 2018 Emplate ApS. All rights reserved.
//

@import Foundation;
@import Realm;
#import "EMPApiModel.h"
@class EMPShop;
NS_ASSUME_NONNULL_BEGIN

/**
 This is the EMPVisitPeriod Model. Visit periods relates to shops
*/
@interface EMPVisitPeriod : EMPApiModel
/**
 A unique id
 */
@property (nullable) NSNumber<RLMInt> *visitPeriodId;
/**
 The start date of the visit period
 */
@property NSDate *start;
/**
 The end date for the visit period
 */
@property NSDate *stop;
/**
 Is the visit period active right now?
 */
@property (readonly) BOOL active;
/**
 The first shop the visit period is related to
 */
@property (nullable, readonly) EMPShop *shop;
/**
 The Shop object(s) the visit period is assigned to
 @discussion A Visit Period can only be assigned to one Shop in the Emplate API, but Realm will find all shops linking to this visit period. In all normal cases this collection will only contain a single Shop
 @see EMPShop
 */
@property (readonly) RLMLinkingObjects *shops;

@end

NS_ASSUME_NONNULL_END
RLM_ARRAY_TYPE(EMPVisitPeriod);
