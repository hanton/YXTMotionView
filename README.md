# YXTMotionView
## A custom image view that implements device motion scrolling

Installation
-----

**CocoaPods**

* Add the dependency to your Podfile:
```ruby
platform :ios
pod 'YXTMotionView'
...
```

* Run `pod install` to install the dependencies.

**Source files**

Just clone this repository or download it in zip-file. Then you will find source files under **YXTMotionView** directory. Copy them to your project.

Usage
-----
* Import the header file to your view controller:
```objc
#import "YXTMotionView.h"
```
```objc
YXTMotionView *motionView = [[CRMotionView alloc] initWithFrame:self.view.bounds];
[motionView setImage:[UIImage imageNamed:@"Image"]];
[self.view addSubview:motionView];
```

Screenshot
----------

![screenshot](https://github.com/hanton/YXTMotionView/blob/master/screenshot/YXTMotionView.gif)

Requirements
----------
* iOS 7.0+ 
* ARC
* Core Motion

Contributing
----------
Anyone who would like to contribute to the project is more than welcome.

* Fork this repo
* Make your changes
* Submit pull request

## License
YXTMotionView is released under the MIT license. 

## Based on
CRMotionView

Contact
----------
Hanton Yang (hanton.yang@gmail.com)
