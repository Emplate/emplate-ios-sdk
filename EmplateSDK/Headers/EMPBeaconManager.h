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
@protocol EMPBeaconManagerDelegate;

@interface EMPBeaconManager : NSObject

/**
 *    @brief The delegate for the BeaconManager
 */
@property (nonatomic, weak) id<EMPBeaconManagerDelegate> delegate;
/**
 *    @brief The closest beacon
 *    @discussion I nil if no beacon is nearby
 */
@property (readonly) EMPBeacon *closestBeacon;
/**
 *    @brief The current bluetooth state
 */
@property (readonly) CBCentralManagerState bluetoothState;

#pragma mark - Searching for beacons

/**
 *    @brief Start searching for an array of EMPBeacons
 *    @discussion This will both start ranging and monitoring the beacons
 *
 *    @param beacons An array of EMPBeacons
 */
- (void)startSearchingForBeacons:(NSArray<EMPBeacon *> *)beacons;
/**
 *    @brief Stop searching for all beacons
 *    @discussion This includes both ranging and monitoring
 */
- (void)stopSearchingForBeacons;
/**
 *    @brief Start searching for a single beacon
 *    @discussion This will both start ranging and monitor the beacon
 *
 *    @param beacon The EMPBeacon to search for
 */
- (void)startMonitorBeacon:(EMPBeacon *)beacon;
/**
 *    @brief Stop searching for a single beacon
 *    @discussion This will both stop ranging and monitor the beacon
 *
 *    @param beacon The EMPBeacon to stop searching for
 */
- (void)stopMonitoringBeacon:(EMPBeacon *)beacon;

#pragma mark - Request permissions

/**
 *    @brief Request the user for permissions to use the location in background
 */
- (void)requestLocationAlwaysAuthorization;
/**
 *    @brief Request the user for permissions to send local notifications
 */
- (void)requestPermissionsForNotifications;

#pragma mark - Singleton

/**
 *    @brief The shared instance of the BeaconManager
 *    @discussion This should be used for all beacon operations
 *
 *    @return EMPBeaconManager
 */
+ (EMPBeaconManager *)sharedManager;

@end

@protocol EMPBeaconManagerDelegate <NSObject>
@optional
/**
 *    @brief The method is called every time the closest beacon change to a new beacon
 *    @discussion The BeaconManager is finding the closest active beacon.
 *    @see EMPBeacon
 *
 *    @param beacon The closest EMPBeacon
 */
- (void)beaconManagerClosestBeaconChangedTo:(EMPBeacon *)beacon;
/**
 *    @brief Is called when the device is entering a new beacon region
 *    @discussion If the app is started in a beacon region, this method will not be called before the device has left the beacon region
 *
 *    @param beacon The EMPBeacon for the entered beacon region
 */
- (void)beaconManagerDidEnterRegionWithBeacon:(EMPBeacon *)beacon;
/**
 *    @brief Is called when the device has left a beacon region
 *    @discussion This method is called 30 seconds after the device has actually left the beacon region
 *
 *    @param beacon The EMPBeacon for the exited beacon region
 */
- (void)beaconManagerDidExitRegionWithBeacon:(EMPBeacon *)beacon;
/**
 *    @brief Is called every time the location authorization status is changed
 *
 *    @param status The CLAuthorizationStatus from CoreLocation
 */
- (void)beaconManagerDidChangeAuthorizationStatus:(CLAuthorizationStatus)status;
/**
 *    @brief Is called every time the bluetooth state is changed
 *
 *    @param bluetoothState The CBCentralManagerState with the state from CoreBluetooth
 */
- (void)beaconManagerDidChangeBluetoothState:(CBCentralManagerState)bluetoothState;

@end
