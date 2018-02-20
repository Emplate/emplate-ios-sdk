//
//  EMPAction.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 18/08/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;
@import Realm;
#import "EMPApiModel.h"
NS_ASSUME_NONNULL_BEGIN

/**
 This is the EMPAction model.
 */
@interface EMPAction : EMPApiModel

/**
 A unique id
 */
@property (nullable) NSNumber<RLMInt> *actionId;
/**
 The type of the action
 */
@property NSInteger actionType;
/**
 The name of the action
 */
@property NSString *name;
/**
 The value of the action
 */
@property NSInteger value;
/**
 Date of creation in the Emplate API
 */
@property NSDate *createdAt;
/**
 Date of last update in the Emplate API
 */
@property NSDate *updatedAt;

@end
NS_ASSUME_NONNULL_END
RLM_ARRAY_TYPE(EMPAction);
