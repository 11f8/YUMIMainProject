//
//  YuMIVideoLogCenter.h
//  YuMIVideo
//
// Copyright (c) 2015年 YuMIVideo. All rights reserved.
//
//
#import <Foundation/Foundation.h>

#ifndef YMVLog
#define YMVLog(lv,fmt, ...) \
if([[YUMIVideoLogCenter shareInstance]canLog:lv]){\
    if([[YUMIVideoLogCenter shareInstance]getLogLeveFlag] == YuMIVideoLogDebug){\
        NSLog((@"YUMIVideo-Debug: " fmt), ##__VA_ARGS__);\
    }else{\
        NSLog((@"YUMIVideo-" "<FUNCTION:%s>: " fmt),__FUNCTION__, ##__VA_ARGS__);\
    }\
}
#endif


typedef enum {
    YuMIVideoLogDevelopment= 18>>1,
    YuMIVideoLogProduction = 1<<0,
    YuMIVideoLogDebug      = 1<<1,
    YuMIVideoLogNone       = 1<<2,
    YuMIVideoLogTemp       = 1<<3
}YuMIVideoLogLeve;

typedef enum {
    /**
     *  生产日志
     */
    YVMP      = 1<<0,
    /**
     *  调试日志
     */
    YVMD      = 1<<1,
    /**
     *  临时日志
     */
    YVMT      = 1<<3
}YuMIVideoLogLeveSample;

@interface YUMIVideoLogCenter : NSObject

+ (YUMIVideoLogCenter *)shareInstance;
- (BOOL)canLog:(int)levelFlag;
- (void)setLogLeveFlag:(YuMIVideoLogLeve)levelFlag;
- (YuMIVideoLogLeve)getLogLeveFlag;
@end
