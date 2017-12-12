//
//  EMPApiClient.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 06/07/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import Foundation;
#import "EMPDefines.h"

@class RLMObject;
@class RLMArray;
@class EMPApiModel;
@class EMPPrize;
@protocol EMPApiModel;

NS_ASSUME_NONNULL_BEGIN

/**
 The `EMPApiClient` is used for getting and sending data to/from the Emplate API.
 */
@interface EMPApiClient : NSObject

@property (readonly) NSURL *baseURL;
@property (readonly) NSURLSession *urlSession;

#pragma mark - Api environment
// Api environment property (defaults to development)
@property EMPApiEnvironment environment;

#pragma mark - Get data
// All objects from class (/objectClass)
- (void)getObjects:(Class <EMPApiModel>)objectClass includes:(nullable NSString *)includes limitFields:(nullable NSDictionary<NSString *, NSString *> *)limitFields completion:(EMPObjectsBlock)completion;

// A single object from class with id (/objectClass/objectId)
- (void)getObject:(Class <EMPApiModel>)objectClass withId:(NSNumber *)objectId includes:(nullable NSString *)includes limitFields:(nullable NSDictionary<NSString *, NSString *> *)limitFields completion:(EMPObjectBlock)completion;

// All relationships from class with id (/relationClass/relationId/relationships/objectClass)
- (void)getObjects:(Class <EMPApiModel>)objectClass relatedTo:(Class <EMPApiModel>)relationClass withId:(NSNumber *)relationId includes:(nullable NSString *)includes limitFields:(nullable NSDictionary<NSString *, NSString *> *)limitFields completion:(EMPObjectsBlock)completion;

// A relationship from a class with id (/relationClass/relationId/relationships/objectClass)
- (void)getObject:(Class <EMPApiModel>)objectClass relatedTo:(Class <EMPApiModel>)relationClass withId:(NSNumber *)relationId includes:(nullable NSString *)includes limitFields:(nullable NSDictionary<NSString *, NSString *> *)limitFields completion:(EMPObjectBlock)completion;

// TODO: Put the following methods in an internal category (should only be used by the SDK itself - AnalyticsService and SubscriptionManager)

#pragma mark - Post data

- (void)postObject:(EMPApiModel *)object completion:(EMPErrorBlock)completion;

- (void)postObjects:(NSArray <EMPApiModel *> *)objects completion:(EMPErrorBlock)completion;

- (void)postAndSaveObject:(EMPApiModel *)object completion:(EMPObjectBlock)completion;

#pragma mark - Update data

- (void)syncRelations:(RLMArray *)relations forObject:(EMPApiModel *)object withRelationshipString:(nullable NSString *)relationshipString completion:(EMPErrorBlock)completion;

#pragma mark - Redemptions

- (void)redeemPrize:(NSNumber *)prizeId completion:(EMPErrorBlock)completion;

#pragma mark - Authorization

- (void)newJWTTokenWithCompletion:(EMPErrorBlock)completion;

- (void)createNewGuestWithEmail:(NSString *)email password:(NSString *)password firstName:(NSString *)firstName lastName:(nullable NSString *)lastName age:(nullable NSNumber *)age completion:(EMPErrorBlock)completion;

- (void)getCurrentGuestWithCompletion:(EMPObjectBlock)completion;

/**
 The shared instance of EMPApiClient

 _This should be used for all API operations._

 @return EMPApiClient
 */
+ (EMPApiClient *)sharedClient;

@end
NS_ASSUME_NONNULL_END

#define EMPApiClientErrorDomain @"EMPApiClientErrorDomain"
