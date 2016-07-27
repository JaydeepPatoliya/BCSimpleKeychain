

Pod::Spec.new do |s|
  s.name         = 'BCSimpleKeychain'
  s.version      = '0.0.1'
  s.license      = 'MIT'
  
  s.summary      = 'Dead simple keychain wrapper for iOS.'
  s.homepage     = 'https://github.com/JaydeepOpus/BCSimpleKeychain.git'
  s.author             = { 'Jaydeep' => 'jaydeep.patoliya@opusconsulting.com' }
  s.source       = { :git => 'https://github.com/JaydeepOpus/BCSimpleKeychain.git', :tag => '#{s.version}' }
  s.platform = :ios
  s.requires_arc = true
  s.source_files = 'BCSimpleKeychain/**/*.{h,m}'
end
