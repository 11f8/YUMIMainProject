//
//  YuMIVideoAdapterFactory.h
//  TestFrameWork
//
//   Created by Castiel Chen  on 15/8/6.
//  Copyright (c) 2015年 YuMIVideo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YuMIVideoAdNetworkAdapter.h"
#import "YMVideoDelegate.h"
//#import "YuMIVideoView.h"
#import "YMVideoCore.h"
#import "YuMIVideoConfig.h"
@interface YuMIVideoAdapterFactory : NSObject

/**
 *   创建SDK Video 适配器
 *
 *  @param dict     适配器配置信息
 *  @param delegate 代理实现对象
 *  @param adView   展示广告最外层视图
 *  @param core     轮换控制对象
 *
 *  @return 适配器对象
 */
- (YuMIVideoAdNetworkAdapter *) createSDKVideoAdapterByConfig:(YuMIVideoProvider *)provider withdelegate:(id<YMVideoDelegate>)delegate  withCore:(YMVideoCore *)core adType:(NSUInteger)adType;
@end
