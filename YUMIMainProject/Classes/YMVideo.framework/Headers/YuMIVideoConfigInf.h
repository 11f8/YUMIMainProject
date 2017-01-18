//
//  YuMIVideoConfigInf.h
//  YuMIVideoSample
//
//  Created by Castiel Chen on 15/8/12.
//  Copyright (c) 2015年 YuMIVideo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YUMIVideoType.h"




@interface YuMIVideoConfigInf : NSObject

@property(copy,nonatomic)NSString * appkey;
@property(copy,nonatomic)NSString * channelId;
@property(copy,nonatomic)NSString * version;
@property(assign,nonatomic) YuMIVideoAdType adType;

- (void)getConfigWithAppKey:(NSString*)appkey
                  channelId:(NSString*)channelId
              versionNumber:(NSString*)version
                 AdViewType:(YuMIVideoAdType)adType;

/**
 *  获取用户配置Key
 *
 *  @return 返回配置key
 */
-(NSString*)getSaveConfigKey;

/**
 *  重新尝试获取配置信息
 */
-(void)retryConfig;

@end
