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
-(void)openFrontCamera:(int )isFrontSide;
- (void)accuraLivenessSDK;



@end
#endif
