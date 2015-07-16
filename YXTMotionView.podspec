Pod::Spec.new do |s|
  s.name         = "YXTMotionView"
  s.version      = "0.1"
  s.summary      = "A Custom Image View That Implements Device Motion Scrolling"
  s.homepage     = "https://github.com/hanton/YXTMotionView"
  s.license      = "MIT"
  s.authors      = { "Hanton Yang" => "hanton.yang@gmail.com" }
  s.source       = { :git => "https://github.com/hanton/YXTMotionView.git"}
  s.platform     = :ios, '7.0'
  s.source_files = 'YXTMotionView/*.{h,m}'
  s.requires_arc = true
end
