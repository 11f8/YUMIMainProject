//
//  YMVideoBaseRequest.h
//  YMVideo
//
//  Created by chenzhangtao on 16/6/1.
//  Copyright © 2016年 chenzhangtao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YuMIVideoError.h"
@class YMVideoBaseRequest;
@protocol YMVideoBaseRequestDelegate <NSObject>

@optional

- (void)request:(YMVideoBaseRequest *)request didFailWithError:(YuMIVideoError *)error;

- (void)request:(YMVideoBaseRequest *)request didFinishLoadingWithResult:(id)result;

@end


@interface YMVideoBaseRequest : NSObject <NSURLSessionDelegate,NSURLSessionDataDelegate>

{

    /**
     *  请求url
     */
    NSString                *_url;
    
    /**
     *  请求方法 GET POST
     */
    NSString                *_httpMethod;
    
    /**
     *   请求参数
     *   key:请求参数 value:请求值
     */
    NSDictionary            *_params;
    
    /*
     *   请求头参数
     *   key:请求参数 value:请求值
     */
    NSDictionary            *_httpHeaderFields;
    
    /**
     *  http 请求对象
     */
    NSURLConnection         *connection;
    
    /**
     *  响应数据
     */
    NSMutableData           *responseData;

 
}

typedef enum
{
    YuMIVideoHttpRequestPostDataTypeNone,
    YuMIVideoHttpRequestPostDataTypeNormal,			// for normal data post, such as "user=name&password=psd"
    YuMIVideoHttpRequestPostDataTypeMultipart,        // for uploading images and files.
}YuMIVideoHttpRequestPostDataType;

@property (nonatomic, retain) NSString *url;
@property (nonatomic, retain) NSString *httpMethod;
@property (nonatomic, retain) NSDictionary *params;
@property (nonatomic, assign) NSInteger   timeout;
@property (nonatomic, retain) NSDictionary *httpHeaderFields;
@property (nonatomic, weak) id<YMVideoBaseRequestDelegate> delegate;
@property (nonatomic,assign) YuMIVideoHttpRequestPostDataType postDataType;


+(YMVideoBaseRequest *) initWithURL:(NSString *)url
                           httpMethod:(NSString *)httpMethod
                               params:(NSDictionary *)params
                     httpHeaderFields:(NSDictionary *)httpHeaderFields
                     shortTimeOutType:(NSInteger)timeout
                         postDataType:(YuMIVideoHttpRequestPostDataType)postDataType
                             delegate:(id<YMVideoBaseRequestDelegate>)delegate;


/**
 *   发起异步请求请求
 */
- (void) asynchronousConnect;


///**
// *   发起同步请求
// *
// *  @return 请求数据
// */
//- (NSData *) synchronousConnect;
//
//
///**
// *   取消当前请求
// */
//- (void) disconnect;


@end
