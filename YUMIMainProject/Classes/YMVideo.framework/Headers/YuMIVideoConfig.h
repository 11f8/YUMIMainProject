//
//  YuMIVideoConfig.h
//  YuMIVideoSample
//   玉米初始化信息
//  Created by Castiel Chen on 15/8/11.
//  Copyright (c) 2015年 YuMIVideo. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
  YuMIVideoConfigStatusSuccess=0,
  YuMIVideoConfigStatusSuccessNotContext=1,
  YuMIVideoConfigStatusSignatureFail=2,
  YuMIVideoConfigStatusNotUpdate=3
} YuMIVideoConfigStatus;


typedef enum : NSUInteger {
    YuMIVideoAdapterReqSDK=1,
    YuMIVideoAdapterReqAPI=2,
    YuMIVideoAdapterReqCustomer=3
}YuMIVideoAdapterReq;

@interface YuMIVideoConfig : NSObject

/**
 *  返回状态码
 */
@property(copy,nonatomic) NSString * result;
/**
 *  获取配置间隔时间
 */
@property(copy,nonatomic) NSString * spaceTime;
/**
 *  IP地址
 */
@property(copy,nonatomic) NSString * ip;
/**
 *  玉米Id
 */
@property(copy,nonatomic) NSString * cornId;
/**
 *  配置生成时间
 */
@property(strong,nonatomic) NSNumber * planTime;
/**
 *  展示间隔时间
 */
@property(copy,nonatomic) NSString * interval;
/**
 *  广告是否能关闭
 */
@property(assign,nonatomic) BOOL manualCancel;
/**
 *  重试次数
 */
@property(strong,nonatomic) NSNumber * retryLimit;
/**
 *  视频奖励次数
 */
@property(strong,nonatomic) NSNumber * incentived;
/**
 *  是否自动优化
 */
@property(assign,nonatomic)  BOOL optimization;

/**
 设备唯一标识
 */
@property(strong,nonatomic) NSString * uuid;

/**
 *  广告配置信息
 */
@property(strong,nonatomic) NSMutableArray * providers;

/**
 *  服务端透传字段
 */
@property(strong,nonatomic) NSString *trans;


//服务器返回刷新ip时间
@property(copy,nonatomic) NSString * ipSpaceTime;


-(BOOL)checkConfigDataIsExisted;
-(void)printConfigerStatusLog;



@end


@interface YuMIVideoProvider : NSObject
/**
 *  广告平台名称
 */
@property(copy,nonatomic) NSString * providerName;
/**
 *  平台超时时间
 */
@property(strong,nonatomic) NSNumber * outTime;
/**
 *  分配比例
 */
@property(strong,nonatomic) NSNumber *  ratio;
/**
 *  请求广告方式(1、SDK 2、API 3、customer)
 */
@property(strong,nonatomic) NSNumber *  reqType;
/**
 *  0优先 1排序
 */
@property(strong,nonatomic) NSNumber* priority;

/**
 *  平台KEY_1
 */
@property(copy,nonatomic) NSString * key1;
/**
 *  平台KEY_2
 */
@property(copy,nonatomic) NSString * key2;

/**
 *  平台KEY_3
 */
@property(copy,nonatomic) NSString * key3;


/**
 110版本新增字段
 */
@property(strong,nonatomic) NSMutableDictionary * keys;


/**
 *  失败次数客户端维护
 */
@property(strong,nonatomic) NSNumber * faileCount;

/**
 *  是否按照比例请求的广告
 */
@property(assign,nonatomic) BOOL  isRatio;




-(void)debugPrint;


@end







