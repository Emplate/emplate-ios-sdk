//
//  EMOrganization.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 17/10/2015.
//  Copyright © 2015 Emplate ApS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EMOrganization : NSObject
    @property (assign) NSInteger organizationId;
    @property (strong) NSString *name;
    @property (strong) NSString *chooseButtonText;
    @property (strong) NSString *text;
    @property (strong) NSURL *url;
    @property (strong) NSString *colorString;
@end
