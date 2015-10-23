# EmplateSDK

This is the public Emplate iOS SDK. Use this SDK to interact with the Emplate Platform, and integrate Emplate into you new or existing apps for iOS.

## This is a pre release
Please be aware that this is an early pre-release of the iOS SDK. We would like to get as much feedback on it as we can, so we're more qualified to improve it in a way that make sense for most developer's need.

## How do I get going?
You can install the Emplate SDK into your Xcode project using CocoaPods. If you're not familiar with CocoaPods, you should take a look at their "[Getting started with CocoaPods](https://guides.cocoapods.org/using/getting-started.html)". It's awesome!

### Install the pod
Simply install the Emplate SDK by adding this line to your Podfile:

`pod 'EmplateSDK'`

..and then install the pod by:

`pod install`

Remember to open the Xcode workspace and not the project file

### Including the SDK in your app
By adding the following line to your ViewController.h, you'll get access to the whole SDK

`#import 'EmplateSDK.h'`


#### Things to change in your Info.plist
##### Communicating with our API
Since our API at the Hackathon don't have a SSL certificate, you need to specify that your app is allowed to use this potentially unsecure server to transfer data. To do this, you need to add the following lines:

![alt text](https://dl.dropboxusercontent.com/u/2618630/EmplateSDK/NSAppTransportSecurity.png "NSAppTransportSecurity")

##### Using beacons (the user's location)
In order to use beacons in your app, you need to add a text about why you need ther user's location. Add a new row to your Info.plist file in the Xcode project, add the key and a string for your description:

![alt text](https://dl.dropboxusercontent.com/u/2618630/EmplateSDK/UserLocation.png "UserLocation")

_Note the you have to use the AlwaysUsage, because we need to use the location when the user puts the app in the background, since we're sending notifications when the user enters a beacons region._

## So how does this work?
To show you how to get going with the SDK in a fast way, we will show you some simple examlpe of how to load data from the API, and how to start the scanning of beacons.

### Get data from our API
Right now you can get details about your organization (EMOrganization), all your beacons (EMBeacon) and the beacon's posts (EMPost).

The class which is handling all the communication with the API is the _EMApiService_. To start using it, you need to create a new object from the class:

``` objective-c
EMApiService *apiService = [[EMApiService alloc] init];
```

#### Load all beacons from your organization
Use the method `fetchAllBeaconsFromOrganization:organizationId`, and put in your organizationId from the Emplate Control Panel. The method has completion and failure blocks which gets fired when the request is completed or failed.

``` objective-c
[apiService fetchBeaconsFromOrganization:39 completionBlock:^(NSArray *beacons) {
    NSLog(@"This is all your beacons: %@", beacons);
} failureBlock:^(NSError *error) {
    NSLog(@"Error: %@", error);
}];
```

### Scanning for beacons
The service which handle all the beacons scanning stuff is _EMBeaconManager_. To use the beacon service you need to add `<EMBeaconManagerDelegate>` in the end of this line:

``` objective-c
@interface ViewController : UIViewController
```
So it looks like this:
``` objective-c
@interface ViewController : UIViewController <EMBeaconManagerDelegate>
```

In your implementation of the ViewController you need to implement a delegate method for the BeaconManager. The method is _closestBeaconChangedTo_, and it's called every time the BeaconManager detects that the closest beacon has changed to a new one. Implement the method like this:

``` objective-c
- (void)beaconManager:(EMBeaconManager *)beaconManager closestBeaconChangedTo:(EMBeacon *)beacon
{
    if (beacon) NSLog(@"The closest beacon is: %@", beacon.name);
    else NSLog(@"No beacon found");
}
```

If a beacon is found you will get a _EMBeacon_ object which have different properties (eg. beaconId and name). If no beacon is found you will get a _nil_.

## Who do I talk to?
Feel free to contact Søren Gregersen from Emplate ApS if you have any questions about this SDK. Catch me on soren@emplate.it or +45 5056 1337.
