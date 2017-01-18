//
//  YMVideoDelegate.h
//  YMVideo
//
//  Created by chenzhangtao on 16/5/31.
//  Copyright © 2016年 chenzhangtao. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol YMVideoDelegate <NSObject>


/*
 返回承载视频广告的ViewController
 */
- (UIViewController *)viewControllerVideoModalView;



/**
 *  视频播放完成
 *
 */
- (void)didCompleteVideo;


/**
 *  平台视频奖励
 */
-(void)rewardsVideo;

@end
