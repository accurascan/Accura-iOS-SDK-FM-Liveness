// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "AccuraLiveness_FM",
    platforms: [
        .iOS(.v15)
    ],
    products: [
        // Device-only (arm64) binary framework. Simulator is not supported.
        .library(name: "AccuraLiveness_fm", targets: ["AccuraFMSPM"])
    ],
    targets: [
        .binaryTarget(
            name: "AccuraLiveness_fm",
            path: "Frameworks/AccuraLiveness_fm.xcframework"
        ),
        .target(
            name: "AccuraFMSPM",
            dependencies: ["AccuraLiveness_fm"],
            path: "Sources/AccuraFMSPM"
        )
    ]
)
