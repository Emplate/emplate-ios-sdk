Pod::Spec.new do |s|
  s.name                  = "EmplateSDK"
  s.version               = "0.9.1"
  s.summary               = "The Emplate iOS SDK."
  s.homepage              = "http://emplate.it"
  s.author                = { "Emplate ApS" => "http://emplate.it" }
  s.platform              = :ios, '8.0'
  s.source                = { :git => "https://github.com/Emplate/emplate-ios-sdk.git", :tag => s.version.to_s }
  s.source_files          = 'EmplateSDK/Headers/*.h'
  s.preserve_paths        = 'EmplateSDK/libEmplateSDK.a'
  s.vendored_libraries    = 'EmplateSDK/libEmplateSDK.a'
  s.ios.deployment_target = '8.0'
  s.license               = 'Other'
  s.requires_arc          = true
  s.frameworks            = 'UIKit', 'Foundation', 'SystemConfiguration', 'MobileCoreServices', 'CoreBluetooth', 'CoreLocation'
  s.dependency 'RestKit', '~>0.26'
  s.dependency 'Reachability', '~>3.2'
end