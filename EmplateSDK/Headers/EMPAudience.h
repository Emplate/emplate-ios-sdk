//
//  EMPAudience.h
//  EmplateSDK
//
//  Created by Victor Kristensen on 10/02/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;

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