# EmplateSDK

This is the public Emplate iOS SDK. Use this SDK to interact with the Emplate Platform, and integrate Emplate into you new or existing apps for iOS.

## Install
You can install the Emplate SDK into your Xcode project using CocoaPods. If you're not familiar with CocoaPods, you should take a look at their "[Getting started with CocoaPods](https://guides.cocoapods.org/using/getting-started.html)". It's awesome!

### Install the pod
Simply install the Emplate SDK by adding this line to your Podfile:

`pod 'EmplateSDK'`

..and then install the pod by:

`pod install`

Remember to open the Xcode workspace and not the project file

### Including the SDK in your app
By adding the following line to your ViewController, you'll get access to the whole SDK

`#import 'EmplateSDK.h'`


#### Things to change in your Info.plist
##### Communicating with our API
Since our API at the Hackathon don't have a SSL certificate, you need to specify that your app is allowed to use this potentially unsecure server to transfer data. To do this, you need to add the following lines:

![alt text](https://dl.dropboxusercontent.com/u/2618630/EmplateSDK/NSAppTransportSecurity.png "NSAppTransportSecurity")

##### Using beacons (the user's location)
In order to use beacons in your app, you need to add a text about why you need ther user's location. Add a new row to your Info.plist file in the Xcode project, add the key and a string for your description:

![alt text](https://dl.dropboxusercontent.com/u/2618630/EmplateSDK/UserLocation.png "UserLocation")

Note the you have to use the AlwaysUsage, because we need to use the location when the user puts the app in the background, since we're sending notifications when the user enters a beacons region.

## Who do I talk to?
Feel free to contact Søren Gregersen from Emplate ApS if you have any questions about this SDK. Catch me on soren@emplate.it or +45 5056 1337.
