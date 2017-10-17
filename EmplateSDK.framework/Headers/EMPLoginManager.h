//
//  EMPLoginManager.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 18/08/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;
#import "EMPGuest.h"
#import "EMPDefines.h"

NS_ASSUME_NONNULL_BEGIN
/**
 The `EMPLoginManager` is used to sign up and in to the Emplate API.
 */
@interface EMPLoginManager : NSObject

+ (EMPGuest *)currentGuest;

+ (void)ensureGuestWithCompletion:(EMPErrorBlock)completion;

+ (void)refreshCurrentGuestWithCompletion:(EMPErrorBlock)completion;

+ (void)signInWithFacebookUserId:(NSString *)userId accessToken:(NSString *)accessToken completion:(EMPErrorBlock)completion;

+ (void)signUpWithEmail:(NSString *)email firstName:(NSString *)firstName lastName:(nullable NSString *)lastName password:(NSString *)password age:(nullable NSNumber *)age completion:(EMPErrorBlock)completion;

+ (void)signInWithEmail:(NSString *)email password:(NSString *)password completion:(EMPErrorBlock)completion;

+ (void)refreshJWTTokenWithCompletion:(EMPErrorBlock)completion;

+ (void)signOutWithCompletion:(EMPErrorBlock)completion;

+ (BOOL)isSignedIn;

+ (BOOL)isSignedInWithFacebook;

+ (BOOL)isSignedInWithEmailPassword;

@end

NS_ASSUME_NONNULL_END

#define EMPAuthFBUserId @"EMPAuthFBUserId"
#define EMPAuthFBAccessToken @"EMPAuthFBAccessToken"
#define EMPAuthJWTEmail @"EMPAuthJWTEmail"
#define EMPAuthJWTPassword @"EMPAuthJWTPassword"
#define EMPAuthJWTToken @"EMPAuthJWTToken"
