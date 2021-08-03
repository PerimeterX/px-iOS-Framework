// swift-tools-version:5.3

import PackageDescription

let package = Package(
    
    name: "PerimeterX",

    platforms: [
        .iOS(.v9)
    ],
  
    products: [
        .library(
            name: "PerimeterX", 
            targets: ["PerimeterX"])
    ],
    targets: [
        .binaryTarget(
            name: "PerimeterX", 
            path: "PerimeterX.xcframework")
    ]
)
