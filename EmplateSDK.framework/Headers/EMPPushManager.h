//
//  EMPPushManager.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 22/06/2017.
//  Copyright © 2017 Emplate ApS. All rights reserved.
//

@import Foundation;
#import "EMPDefines.h"
NS_ASSUME_NONNULL_BEGIN

@interface EMPPushManager : NSObject

+ (void)createEndpointWithDeviceToken:(NSData *)deviceToken completion:(EMPErrorBlock)completion;

+ (void)updateGuestIdForEndpointWithCompletion:(EMPErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END
