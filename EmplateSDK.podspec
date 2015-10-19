Pod::Spec.new do |s|
  s.name                  = "EmplateSDK"
  s.version               = "0.1"
  s.summary               = "EmplateSDK"
  s.homepage              = "http://emplate.it"
  s.author                = { "Emplate ApS" => "http://emplate.it" }
  s.platform              = :ios, '8.0'
  s.source_files          = 'EmplateSDK/Headers/*.h'
  s.preserve_paths        = 'EmplateSDK/libEmplateSDK-debug-0.1.a'
  s.vendored_libraries    = 'EmplateSDK/libEmplateSDK-debug-0.1.a'
  s.ios.deployment_target = '8.0'
  s.license               = 'Emplate License'
  s.dependency 'RestKit'
end