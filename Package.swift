
// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "PerimeterX",
    producs: [
        .library(
            name: "PerimeterX",
            target: ["PerimeterX"]
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