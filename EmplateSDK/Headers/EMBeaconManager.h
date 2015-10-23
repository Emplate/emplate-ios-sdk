//
//  EMBeaconManager.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 21/10/2015.
//  Copyright © 2015 Emplate ApS. All rights reserved.
//

@class EMBeacon;
@import CoreLocation;
@protocol EMBeaconManagerDelegate;

@interface EMBeaconManager : NSObject

@property (weak) id<EMBeaconManagerDelegate> delegate;
@property (strong, nonatomic) NSArray *monitoredBeacons;
@property (strong, nonatomic) NSUUID *rangedUUID;
@property (strong, readonly) EMBeacon *closestBeacon;

+ (EMBeaconManager *)sharedManager;
- (void)startSearchingForBeacons:(NSArray *)beacons;
- (void)stopSearchingForBeacons;
- (void)cancelAllNotifications;

@end

@protocol EMBeaconManagerDelegate <NSObject>
- (void)beaconManager:(EMBeaconManager *)beaconManager closestBeaconChangedTo:(EMBeacon *)beacon;
@optional
- (void)beaconManager:(EMBeaconManager *)beaconManager didChangeAuthorizationStatus:(CLAuthorizationStatus)status;
@end