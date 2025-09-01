// swift-tools-version: 6.1
import PackageDescription

let package = Package(
    name: "OpenVanillaApp",
    platforms: [.macOS(.v10_15)],
    products: [
        .executable(name: "OpenVanillaCLI", targets: ["OpenVanillaCLI"])
    ],
    dependencies: [
        .package(path: "Packages/InputSourceHelper"),
        .package(path: "Packages/OpenVanilla"),
        .package(path: "Packages/CandidateUI"),
        .package(path: "Packages/TooltipUI"),
        .package(path: "Packages/VXHanConvert"),
    ],
    targets: [
        .executableTarget(
            name: "OpenVanillaCLI",
            dependencies: [
                .product(name: "InputSourceHelper", package: "InputSourceHelper"),
                .product(name: "OpenVanilla", package: "OpenVanillaLib"),
                .product(name: "CandidateUI", package: "CandidateUI"),
                .product(name: "TooltipUI", package: "TooltipUI"),
                .product(name: "VXHanConvert", package: "VXHanConvert"),
            ],
            path: "Source/CLI" // new Swift-only source folder
           // exclude: ["OpenVanilla.xcodeproj"]
        )
    ]
)
