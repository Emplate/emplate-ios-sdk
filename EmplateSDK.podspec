Pod::Spec.new do |s|
  s.name                  = "EmplateSDK"
  s.version               = "0.1"
  s.summary               = "EmplateSDK"
  s.homepage              = "http://emplate.it"
  s.author                = { "Emplate ApS" => "http://emplate.it" }
  s.platform              = :ios, '8.0'
  s.source                = { :git => "https://github.com/Emplate/emplate-ios-sdk.git", :tag => "0.1.0" }
  s.source_files          = 'EmplateSDK/Headers/*.h'
  s.preserve_paths        = 'EmplateSDK/libEmplateSDK-0.1.a'
  s.vendored_libraries    = 'EmplateSDK/libEmplateSDK-0.1.a'
  s.ios.deployment_target = '8.0'
  s.license               = 'License'
  s.dependency 'RestKit'
end