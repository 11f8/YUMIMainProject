//
//  YuMIVideoRequestStatistics.h
//  YMVideoSample
//
//  Created by chenzhangtao on 16/6/7.
//  Copyright © 2016年 chenzhangtao. All rights reserved.
//

#import "YMVideoBaseRequest.h"
#import "YUMIVideoType.h"
typedef enum {
    YuMIVideoStatisticsTypeRequestAd =1,
    YuMIVideoStatisticsTypeClickAd=2,
    YuMIVideoStatisticsTypeShowAd=3,
    YuMIVideoStatisticsTypeOpportAd=4,
    YuMIVideoStatisticsTypeRewardAd=5,
    YuMIVideoStatisticsTypeRound=6,
    YuMIVideoStatisticsTypeResponse=7,
    YuMIVideoStatisticsTypeRecivedAd =8,
    YuMIVideoStatisticsTypeStartAd =9,
    YuMIVideoStatisticsTypeEndAd =10,
}YuMIVideoStatisticsType;

typedef enum : NSUInteger {
    YuMIVideoDeviceTypeIphone=1,
    YuMIVideoDeviceTypeIpad=2,
} YuMIVideoDeviceType;

@interface YuMIVideoRequestStatistics : YMVideoBaseRequest
{

}


@property(copy,nonatomic) NSString* yumiId;
@property(copy,nonatomic) NSString* channleId;
@property(copy,nonatomic) NSString* versionsNumber;
@property(assign,nonatomic) YuMIVideoAdType adtype;
@property(copy,nonatomic) NSString* providerName;
@property(assign,nonatomic) BOOL isSuccess;

-(void)requestYuMIServiceByType:(YuMIVideoStatisticsType)StatiType  isSuccess:(BOOL)success rid:(NSString*)rid pid:(NSString*)pid trans:(NSString *)trans;

@end
