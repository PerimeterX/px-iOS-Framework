![image](https://storage.googleapis.com/perimeterx-logos/primary_logo_red_cropped.png)

---

## About [PerimeterX](https://www.perimeterx.com/) 

PerimeterX is the leading provider of application security solutions that keep your business safe in the digital world. Delivered as a service, the company’s Bot Defender, Code Defender and Page Defender solutions detect risks to your web applications and proactively manage them, freeing you to focus on growth and innovation. The world’s largest and most reputable websites and mobile applications count on PerimeterX to safeguard their consumers’ digital experience. PerimeterX is headquartered in San Mateo, California and at [www.perimeterx.com](https://www.perimeterx.com).

&nbsp;
## Compatibility and Requirements

| **PerimeterX SDK** 	| **Requirements**                                     	|
|--------------------	|------------------------------------------------------	|
| Operating System   	| iOS 9 or higher                                      	|
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
