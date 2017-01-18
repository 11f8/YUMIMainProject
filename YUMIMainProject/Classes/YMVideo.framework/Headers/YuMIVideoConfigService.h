//
//  YuMIVideoConfigService.h
//  YuMIVideoSample
//  从服务开始请求配置文件
//  Created by Castiel Chen on 15/8/11.
//  Copyright (c) 2015年 YuMIVideo. All rights reserved.
//

#import "YuMIVideoConfigSource.h"

@interface YuMIVideoConfigService : YuMIVideoConfigSource

-(void)getConfigFromServer;

@end
