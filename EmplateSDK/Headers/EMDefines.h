//
//  EMDefines.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 18/10/2015.
//  Copyright © 2015 Emplate ApS. All rights reserved.
//

@class EMOrganization;
@class EMPost;

typedef void (^EMArrayBlock)(NSArray *array);
typedef void (^EMBasicBlock)();
typedef void (^EMBoolBlock)(BOOL isTrue);
typedef void (^EMDictionaryBlock)(NSDictionary *dictionary);
typedef void (^EMErrorBlock)(NSError *error);
typedef void (^EMNumberBlock)(NSNumber *number);
typedef void (^EMOrganizationBlock)(EMOrganization *organization);
typedef void (^EMPostBlock)(EMPost *post);
typedef void (^EMStringBlock)(NSString *string);