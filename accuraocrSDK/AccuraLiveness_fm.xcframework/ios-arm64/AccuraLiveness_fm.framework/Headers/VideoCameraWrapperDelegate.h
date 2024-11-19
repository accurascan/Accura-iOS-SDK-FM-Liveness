//
//  VideoCameraWrapperDelegate.h
//  AccuraSDK
//
//  Created by Chang Alex on 1/26/20.
//  Copyright © 2020 Elite Development LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@protocol LivenessVideoCameraWrapperDelegate <NSObject>
@optional
-(void)livenessData:(UIImage*)livenessImage andshowImage:(UIImage*)showImage;
-(void)processedImage:(UIImage*)image;
-(void)titleMessage:(NSString *)message;

@end
