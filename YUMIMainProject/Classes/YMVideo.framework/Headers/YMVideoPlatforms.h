//
//  YMVideoPlatforms.h
//  YMVideoSample
//
//  Created by chenzhangtao on 16/6/3.
//  Copyright © 2016年 chenzhangtao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YuMIVideoAdNetworkAdapter.h"

@interface YMVideoPlatforms : NSObject

//平台适配器
@property(strong,nonatomic)YuMIVideoAdNetworkAdapter * adapter;
//平台是否可用
@property(assign,nonatomic)BOOL enabled;
//平台名称
@property(strong,nonatomic) NSString * platformName;
//平台展示次数
@property(assign,nonatomic) NSInteger playVideoCount;
//平台奖励次数
@property(assign,nonatomic) NSInteger playVideoRewardCount;

@end
