<p align="center">
  <img height="75" src="assets/px-logo.png" />
</p>

---

## About [PerimeterX](https://www.perimeterx.com/) 

### Prevent Automated Web and Mobile Attacks
Sophisticated attackers can inflict damage without triggering your security mechanisms. By focusing on the behavior of humans, applications and networks, PerimeterX detects real-time bot attacks with unparalleled accuracy.

&nbsp;
## Compatibility and Requirements

| **PerimeterX SDK** 	| **Requirements**                                     	|
|--------------------	|------------------------------------------------------	|
| Operating System   	| iOS 8 or higher                                      	|
| Languages          	| Objective-C, Swift                                   	|
| Devices            	| Any iOS compatible device: iPhones, iPads, etc.      	|
| File Sizes         	| PerimeterX adds about {{TBD}} K to your iOS release app. 	|
| Architectures      	| ARM 32-bit or 64-bit.                                	|


## Installation

### CocoaPods

Just add `pod 'PerimeterX'` into your [Podfile](https://guides.cocoapods.org/syntax/podfile.html).

Then run `pod install`.

### Carthage

Add the following to the app Cartfile
```
binary "https://raw.githubusercontent.com/PerimeterX/px-iOS-Framework/master/PerimeterX.json"
```

Then run `carthage update --platform iOS`

---

Finally add `import PerimeterX` in your Swift implementation.

Or `#import <PerimeterX/PerimeterX.h>` if you're using Objective-C.<br>
