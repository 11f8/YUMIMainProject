//
//  YMVideoCore.h
//  YMVideo
//
//  Created by chenzhangtao on 16/5/31.
//  Copyright © 2016年 chenzhangtao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YMVideoManager.h"


@class  YuMIVideoAdNetworkAdapter;

@interface YMVideoCore : NSObject

@property(copy,nonatomic)NSString * appkey;
@property(copy,nonatomic)NSString * channelId;
@property(copy,nonatomic)NSString * version;
@property(assign,nonatomic) NSUInteger adType;

@property(nonatomic,retain) NSTimer *timer;
@property(assign,nonatomic) YMVideoManager * videoView;


//初始化所有平台
-(void)initializeAllPlatforms;
//询问视频平台广告是否准备好
-(BOOL)isAvailable;

-(void)playVideo;

//奖励
-(void)adapter:(YuMIVideoAdNetworkAdapter *)_adapter rewards:(NSInteger)rewards;

//播放开始
-(void)adapterStartPlayVideo:(YuMIVideoAdNetworkAdapter *)_adapter;
//播放完成
-(void)adapterPlayToComplete:(YuMIVideoAdNetworkAdapter *)_adapter;
//关闭视频
-(void)adapterdidCompleteVideo:(YuMIVideoAdNetworkAdapter *)_adapter;

@end
