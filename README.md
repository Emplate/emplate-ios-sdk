# EmplateSDK

This is the public Emplate iOS SDK. Use this SDK to interact with the Emplate Platform, and integrate Emplate into you new or existing apps for iOS.

## How do I get going?
You can install the Emplate SDK into your Xcode project using CocoaPods. If you're not familiar with CocoaPods, you should take a look at their "[Getting started with CocoaPods](https://guides.cocoapods.org/using/getting-started.html)".

### Install the pod
Simply install the Emplate SDK by adding this line to your Podfile:

`pod 'EmplateSDK'`

..and then install the pod by:

`pod install`

Remember to open the Xcode workspace and not the project file

### Including the SDK in your app
By adding the following line to your ViewController or AppDelegate, you'll get access to the whole SDK

`#import "EmplateSDK.h"`

#### Things to add to your Info.plist
##### Using beacons (the user's location)
In order to use beacons in your app, you need to add a description about why you need the user's location. Open your Info.plist as source code, and paste in the following example. You can adjust the description to match your use case better. It's also possible to localize the description, if your app is used in multiple languages.

_To monitor beacons when the app is in background, it's important to use the "AlwaysUsage" as in the following example:_

``` plist
<key>NSLocationAlwaysUsageDescription</key>
<string>The location is used to find content and notify you when you are near it</string>
```

##### Selecting Emplate API environment
You can choose between the different Emplate API enviroments. Select the environment you got assigned from Emplate. See the table below to see the keys.

| Environment        | URL              | Key        |
| ------------------ | ---------------- | ---------- |
| Development        | dev.emplate.it   | Dev        |
| Staging            | play.emplate.it  | Play       |
| Production         | app.emplate.it   | Production |

Open your Info.plist as source code, and paste the following snippet in. Choose the key for your current API environment.

``` plist
<key>EmplateSDK</key>
<dict>
	<key>ApiEnvironment</key>
	<string>Play</string>
</dict>
```

## So how does this work?
To show you how to get going with the SDK in a fast way, we will show you some simple examples of how to load data from the API, and how to start the searching for beacons.

### Get data from the Emplate API
To get data from the Emplate API you can use the EMPApiService class. The API service will depend on the selected API environment you have set in the Info.plist. Use the sharedService singleton to perform the different requests.

#### Load all beacons from your organization
Use the method `getBeaconsFromOrganization:organizationId`, and put in your organizationId from the Emplate Control Panel. The method has completion and failure blocks which gets fired when the request is completed or failed.

``` objective-c
[[EMPApiService sharedService] getBeaconsFromOrganization:@1 completionBlock:^(NSArray *beacons) {
        NSLog(@"Downloaded beacons completed!");
    } failureBlock:^(NSError *error) {
        NSLog(@"Failed to get beacons and posts");
    }];
```

The completion block will give you an array of EMPBeacon objects that you can start scanning on.

If you want to get both beacons and their posts in one call, use the _getBeaconsAndPostsFromOrganization:organizationId_ in the same way as above.

#### Load all posts for a beacon
Use the method `fetchPostsFromBeacon:beaconId`, and put in the beaconId of the beacon you want to get all posts from. Like all other fetch method in the _EMPApiService_ there will be a completion and failure block. Get all posts from a beacon in this way:
``` objective-c
[[EMPApiService sharedService] getPostsFromBeacon:@42 completionBlock:^(NSArray *posts) {
	NSLog(@"This is all posts from your beacon: %@", posts);
} failureBlock:^(NSError *error) {
	NSLog(@"Error: %@", error);
}];
```

The completion block will give you an array of EMPPost objects. The EMPPost class has different properties like the name and content. The content property is a HTML-string generated from the Emplate Control Panel. This HTML-string can easily be loaded into a webview.

### Scanning for beacons
The service which handle all the beacons scanning stuff is _EMPBeaconManager_. To use the beacon manager you need to add `<EMPBeaconManagerDelegate>` in the end of this line in your ViewController.h:

``` objective-c
@interface ViewController : UIViewController
```
So it looks like this:
``` objective-c
@interface ViewController : UIViewController <EMPBeaconManagerDelegate>
```

In your implementation of the ViewController you need to implement a delegate method for the BeaconManager. The method is _beaconManagerClosestBeaconChangedTo:_, and it's called every time the BeaconManager detects that the closest beacon has changed to a new one. Implement the method in the end of the ViewController.m like this:

``` objective-c
- (void)beaconManagerClosestBeaconChangedTo:(EMPBeacon *)beacon {
{
    if (beacon) NSLog(@"The closest beacon is: %@", beacon.name);
    else NSLog(@"No beacon found");
}
```

If a beacon is found you will get an _EMPBeacon_ object which has different properties (eg. beaconId and name). If no beacon is found you will get a _nil_.

To start searching for beacons you will first have to set the delegate to the ViewContoller itself. Add this line somewhere in you ViewController (eg. in viewDidLoad)
``` objective-c
[EMPBeaconManager sharedManager].delegate = self;
```

You will also need the user to authorize the permission for using the location. This can be done directly from the beacon manager:
```objective-c
[[EMPBeaconManager sharedManager] requestLocationAlwaysAuthorization];
```

To start the searching you need an array of EMPBeacon objects, and give it to the _startSearchingForBeacons:_ method on the BeaconManager like this:
``` objective-c
[[EMPBeaconManager sharedManager] startSearchingForBeacons:beacons];
```

Now the search of beacons has begun. Every time the closest beacon change, the delegate will get called, and you can make any thing happen. 

If the user has authorized permissions to notifications, the BeaconManager will send a notification when the app is in background, and the phone is entering a beacon region.

You can request for notifications directly from the beacon manager. It's done in the same way as the request for location authorization:
```objective-c
[[EMPBeaconManager sharedManager] requestPermissionsForNotifications];
```

## Appledocs
If you want to see the full documentation of the SDK, you can visit our [EmplateSDK Reference](http://emplate.github.io/emplate-ios-sdk/).

## I have more questions - where do I go?
Feel free to contact Søren Gregersen from Emplate ApS if you have any questions about this SDK. Catch me on soren@emplate.it or +45 5056 1337.
