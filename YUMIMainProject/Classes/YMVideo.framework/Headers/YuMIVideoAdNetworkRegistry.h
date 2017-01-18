//
//  YuMIVideoAdNetworkRegistry.h
//  TestFrameWork
//
//   Created by Castiel Chen  on 15/8/6.
//  Copyright (c) 2015年 YuMIVideo. All rights reserved.
//

#import <Foundation/Foundation.h>

@class YuMIVideoClassWrapper;
@class YuMIVideoAdNetworkAdapter;


@interface YuMIVideoAdNetworkRegistry : NSObject
{
    NSMutableDictionary * adapterDict;
}

+(YuMIVideoAdNetworkRegistry*)sharedRegistry;
-(void)registerClass:(Class)adapterClass;
-(YuMIVideoClassWrapper*)adapterClassFor:(NSString*)adNetworkType;




@end
