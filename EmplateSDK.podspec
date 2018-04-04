Pod::Spec.new do |s|
  s.name                  = 'EmplateSDK'
  s.version               = '3.4.0'
  s.summary               = 'The Emplate iOS SDK.'
  s.homepage              = 'http://emplate.it'
  s.author                = { 'Emplate ApS' => 'http://emplate.it' }
  s.license               = 'Other'
  s.module_name           = 'EmplateSDK'
  s.platform              = :ios, '8.0'
  s.source                = { :git => 'https://github.com/Emplate/emplate-ios-sdk.git', :tag => s.version.to_s }
  s.vendored_frameworks   = 'EmplateSDK.framework'
  s.preserve_path         = 'EmplateSDK.framework'
  s.module_map            = 'EmplateSDK.framework/Modules/module.modulemap'
  s.frameworks            = 'UIKit', 'Foundation', 'SystemConfiguration', 'MobileCoreServices', 'CoreBluetooth', 'CoreLocation'
  s.dependency 'Realm', '~>3.1.0'
end