//
//  YuMIVideoConfigSource.h
//  YuMIVideoSample
//
//  Created by Castiel Chen on 15/8/11.
//  Copyright (c) 2015年 YuMIVideo. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "YuMIVideoHttpRequest.h"
#import "YuMIAnalysisDictionary.h"
#import "YUMIVideoType.h"

 
@interface YuMIVideoConfigSource : NSObject


@property(assign,nonatomic) YuMIVideoConfigSource *nextconfigSource;
/**
 *  玉米ID
 */
@property(copy,nonatomic) NSString * yumi_key;
/**
 *  渠道ID
 */
@property(copy,nonatomic) NSString * channle_key;
/**
 *  App版本ID
 */
@property(copy,nonatomic) NSString * versions_number;

/**
 *  广告类型
 */
@property(assign,nonatomic) YuMIVideoAdType  yumi_adtype;

/*
 更新配置缓存
 */
- (void)refreshConfig;

/**
 *  获取开发者配置key
 *
 *  @return (yumi_key+channle_key+versions_number+yumi_adtype)
 */
-(NSString*)getConfigerKey;


@end
