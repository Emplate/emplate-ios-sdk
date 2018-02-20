//
//  EMPToken.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 18/08/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;
NS_ASSUME_NONNULL_BEGIN
/**
 This is the EMPToken model.

 EMPToken objects are using when authenticating as a guest user in the Emplate API.
 */
@interface EMPToken : NSObject

/**
 The acutally token content
 */
@property NSString *content;
/**
 Init with a token content string
 */
- (instancetype)initWithContent:(NSString *)content;
/**
 Saves the token to NSUserDefaults
 */
- (void)saveToken;
/**
 Returns the saved current token
 */
+ (nullable EMPToken *)currentToken;

@end
NS_ASSUME_NONNULL_END
