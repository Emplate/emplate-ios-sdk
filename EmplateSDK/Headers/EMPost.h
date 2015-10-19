//
//  EMPost.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 18/10/2015.
//  Copyright © 2015 Emplate ApS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EMPost : NSObject

@property (assign) NSUInteger postId;
@property (strong) NSString *name;
@property (strong) NSString *content;
@property (strong) NSArray *periods;

@end
