//
//  GetInfoRequest.h
//  YMVideoSample
//
//  Created by chenzhangtao on 16/6/2.
//  Copyright © 2016年 chenzhangtao. All rights reserved.
//

#import "YMVideoBaseRequest.h"
#import "YUMIVideoType.h"

typedef enum : NSUInteger {
    YuMIVideoDeviceTypeIphone=1,
    YuMIVideoDeviceTypeIpad=2,
} YuMIVideoDeviceType;


@interface GetInfoRequest : YMVideoBaseRequest
-(void)getYuMIServiceConfiger:(NSString*)yumiId channleId:(NSString*)channleid versionsNumber:(NSString*)versionsNumber adType:(YuMIVideoAdType) adtype planTime:(NSString*)planTime;

@end
