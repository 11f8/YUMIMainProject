//
//  AdsYuMICoreRationsCenter.h
//  AdsYUMISample
//   请求广告逻辑控制类
//  Created by Castiel Chen on 15/8/12.
//  Copyright (c) 2015年 AdsYuMI. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YuMIVideoConfig.h"
@interface YuMIVideoRationsCenter : NSObject

/**
 *  上次请求平台名称
 */
@property(copy,nonatomic) NSString* lastWeightName;
/**
 *  上次请求平台优先级
 */
@property(assign,nonatomic)NSNumber* lastWeightPriority;

/**
 *  投放量选中的平台名字
 */
@property(copy,nonatomic)NSString*lastproviderName;





-(id)initWithAdsYuMIConfigData:(YuMIVideoConfig *)yumiConfigData;


/**
 *  轮换逻辑
 *
 *  @param isSucceed   上次展示是否成功
 *  @param curPriority 上次广告优先级
 *
 *  @return 广告平台
 */
-(YuMIVideoProvider*)getRationBySucceedFlag:(BOOL)isSucceed andCurRationPriority:(int)curPriority;


@end
