# AccuraLiveness_FM (Swift Package Manager)

Face match + liveness SDK from AccuraScan, packaged for Swift Package Manager.

- **Real devices only** (arm64). The simulator is not supported.
- **Minimum iOS 15**.
- No third-party dependencies.

## Install

Xcode → File → Add Package Dependencies… →

```
https://github.com/saeed-mohammad/FM_SPM.git
```

Choose **Up to Next Major Version** from `0.0.1` and add the `AccuraLiveness_fm` product to your app target.

Or in `Package.swift`:

```swift
.package(url: "https://github.com/saeed-mohammad/FM_SPM.git", from: "0.0.1")
```

```swift
.product(name: "AccuraLiveness_fm", package: "FM_SPM")
```

Then `import AccuraLiveness_fm`.

The framework links Swift runtime libraries through `@rpath`, so your app target must contain Swift code (or set *Always Embed Swift Standard Libraries* to Yes).
