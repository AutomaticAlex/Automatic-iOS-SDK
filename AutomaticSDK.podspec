Pod::Spec.new do |s|
  s.name         = "AutomaticSDK"
  s.version      = "0.0.1"
  s.summary      = "The official Automatic SDK for iOS."
  s.description  = <<-DESC
                   A handy wrapper that makes authenticating with the Automatic
                   API a breeze.
                   DESC
  s.homepage     = "https://developer.automatic.com"
  s.license      = "Apache 2.0"
  s.author       = { "Robert Böhnke" => "robb.bohnke@automatic.com" }
  s.source       = { :git => "https://github.com/automatic/public-ios-sdk.git", :tag => "0.0.1" }
  s.source_files = "AutomaticSDK", "AutomaticSDK/**/*.{h,m}"
  s.requires_arc = true
  s.platform     = :ios, "8.0"

  s.dependency "AFNetworking",    "~> 2.5"
  s.dependency "AFOAuth2Manager", "~> 2.2"
end
