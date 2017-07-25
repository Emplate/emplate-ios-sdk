//
//  EMPPushManager.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 22/06/2017.
//  Copyright © 2017 Emplate ApS. All rights reserved.
//

@import Foundation;
#import "EMPDefines.h"

@interface EMPPushManager : NSObject

+ (void)createEndpointWithDeviceToken:(nonnull NSData *)deviceToken completion:(nonnull EMPErrorBlock)completion;

+ (void)updateGuestIdForEndpointWithCompletion:(nonnull EMPErrorBlock)completion;

@end
