//
//  YuMIVideoDeviceInfo.h
//  YuMIVideo
//
// Copyright (c) 2015年 YuMIVideo. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface YuMIDeviceInfo : NSObject

+(YuMIDeviceInfo*)shareDevice;

/**
 *  设置服务器
 *
 *  @param openService  YES：测试服务器   NO：正式服务器
 *
 */
-(void)openTestService:(BOOL)openService;
/**
 *  获取服务器
 *
 *  @return  YES：测试服务器   NO：正式服务器
 *
 */
-(BOOL)isOpenTestService;
/**
 *  移除本地服务器的设置
 */
-(void)removeTestService;

/**
 *  通过编号获取第三方平台名字
 *
 *  @param providerID 编号
 *  @return 名字
 */
-(NSString *)getProviderName:(NSString *)providerID;

/**
 *   请求参数加密
 *
 *  @param dic 参数字典
 *
 *  @return 加密字符串
 */
-(NSString *)signUrlStrWith:(NSDictionary *)dic;

/**
 *  获取开发者语言
 *
 *  @return  当前设备语言
 */
- (NSString*)getPreferredLanguage;

/**
 *  获取网络类型字符串
 *  
 *  如果开发者的app隐藏掉状态栏将无法获取网络状态
 *
 *  @return 网络类型字符串 例如：2G 3G 4G WIFI
 */
-(NSString *)getNetworkType;

/**
 *  获取手机型号
 *
 *  老接口待商榷，存在问题，如果新增设备将显示为未知，必须更新SDK才能解决
 *
 *  @return  手机型号
 */
- (NSString *)getCurrentDeviceModel;

/**
 *  检查网络是否正常连接
 *
 *  @return YES 网络正常  NO 网络未连接
 */
-(BOOL)checkNetworkStatus;

/**
 *   获取当前时间戳
 *
 *  @return 时间戳字符串
 */
-(NSString *)getCurrentTime;
/**
 *  获取advertisingIdentifier
 *
 *  @return advertisingIdentifier 字符串
 */
-(NSString *)getIDFA;

/**
 *  获取IDFA
 *
 *  @return IDFA 字符串
 */
- (NSString *)getIDFV;
/**
 *  获取OpenUDID
 *
 *  @return OpenUDID 字符串
 */
- (NSString *)getOpenUDID;

/**
 *  获取PLMN Code
 *
 *  @return PLMN Code
 */
-(NSString *)getPLMNCode;
/**
 *   获取MAC地址
 *
 *  @return MAC字符串
 */
-(NSString *)getMacAddress;
/**
 *  获得设备类型
 *
 *  @return 设备类型
 */
-(NSString *)getDeviceMode;
/**
 *  获取App版本号
 *
 *  @return 版本号
 */
-(NSString*)getVersionNum;

/**
 *  字符串是否为空
 *
 *  @param str 传入字符串
 *
 *  @return YES 为空 NO 不为空
 */
-(BOOL)isBlankString:(NSString*)str;


/**
 *  查找App中支持的广告sdk
 *
 *  @return 广告sdk名称 “,”分割
 */
-(NSString*)getAllSupportSDK;

//获取系统版本号
-(NSString *)getCurrentVersion;

//获取整轮广告的唯一标示
-(NSString*)getYUMIRid;
//获取单平台广告的唯一标示
-(NSString*)getYUMIPid;


/**
 *  json解析
 *
 *  @param data 解析数据
 *
 *  @return 字典
 */
+(NSDictionary*)JSONObjectWithData:(NSData*)data;


-(NSString*)getSaveConfigStr:(NSString*)appid  channel:(NSString*)channel  version:(NSString*)version  adType:(NSUInteger)adType;

/**
 *  存储InitFlag
 *
 *  @param initflag
 */
- (void)setInitFlag:(NSString *)initflag ;

/**
 *  获取initFlag
 *
 *  @return initFlag
 */
- (NSString *)getInitFlag;


@end
