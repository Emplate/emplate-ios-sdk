# Change Log
## 3.6.7 (2019-01-04)
* Bumped realm migration number

## 3.6.6 (2018-12-04)
* Added shopCategories to EMPOrganization 

## 3.6.5 (2018-11-26)
* Made created_at and updated_at on EMPPost nonnull

## 3.6.4 (2018-09-24)
* Bugfix in inbox manager

## 3.6.3 (2018-09-11)
* Changed enum for post field type

## 3.6.2 (2018-08-06)
* Fixed a bug in the date formatter

## 3.6.1 (2018-05-10)
* Sending app version in HTTP headers

## 3.6.0 (2018-04-24)
* Installed TrustKit 
* Updated Realm to 3.4.0

## 3.5.0 (2018-04-19)
* Added EMPMedia for all images on models
* Bumped API version to v6

## 3.4.1 (2018-04-04)
* Updated Realm dependency version in podspec file

## 3.4.0 (2018-04-04)
* Updated Realm to 3.3.2
* Bug fixes

## 3.3.0 (2018-03-28)
* Added EMPRegion instead of EMPVisitPeriod

## 3.2.0 (2018-03-16)
* Enabled SSL pinning on all network requests

## 3.1.0 (2018-03-01)
* Added EMPVisitPeriod model

## 3.0.1 (2018-02-22)
* Fixed bug in EMPPushManager

## 3.0.0 (2018-02-20)
* Bumped API version to v5
* Removed EMPLoginManager and EMPToken
* Lots of different minor changes

## 2.1.2 (2018-01-04)
* Fixed another bug in the EMPApiModel JSON parsing logic

## 2.1.1 (2018-01-03)
* Fixed a bug in the EMPApiModel JSON parsing logic

## 2.1.0 (2018-01-03)
* Added exclusiveLeft and exclusiveNextRedemption to EMPPrize

## 2.0.2 (2017-12-12)
* Added method in EMPApiClient to make redemptions for prizes

## 2.0.1 (2017-12-10)
* Removed prize relation on EMPRedemption

## 2.0.0 (2017-11-27)
* The EmplateSDK is now using the new version 4 of the Emplate API to get the latest featus for the bonus programme
* Added new fields to the EMPPrize (`canUserRedeem`, `errorMessage`, `infoMessage` and `limits`)
* Removed `prizeLimitRulesKey` from EMPPrize
* Added new field to the EMPOrganization (`exclusiveMax`)
* Bumped Realm dependency to v3.0.0

## 1.5.0 (2017-11-15)
* Added price before to the EMPPostFieldCoupon
* EMPApiEnvironment should be set directly on the EMPApiClient

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
