

Pod::Spec.new do |s|
  s.name         = 'BCSimpleKeychain'
  s.version      = '0.0.1'
  s.license      = 'MIT'
  
  s.summary      = 'Dead simple keychain wrapper for iOS.'
  s.homepage     = 'http://EXAMPLE/BCSimpleKeychain'
  
  s.author             = { 'Jaydeep' => 'jaydeep21.patoliya@gmail.com' }
  s.source       = { :git => 'http://EXAMPLE/BCSimpleKeychain.git', :tag => '#{s.version}' }
  s.platform = :ios
  s.requires_arc = true
  s.source_files = 'BCSimpleKeychain/**/*.{h,m}'
end
