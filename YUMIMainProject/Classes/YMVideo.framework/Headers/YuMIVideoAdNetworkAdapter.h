//
//  YuMIVideoAdNetworkAdapter.h
//  TestFrameWork
//
//   Created by Castiel Chen  on 15/8/6.
//  Copyright (c) 2015年 YuMIVideo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YMVideoDelegate.h"
#import "YuMIVideoSDKAdNetworkRegistry.h"
#import "YuMIVideoConfig.h"
#import "YuMIVideoError.h"
#import "YMVideoManager.h"
#import "YMVideoCore.h"

@class YMVideoManager;
@class YuMIVideoProvider;

extern NSString *YuMIVideoAdNetworkAdInMobi;
extern NSString *YuMIVideoAdNetworkAdDoMob;
extern NSString *YuMIVideoAdNetworkAdAdcolony;
extern NSString *YuMIVideoAdNetworkAdVungle;
extern NSString *YuMIVideoAdNetworkAdUnity;
extern NSString *YuMIVideoAdNetworkAdLoopMe;
extern NSString *YuMIVideoAdNetworkAdTapjoy;
extern NSString *YuMIVideoAdNetworkAdSupersonic;
extern NSString *YuMIVideoAdNetworkAdApplovin;
extern NSString *YuMIVideoAdNetworkAdYuMiAuto;
extern NSString *YuMIVideoAdNetworkAdIronsource;

@interface YuMIVideoAdNetworkAdapter : NSObject

@property(assign,nonatomic)YMVideoCore * adCore;
@property(strong,nonatomic)YuMIVideoProvider*provider;
@property(assign,nonatomic)NSUInteger  adType;
@property(assign,nonatomic)UIViewController*  vc;
@property(assign,nonatomic)BOOL isDebug;

- (id)initWithYuMIVideoAdapterDelegate:(id<YMVideoDelegate>)delegate
                        core:(id)core
               networkConfig:(YuMIVideoProvider *)provider
                              adType:(NSUInteger)adType;





/**
 *  视频初始化接口
 */
-(void)initplatform;
/**
 *  是否可以播放广告
 */
-(BOOL)isAvailableVideo;
/**
 *  播放视频
 */
-(void)playVideo;

-(void)setDebugViewController:(UIViewController*)vc;

-(void)clearDebugViewController;


//播放开始
-(void)adapterStartPlayVideo:(YuMIVideoAdNetworkAdapter *)_adapter;

#pragma mark YuMIVideoDelegate

/**
 *  关闭视频
 *
 *  @param _adapter 平台适配器
 *  @param video
 */
-(void)adapterdidCompleteVideo:(YuMIVideoAdNetworkAdapter *)_adapter;


/**
 *  平台视频奖励
 *
 *  @param _adapter 平台适配器
 *  @param view
 */
-(void)adapter:(YuMIVideoAdNetworkAdapter *)_adapter rewards:(NSInteger)rewards;

/**
 *  视频播放完成
 *
 *  @param _adapter 平台适配器
 */
-(void)adapterPlayToComplete:(YuMIVideoAdNetworkAdapter *)_adapter;


/**
 *  开发者设置的ViewController
 *
 *  @return
 */
-(UIViewController*)viewControllerForPresentingModalView;


@end
