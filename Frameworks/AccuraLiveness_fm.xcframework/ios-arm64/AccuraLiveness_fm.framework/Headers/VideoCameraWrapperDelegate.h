//
//  VideoCameraWrapperDelegate.h
//  AccuraSDK
//
//  Created by Chang Alex on 1/26/20.
//  Copyright © 2020 Elite Development LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(int, LivenessType)
{
    DEFAULT = 0, LOOK_LEFT = 1, LOOK_RIGHT = 2, ORAL_VERIFICATION = 3, APPROVED = 4
};

@protocol LivenessVideoCameraWrapperDelegate <NSObject>
@optional
-(void)didChangedLivenessType:(LivenessType)faceDirection;
-(void)livenessData:(UIImage*)livenessImage andshowImage:(UIImage*)showImage;
-(void)livenessData:(UIImage*)livenessImage andshowImage:(UIImage*)showImage imagePath:(NSString*)imagePath;
-(void)getRandomNumber:(NSString*)randomNumber;
-(void)processedImage:(UIImage*)image;
-(void)titleMessage:(NSString *)message;

@end
