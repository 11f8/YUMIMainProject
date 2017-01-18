//
//  YMVideoManager.h
//  YMVideo
//
//  Created by chenzhangtao on 16/5/31.
//  Copyright © 2016年 chenzhangtao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YMVideoDelegate.h"
@interface YMVideoManager : NSObject


@property(assign,nonatomic)id<YMVideoDelegate> delegate;


+ (YMVideoManager *)sharedVideoManager;
/**
 *  视频初始化接口
 *
 *  @param appkey    玉米ID
 *  @param channleId 渠道ID
 *  @param version   版本号
 *
 *  @return 视频对象
 */
+(id)startWithYuMIId:(NSString*)yumiId  channleId:(NSString*)channleId versionNumber:(NSString*)version delegate:(id<YMVideoDelegate>) delegate;


+(id)startWithYuMIId:(NSString*)yumiId  delegate:(id<YMVideoDelegate>) delegate;
/**
 *  视频是否缓冲完成
 *   YES:缓冲完成
 *    NO:缓冲未完成
 */
-(BOOL)isReadVideo;
/**
 *  开始播放视频
 */
-(void)playVideo;

@end
