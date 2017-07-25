//
// Created by Søren Gregersen on 15/07/2016.
// Copyright (c) 2016 Emplate ApS. All rights reserved.
//

@import Foundation;
@import Realm;

@class EMPApiModel;
@class EMPRelationshipMapping;

NS_ASSUME_NONNULL_BEGIN

@protocol EMPApiModel
/**
 Returns the string value for the ressource in the Emplate API in plural form

 @return String value for the API ressource in plural form
 */
+ (NSString *)apiResourcePlural;
/**
 Returns the string value for the ressource in the Emplate API in singular form

 @return String value for the API ressource in singular form
 */
+ (NSString *)apiResourceSingular;
/**
 Returns a dictionary with the details about the model mapping

 @return Dictionary with the model mapping
 */
+ (NSDictionary<NSString *, NSString *> *)mapping;

+ (nullable NSArray<EMPRelationshipMapping *> *)mappingRelationships;

+ (nullable NSArray<NSString *> *)protectedProperties;

+ (instancetype)newObjectWithJSONDictionary:(NSDictionary *)JSONDictionary;

+ (NSArray <id <EMPApiModel>> *)newObjectsWithJSONArray:(NSArray *)array;

- (NSDictionary *)toDictionary;

+ (NSArray<NSDictionary *> *)arrayOfDictionariesFromObjects:(NSArray <EMPApiModel *> *)objects;

+ (NSString *)primaryKey;

// To perform Realm queries in ApiClient
+ (nullable instancetype)objectInRealm:(nonnull RLMRealm *)realm forPrimaryKey:(nullable id)primaryKey;
+ (nonnull RLMResults *)objectsInRealm:(nonnull RLMRealm *)realm withPredicate:(nullable NSPredicate *)predicate;
+ (RLMResults *)allObjectsInRealm:(RLMRealm *)realm;

@end
NS_ASSUME_NONNULL_END

@interface EMPApiModel : RLMObject <EMPApiModel>

@end
