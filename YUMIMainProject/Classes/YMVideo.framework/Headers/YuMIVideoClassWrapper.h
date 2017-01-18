//
//  YuMIVideoClassWrapper.h
//  TestFrameWork
//
//   Created by Castiel Chen  on 15/8/6.
//  Copyright (c) 2015年 YuMIVideo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YuMIVideoClassWrapper : NSObject
{
    Class theClass;
}
- (id)initWithClass:(Class)c;
@property (nonatomic, readonly) Class theClass;

@end
