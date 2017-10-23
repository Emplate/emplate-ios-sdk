# Change Log
## Version 1.4.0 (2017-10-23)
* Added cost and title to the EMPRedemption model
* Added redemption warning to the EMPOrganization and the EMPPrize

## Version 1.3.2 (2017-10-17)
* Added nullability to EMPLoginManager, EMPSubscriptionManager and EMPPushManager

## Version 1.3.1 (2017-10-11)
* Updated Realm dependency to 2.10.2

## Version 1.3.0 (2017-10-10)
* Added save functionality for EMPPosts in the EMPInboxManager
* EMPPostFieldCoupon is now returning nil on empty strings on `price`, `discount` and `text`
* App icon badge is now updated on the main thread
* Updated Realm to 2.10.2

## Version 1.2.1 (2017-09-16)
* Fixed bug regarding the checkinsPerWeek on EMPOrganization

## Version 1.2.0 (2017-09-13)
* Added EMPPostField model
* All RLMArrays on models is now nonnull

## Version 1.1.1 (2017-09-07)
* Added checkinsPerWeek to the EMPOrganization model

## Version 1.1.0 (2017-07-25)
* Added the new EMPPushManager to handle sign up for push messages in the Emplate API

## Version 1.0.1 (2017-07-03)
* Changes to the podspec file

## Version 1.0.0 (2017-07-03)
The brand new version of the Emplate SDK is now released. This release includes some of the following
* The SDK is now using Realm for storing models.
* All new ApiClient for communicating with the Emplate API.
* Support for geofence monitoring.
* New API reference generated with Jazzy.
* Lots of tweaks and additions.

## Version 0.9.1 (2016-05-27)
* Implemented all models, services and managers.
* We still need some few changes before the version bumps to 1.0.0

## Version 0.1.0 (2015-10-23)
* First prerelease made for the Future of Advertising hackathon in 2015
