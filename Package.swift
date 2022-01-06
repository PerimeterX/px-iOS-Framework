// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "PerimeterX_SDK",
    platforms: [
        .iOS(.v11)
    ],
    products: [
        .library(
            name: "PerimeterX_SDK",
            targets: ["PerimeterX_SDK"]
        )
    ],
    dependencies: [],
    targets: [
        .binaryTarget(
            name: "PerimeterX_SDK",
            path: "PerimeterX_SDK.xcframework"
        )
    ]
)
