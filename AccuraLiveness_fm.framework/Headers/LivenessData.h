//
//  LivenessData.h
//  AccuraOCR
//
//  Created by Technozer on 17/02/21.
//  Copyright © 2021 Technozer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "VideoCameraWrapperDelegate.h"

typedef NS_ENUM(int, ContentType)
{
    form_data = 0,
    raw_data = 1
};


@protocol LivenessData <NSObject>
-(void) LivenessData:(NSString*)stLivenessValue livenessImage:(UIImage*)livenessImage status:(bool)status;
-(void) livenessViewDisappear;
//-(void) didChangedLivenessState:(LivenessType)livenessState;
@end

