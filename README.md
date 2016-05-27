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

### Get data from our API
Right now you can get details about your organization (EMPOrganization), all your beacons (EMPBeacon) and the beacon's posts (EMPPost).

The class which is handling all the communication with the API is the _EMPApiService_. To start using it, you need to create a new object from the class:

``` objective-c
EMApiService *apiService = [[EMApiService alloc] init];
```

#### Load all beacons from your organization
Use the method `fetchAllBeaconsFromOrganization:organizationId`, and put in your organizationId from the Emplate Control Panel. The method has completion and failure blocks which gets fired when the request is completed or failed.

``` objective-c
[apiService fetchBeaconsFromOrganization:42 completionBlock:^(NSArray *beacons) {
    NSLog(@"This is all your beacons: %@", beacons);
} failureBlock:^(NSError *error) {
    NSLog(@"Error: %@", error);
}];
```

The completion block will give you an array of EMBeacon objects that you can start scanning on.

#### Load all posts for a beacon
Use the method `fetchPostsFromBeacon:beaconId`, and put in the beaconId of the beacon you want to get all posts from. Like all other fetch method in the _EMPApiService_ there will be a completion and failure block. Get all posts from a beacon in this way:
``` objective-c
[apiService fetchPostsFromBeacon:1337 completionBlock:^(NSArray *posts) {
    NSLog(@"This is all posts from your beacon: %@", posts);
} failureBlock:^(NSError *error) {
    NSLog(@"Error: %@", error);
}];
```

The completion block will give you an array of EMPost objects. The EMPost class has different properties like the name and content. The content property is a HTML-string generated frm the Emplate Control Panel. This HTML-string can easily be loaded into a webview.

### Scanning for beacons
The service which handle all the beacons scanning stuff is _EMPBeaconManager_. To use the beacon service you need to add `<EMPBeaconManagerDelegate>` in the end of this line in your ViewController.h:

``` objective-c
@interface ViewController : UIViewController
```
So it looks like this:
``` objective-c
@interface ViewController : UIViewController <EMPBeaconManagerDelegate>
```

In your implementation of the ViewController you need to implement a delegate method for the BeaconManager. The method is _closestBeaconChangedTo_, and it's called every time the BeaconManager detects that the closest beacon has changed to a new one. Implement the method in the end of the ViewController.m like this:

``` objective-c
- (void)beaconManager:(EMPBeaconManager *)beaconManager closestBeaconChangedTo:(EMPBeacon *)beacon
{
    if (beacon) NSLog(@"The closest beacon is: %@", beacon.name);
    else NSLog(@"No beacon found");
}
```

If a beacon is found you will get an _EMPBeacon_ object which has different properties (eg. beaconId and name). If no beacon is found you will get a _nil_.

To start searching for beacons you will first have to set the delegate to the ViewContoller itself. Add this line somewhere in you ViewController (eg. in viewDidLoad)
``` objective-c
[EMBeaconManager sharedManager].delegate = self;
```

To start the searching you need an array of EMPBeacon objects, and give it to the _startSearchingForBeacons_ method on the BeaconManager like this:
``` objective-c
[[EMPBeaconManager sharedManager] startSearchingForBeacons:beacons];
```

Now the search of beacons has begun. Every time the closest beacon change, the delegate will run, and you can make any thing happen. When the app is in the background and enters the region of a beacon a local notification will be send to the user.

## Appledocs
If you want to see the full documentation of the SDK, you can visit our [EmplateSDK Reference](http://emplate.github.io/emplate-ios-sdk/){:target="_blank"}.

## I have more questions - where do I go?
Feel free to contact Søren Gregersen from Emplate ApS if you have any questions about this SDK. Catch me on soren@emplate.it or +45 5056 1337.
