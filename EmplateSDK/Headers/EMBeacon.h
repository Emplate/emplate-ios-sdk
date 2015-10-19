//
//  EMBeacon.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 18/10/2015.
//  Copyright © 2015 Emplate ApS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EMBeacon : NSObject

@property (assign) NSUInteger beaconId;
@property (strong) NSString *name;
@property (strong) NSString *uuidString;
@property (strong, readonly) NSUUID *uuid;
@property (assign) NSUInteger major;
@property (assign) NSUInteger minor;

@end
