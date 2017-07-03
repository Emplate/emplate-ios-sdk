//
//  EMPBeaconManager.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 21/10/2015.
//  Copyright © 2015 Emplate ApS. All rights reserved.
//

@import CoreLocation;
@import CoreBluetooth;
@class EMPBeacon;
@class EMPGeofence;
@protocol EMPBeaconManagerDelegate;

/**
 This is the EMPBeaconManager class, and is used to handle everything related to searching for beacons. Use the startSearchingForBeacons: to start the search of an array of EMPBeacon objects. Use the EMPBeaconManagerDelegate to get informed when the closest beacon is chaning to a new, or when the phone is entering or exiting an EMPBeacon objects region.

 When the search for beacons has started, you can use startMonitorBeacon: to add a beacon to the array of beacons the manager is searching for. Use the stopMonitoringBeacon: to stop the manager from searching for the beacon.

 *Use the sharedManager to perform the methods in this manager.*
 */
@interface EMPBeaconManager : NSObject

#pragma mark - Getters
/**
 The closest beacon

 _Will be nil if no beacon is nearby._
 */
@property (nullable, readonly) EMPBeacon *closestBeacon;
/**
 The current bluetooth state
 */
@property (readonly) CBManagerState bluetoothState;
/**
 The current authorization status for the location
 */
@property (readonly) CLAuthorizationStatus locationAuthorizationStatus;

#pragma mark - Delegates

- (void)addDelegate:(nonnull id <EMPBeaconManagerDelegate>)delegate;

- (void)removeDelegate:(nonnull id <EMPBeaconManagerDelegate>)delegate;

#pragma mark - Searching for beacons

/**
 Start searching for an array of EMPBeacons

 _This will both start ranging and monitoring the beacons._

 @param beacons An array of EMPBeacons
 */
- (void)startSearchingForBeacons:(nonnull NSArray<EMPBeacon *> *)beacons;
/**
 Stop searching for all beacons

 _This includes both ranging and monitoring._
 */
- (void)stopSearchingForBeacons;
/**
 Start searching for a single beacon

 _This will both start ranging and monitor the beacon._

 @param beacon The EMPBeacon to search for
 */
- (void)startSearchingForBeacon:(nonnull EMPBeacon *)beacon;
/**
 Stop searching for a single beacon

 _This will both stop ranging and monitor the beacon._

 @param beacon The EMPBeacon to stop searching for
 */
- (void)stopSearchingForBeacon:(nonnull EMPBeacon *)beacon;

- (void)startSearchingForBeaconRegion:(nonnull CLBeaconRegion *)beaconRegion;

- (void)stopSearchingForBeaconRegion:(nonnull CLBeaconRegion *)beaconRegion;

#pragma mark - Searching for Geofences

- (void)startSearchingForGeofence:(nonnull EMPGeofence *)geofence;

- (void)stopSearchingForGeofence:(nonnull EMPGeofence *)geofence;

#pragma mark - Request permissions

/**
 Request the user for permissions to use the location in background
 */
- (void)requestLocationAlwaysAuthorization;
/**
 Request the user for permissions to send local notifications
 */
- (void)requestPermissionsForNotifications;

#pragma mark - Singleton

/**
 The shared instance of the BeaconManager

 _This should be used for all beacon operations._

 @return EMPBeaconManager
 */
+ (nonnull EMPBeaconManager *)sharedManager;

@end

/**
 This is the EMPBeaconManagerDelegate

 The delegate is used when searching for beacons in the EMPBeaconManager.
 */
@protocol EMPBeaconManagerDelegate <NSObject>
@optional
/**
 Is called every time the closest beacon change to a new beacon

 _The BeaconManager is finding the closest active beacon._
 @see EMPBeacon

 @param beacon The closest EMPBeacon
 */
- (void)beaconManagerClosestBeaconChangedTo:(nullable EMPBeacon *)beacon;
/**
 Is called every time the BeaconManager is receiving information about the nearby beacons

 _The BeaconManager is sorting the beacons by distance ascending order._
 @see EMPBeacon

 @param beacons All the active nearby beacons sorted by distance
 */
- (void)beaconManagerDidRangeActiveBeacons:(nonnull NSArray <EMPBeacon *> *)beacons;
/**
 Is called every time the BeaconManager is receiving information about the nearby beacons

 _The BeaconManager is sorting the beacons by distance ascending order._
 @see EMPBeacon

 @param beacons All the nearby beacons (including inactive beacons) sorted by distance
 */
- (void)beaconManagerDidRangeBeacons:(nonnull NSArray <EMPBeacon *> *)beacons;
/**
 Is called when the device is entering a new beacon region

 _If the app is started in a beacon region, this method will not be called before the device has left the beacon region._

 @param beacon The EMPBeacon for the entered beacon region
 */
- (void)beaconManagerDidEnterRegionWithBeacon:(nullable EMPBeacon *)beacon;
/**
 Is called when the device has left a beacon region

 _This method is called 30 seconds after the device has actually left the beacon region._

 @param beacon The EMPBeacon for the exited beacon region
 */
- (void)beaconManagerDidExitRegionWithBeacon:(nullable EMPBeacon *)beacon;

- (void)beaconManagerDidRangeCLBeacons:(nonnull NSArray <CLBeacon *> *)clBeacons;

- (void)beaconManagerDidEnterRegion:(nullable CLBeaconRegion *)beaconRegion;

- (void)beaconManagerDidExitRegion:(nullable CLBeaconRegion *)beaconRegion;

- (void)beaconManagerDidEnterRegionWithGeofence:(nullable EMPGeofence *)geofence;

- (void)beaconManagerDidExitRegionWithGeofence:(nullable EMPGeofence *)geofence;

/**
 Is called every time the location authorization status is changed

 @param status The CLAuthorizationStatus from CoreLocation
 */
- (void)beaconManagerDidChangeAuthorizationStatus:(CLAuthorizationStatus)status;
/**
 Is called every time the bluetooth state is changed

 @param bluetoothState The CBManagerState with the state from CoreBluetooth
 */
- (void)beaconManagerDidChangeBluetoothState:(CBManagerState)bluetoothState;

@end

#define EMPBeaconManagerDidChangeLocationAuthorizationStatus @"EMPBeaconManagerDidChangeLocationAuthorizationStatus"
#define EMPBeaconManagerDidChangeBluetoothState @"EMPBeaconManagerDidChangeBluetoothState"
