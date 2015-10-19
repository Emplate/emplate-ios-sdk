//
//  EMPostPeriod.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 18/10/2015.
//  Copyright © 2015 Emplate ApS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EMPostPeriod : NSObject

@property (strong) NSDate *start;
@property (strong) NSDate *stop;

@property (nonatomic, readonly) BOOL active;

@end
