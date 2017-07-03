//
//  EMPShopCategory.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 21/03/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;
@import Realm;
#import "EMPShop.h"
#import "EMPApiModel.h"
NS_ASSUME_NONNULL_BEGIN

/**
 This is the EMPShopCategory Model. The EMPShopCategory objects contains information about categories of shops from the Emplate API.
 */
@interface EMPShopCategory : EMPApiModel

/**
 A unique id
 */
@property (nullable) NSNumber<RLMInt> *shopCategoryId;
/**
 The Shop Category name
 */
@property NSString *name;
/**
 An array of the Shop Category's shops
 @see EMPShop
 */
@property (nullable) RLMArray<EMPShop *><EMPShop> *shops;
/**
 Date of creation in the Emplate API
 */
@property (nullable) NSDate *createdAt;
/**
 Date of last update in the Emplate API
 */
@property (nullable) NSDate *updatedAt;

@end
NS_ASSUME_NONNULL_END
RLM_ARRAY_TYPE(EMPShopCategory);
