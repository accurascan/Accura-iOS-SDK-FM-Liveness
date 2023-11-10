//
//  VideoCameraWrapper.h
//  AccuraSDK
//
//  Created by Chang Alex on 1/26/20.
//  Copyright © 2020 Elite Development LLC. All rights reserved.
//
#if !TARGET_OS_WATCH
//#include <opencv2/opencv.hpp>
//#include "opencv2/highgui.hpp"
//#include "opencv2/imgproc.hpp"
//#include "opencv2/imgcodecs.hpp"
//#include "opencv2/features2d.hpp"
//#include <opencv2/imgproc/imgproc.hpp>
//#include <opencv2/core/core.hpp>
//#include <opencv2/features2d/features2d.hpp>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "VideoCameraWrapperDelegate.h"
//#import "MLKit.h"




typedef enum LivenessType_{
    DEFAULT = 0,
    LOOK_LEFT = 1,
    LOOK_RIGHT = 2,
    ORAL_VERIFICATION = 3,
    APPROVED = 4
}LivenessType;

typedef enum FaceResult_{
    SMILE = 2,
    SUCCESS = 1,
    FAILED = 0,
    MULTIPLE_FACE = -1,
    SMALL_FACE = -2,
    BIG_FACE = -3,
    CLOSE_EYES = -4,
    TILT_ANGLE = -5,
    ROTATING_ANGLE = -6,
    CENTER_FACE = -7,
    DARK_FACE = -8,
    BLUR_FACE = -9,
    GLARE_FACE = -10
}FaceResult;




@interface AccuraLivenessCameraWrapper : NSObject

{
    BOOL Capturing;

//    SDKModel sdkm;
}


@property (nonatomic, strong) id<LivenessVideoCameraWrapperDelegate> delegate;


-(id)initWithDelegate:(UIViewController<LivenessVideoCameraWrapperDelegate>*)delegate andMsgLabel:(UILabel*)l andfeedBackframeMessage:(NSString*)feedBackframeMessage andfeedBackAwayMessage:(NSString*)feedBackAwayMessage andfeedBackOpenEyesMessage:(NSString*)feedBackOpenEyesMessage andfeedBackCloserMessage:(NSString*)feedBackCloserMessage andfeedBackCenterMessage:(NSString*)feedBackCenterMessage andfeedBackMultipleFaceMessage:(NSString*)feedBackMultipleFaceMessage andfeedBackFaceSteady:(NSString*)feedBackFaceSteady andfeedBackLowLightMessage:(NSString*)feedBackLowLightMessage andfeedBackBlurFaceMessage:(NSString*)feedBackBlurFaceMessage andfeedBackGlareFaceMessage:(NSString*)feedBackGlareFaceMessage;

-(void)startCamera;
-(void)stopCamera;

-(void)setLivenessGlarePercentage:(int)glareMin glareMax:(int)glareMax;
-(void)setLivenessBlurPercentage:(int)blur;
-(NSString *)livenessCheck:(UIImage *)image11;
-(void)openFrontCamera:(int )isFrontSide;
- (void)accuraLivenessSDK;
- (void)livenessBuffer:(float)livenessBuffer1;


@end
#endif
