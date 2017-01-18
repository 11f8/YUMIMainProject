//
//  YuMIVideoError.h
//  TestFrameWork
//
//   Created by Castiel Chen  on 15/8/6.
//  Copyright (c) 2015年 YuMIVideo. All rights reserved.
//

#import <Foundation/Foundation.h>

enum {
    //数据超时
    YuMIVideoRequestTimeOut =8,
    //没有找到广告适配器
    YuMIVideoRequestAdTypeNotFound= 11,
    //平台没广告填充
    YuMIVideoRequestNotAd= 5,
    
    YUMIVideoGetInfoError =999,
    
  
    
};



@interface YuMIVideoError : NSError

+ (YuMIVideoError *)errorWithCode:(NSInteger)code userInfo:(NSDictionary *)dict;
+ (YuMIVideoError *)errorWithCode:(NSInteger)code description:(NSString *)desc;
+ (YuMIVideoError *)errorWithCode:(NSInteger)code description:(NSString *)desc underlyingError:(NSError *)uError;

- (id)initWithCode:(NSInteger)code userInfo:(NSDictionary *)dict;
- (id)initWithCode:(NSInteger)code description:(NSString *)desc;
- (id)initWithCode:(NSInteger)code description:(NSString *)desc underlyingError:(NSError *)uError;

@end
