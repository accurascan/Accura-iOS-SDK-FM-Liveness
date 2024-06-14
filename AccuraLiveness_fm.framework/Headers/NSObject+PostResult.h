//
//  NSObject+PostResult.h
//  AccuraOCR
//
//  Created by Technozer on 18/02/21.
//  Copyright © 2021 Technozer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "LivenessData.h"




@interface PostResult: NSObject
{
    ContentType contentType;
}

typedef void (^SuccessBlock)(NSMutableDictionary* Response);
typedef void (^FailureBlock)(NSError* error);
typedef void (^ProgressBlock)(NSMutableDictionary*);


-(void) postMethodWithParamsAndImage:(NSMutableDictionary*)parameters forMethod: (NSString*)forMethod image:(UIImage*)image completion: (SuccessBlock)completion FailureBlock: (FailureBlock)FailureBlock;
-(void) postMethodWithParamsAndImage:(NSMutableDictionary*)parameters forMethod: (NSString*)forMethod image:(UIImage*)image apikey:(NSString*)apikey completion: (SuccessBlock)completion FailureBlock: (FailureBlock)FailureBlock;
@end


