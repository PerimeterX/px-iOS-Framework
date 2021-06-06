
// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "PerimeterX",
    products: [
        .library(
            name: "PerimeterX",
            targets: ["PerimeterX"]
        )
    ],
    dependencies: [],
    targets: [
        .binaryTarget(
            name: "PerimeterX",
            path: "PerimeterX.xcframework"
        )
    ]
)
