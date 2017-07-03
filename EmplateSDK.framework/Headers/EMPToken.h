//
//  EMPToken.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 18/08/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;

/**
 This is the EMPToken model.

 EMPToken objects are using when authenticating as a guest user in the Emplate API. A token has a content (the actually token) and an expiration date.
 */
@interface EMPToken : NSObject

/**
 The acutally token
 */
@property NSString *content;
/**
 The date the action was created in the Emplate API
 */
@property NSDate *expires;
/**
 Indicates whether the token is not expired
 */
@property (readonly) BOOL expired;
/**
 Saves the token to NSUserDefaults
 */
- (void)saveToken;
/**
 Creates a new token from JSON Data
 */
+ (EMPToken *)newTokenWithData:(NSData *)data;
/**
 Returns the saved current token
 */
+ (EMPToken *)currentToken;

@end