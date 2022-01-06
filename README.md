
![image](https://storage.googleapis.com/perimeterx-logos/primary_logo_red_cropped.png)

---

## About [PerimeterX](https://www.perimeterx.com/) 

PerimeterX is the leading provider of application security solutions that keep your business safe in the digital world. Delivered as a service, the company’s Bot Defender, Code Defender and Page Defender solutions detect risks to your web applications and proactively manage them, freeing you to focus on growth and innovation. The world’s largest and most reputable websites and mobile applications count on PerimeterX to safeguard their consumers’ digital experience. PerimeterX is headquartered in San Mateo, California and at [www.perimeterx.com](https://www.perimeterx.com).

## Introduction

The PerimeterX iOS SDK works by constantly profiling and evaluating device behavior to ensure that the connections to your mobile APIs and services are genuine.
This process is complex and detailed yet only requires initialization to manage a set of secure HTTP headers which are added to all HTTP and HTTPS requests made by the mobile application to the origin server. These HTTP headers are refreshed on a regular basis by the SDK as it is profiling the end-user’s mobile device.
The PerimeterX iOS SDK works well with popular HTTP request libraries for iOS including [Alamofire](https://github.com/Alamofire/Alamofire).

## Supported versions

|  |  |
|--|--|
| Operating System | iOS 11 and higher |
| Xcode | Xcode 13 and higher |
| Languages | Swift 5.5 and higher, Objective-C |

## Integration

Adding PerimeterX SDK to your project with:  

### Swift Package Manager

Add the package from the following repository:

[https://github.com/PerimeterX/px-iOS-Framework](https://github.com/PerimeterX/px-iOS-Framework)

### CocoaPods

Add the PerimeterX pod to your [Podfile](https://guides.cocoapods.org/):
```
platform :ios, '13.0'
use_frameworks!

target '<Your App Name>' do
    pod 'PerimeterX', '[PERIMETERX_IOS_SDK_VERSION]'
end
```

### Manual

1. Download PerimeterX_SDK.xcframework from [https://github.com/PerimeterX/px-iOS-Framework](https://github.com/PerimeterX/px-iOS-Framework)

2. In Xcode, add the framework to the "Frameworks and Libraries" section in your target. 

## Implementation

In your `AppDelegate`:

1. Import the SDK.

    Swift:
    ```swift
    import PerimeterX_SDK
    ```

    Objective-C:
    ```objectivec
    @import PerimeterX_SDK;
    ```

2. Make the `AppDelegate` class to conform to the ``PerimeterXDelegate``.

    Swift:
    ```swift
    class AppDelegate: UIResponder, UIApplicationDelegate, PerimeterXDelegate
    ```

    Objective-C:
    ```objectivec
    @interface AppDelegate : UIResponder <UIApplicationDelegate, PerimeterXDelegate>
    ```

3. Verify the SDK's version.

    Swift:
    ```swift
    print("SDK version: \(PerimeterX.sdkVersion())")
    ```

    Objective-C:
    ```objectivec
    NSLog(@"SDK version: %@", [PerimeterX sdkVersion]);
    ```

4. Call the ``PerimeterX/start(appId:delegate:enableDoctorCheck:completion:)`` function with your AppID.

    Swift:
    ```swift
    PerimeterX.start(appId: "<APP_ID>", delegate: self, enableDoctorCheck: false) { success, error in
        if success {
            if let vid = PerimeterX.vid(forAppId: nil) {
                print("vid: \(vid)")
            }
        }
        else {
            if let error = error {
                print("error: \(error)")
            }
            
            // make sure to start the sdk again when it fails (network issue, etc.)
        }
    }
    ```

    Objective-C:
    ```objectivec
    [PerimeterX startWithAppId:@"<APP_ID>" delegate:self enableDoctorCheck:NO completion:^(BOOL success, NSError * _Nullable error) {
        if (success) {
            NSString *vid = [PerimeterX vidForAppId:nil];
            NSLog(@"vid: %@", vid);
        }
        else {
            NSLog(@"error: %@", error);
            
            // make sure to start the sdk again when it fails (network issue, etc.)
        }
    }];
    ```

5. That's it! 🎉
