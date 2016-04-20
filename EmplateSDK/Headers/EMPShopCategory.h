//
//  EMPShopCategory.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 21/03/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;

@interface EMPShopCategory : NSObject

/**
 *    @brief A unique id
 */
@property (nonatomic, strong) NSNumber *shopCategoryId;
/**
 *    @brief The Shop Category name
 */
@property (nonatomic, strong) NSString *name;
/**
 *    @brief An array of the Shop Category's shops
 *    @see EMPShop
 */
@property (nonatomic, strong) NSArray *shops;

@end
