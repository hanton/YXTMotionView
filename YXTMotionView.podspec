Pod::Spec.new do |s|
  s.name         = "YXTMotionView"
  s.version      = "0.1"
  s.summary      = "Motion View"
  s.homepage     = "https://github.com/hanton/YXTMotionView"
  s.license      = "MIT"
  s.authors      = { "Hanton Yang" => "hanton.yang@gmail.com" }
  s.source       = { :git => "https://github.com/hanton/YXTMotionView.git"}
#  s.frameworks   = 'Foundation', 'CoreGraphics', 'UIKit', 'MobileCoreServices', 'AVFoundation', 'CoreLocation', 'MediaPlayer', 'CoreMedia', 'CoreText', 'AudioToolbox'
  s.platform     = :ios, '8.0'
  s.source_files = 'YXTMotionView/*.{h,m}'
#  s.resources    = 'YXTMotionView/Resources/*'
  s.requires_arc = true
end
