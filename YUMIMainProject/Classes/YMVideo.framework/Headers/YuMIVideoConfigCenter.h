//
//  YuMIVideoConfigCenter.h
//  YuMIVideoSample
//  玉米配置信息管理（可配置多个key）
//  Created by Castiel Chen on 15/8/11.
//  Copyright (c) 2015年 YuMIVideo. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "YuMIVideoConfig.h"
//#import "YuMIVideoHttpRequest.h"
@class YuMIVideoHttpRequest;
@interface YuMIVideoConfigCenter : NSObject

/**
 *  开发者配置信息（key为yumi_key+channel_key+versions_number+yumi_adtype）
 */
@property(strong,nonatomic)NSMutableDictionary * configer_dic;


+(id)shareYuMIConfigCenter;

/**
 *  获取开发者配置信息
 *
 *  @param key 根据开发者key(yumi_key+channel_key+versions_number+yumi_adtype)
 *
 *  @return 开发者配置信息
 */
- (YuMIVideoConfig *) getConfigDictByKey:(NSString *)key;


-(void)clearConfigDictByKey:(NSString*)key;

@end
