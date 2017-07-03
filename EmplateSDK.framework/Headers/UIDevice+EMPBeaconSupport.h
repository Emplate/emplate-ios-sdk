//
//  UIDevice+EMPBeaconSupport.h
//  EmplateSDK
//
//  Created by Victor Kristensen on 03/02/2016.
//  Copyright © 2016 Emplate ApS. All rights reserved.
//

@import UIKit;

/**
 This is a helper category for the UIDevice class. Use the properties in this category to determine if the phone is ready to search for beacons.
 */
@interface UIDevice (EMPBeaconSupport)

/**
 Boolean to indicate wheter bluetooth is enabled or not
 */
@property (readonly) BOOL bluetoothEnabled;
/**
 Boolean to indicate wheter the user has authorized "location usage always"

 _Permissions to "location usage always" is needed to search for beacons in background._
 */
@property (readonly) BOOL hasAuthorizedLocationAlways;
/**
 Boolean to indicate wheter the device is supporting beacons

 _The simulator, iPhone 4 and older device does not support beacons._
 */
@property (readonly) BOOL supportsBeacons;

@end