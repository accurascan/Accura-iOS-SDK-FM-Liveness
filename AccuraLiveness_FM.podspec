Pod::Spec.new do |spec|

  spec.name         = "AccuraLiveness_FM"
  spec.version      = "4.3.0"
  spec.summary      = "Accura Liveness is used for your  customer verification and authentication."
  spec.description  = "Accura Authentication is used for your customer verification and authentication.Unlock the True Identity of Your Users with 3D Selfie Technology"
  spec.homepage     = "https://github.com/accurascan/iOS-KYC"
  spec.license      = "MIT"
  spec.author       = { "AccuraScan" => "connect@accurascan.com" }
  spec.platform     = :ios, "12.0"
  spec.static_framework = true
  spec.source       = { :git => "https://github.com/accurascan/Accura-iOS-SDK-FM-Liveness.git", :tag => "4.3.0" }
  spec.preserve_paths = 'AccuraLiveness_fm.framework'
  spec.vendored_frameworks = 'AccuraLiveness_fm.framework'
  spec.requires_arc = true
  spec.swift_version = "5.0"
  spec.exclude_files = "accuraocrSDK/*/.{png}"
  spec.dependency 'AFNetworking','4.0.0'
  spec.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end
