//
//  EMPAudience.h
//  EmplateSDK
//
//  Created by Victor Kristensen on 10/02/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;

/**
 *    This is the EMPAudience Model
 */
@interface EMPAudience : NSObject

/**
 *    @brief A unique id
 */
@property (nonatomic, strong) NSNumber *audienceId;
/**
 *    @brief The name of the audience
 */
@property (nonatomic, strong) NSString *name;

@end