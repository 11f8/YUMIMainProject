//
//  AdsYuMIVideoService.h
//  YMVideo
//
//  Created by chenzhangtao on 16/6/1.
//  Copyright © 2016年 chenzhangtao. All rights reserved.
//

#define YUMIVideoErrorDomain @"com.yumiVideo.error"
#define YUMIVideoCachePath @"Caches/YUMICache/Video"
#define YUMIVideoCacheFileName @"YUMICacheVideo.json"


#define YUMIVideoPlaytimeSucessCount  @"YUMIVideoPlaytimeSucessCount"
#define  YUMIVideoPlayNowTime  @"YUMIVideoPlayNowTime"


#define  YUMIVideoGetInfoSuccessNotification @"YUMIVideoGetInfoSuccessNotification"
#define  YUMIVideoGetInfoErrorNotification @"YUMIVideoGetInfoErrorNotification"


#define kYuMIVideoAppVer 231
#define kYuMIVideoV @"2.3.1"


#define YUMIVideoDebugConfigurationKey    @"ConfigurationKey"
#define YUMIVideoDebugKey                 @"yumi_key"
#define YUMIVideoDebugChannel             @"yumi_channle"
#define YUMIVideoDebugVersion             @"yumi_versions"
#define YUMIVideoDebugAdtype              @"yumi_adtype"
#define YUMIVideoDebugValuableKey         @"Zplay_AdValuableKey"

//掌游 10000
//官网 10002
#define partnerID_Video @"10000"
#define TestVideoServerKey @"testServer"
//测试统计接口
#warning 发版时请关闭测试统计接口（设置为0）
#define TestVideoStatisticalAPI 0


#define kPingServerDomainYuMI       @"corn.yumimobi.com"
#define kPingServerDomainBaidu      @"www.baidu.com"
#define kPingServerDomainQQ         @"www.qq.com"
#define kPingServerDomainSina       @"www.sina.com"
#define kPingServerDomainCnnic      @"www.cnnic.cn"
#define kPingServerDomainYahoo      @"www.yahoo.com"
#define kPingServerDomainGoogle     @"www.google.com"

#define offline 0


//生产地址
#define YUMIVideoServerUrl     @"https://corn.yumimobi.com/api/2.0/mediation/adconfig.php"
#define YUMIVideoStatisticsUrl @"https://tracker1.yumimobi.com/api/countad.php"          //2.0接口有合并上报的约束，仍使用1.0的
//测试地址
#define YUMIVideoServerUrlTest     @"https://testapi.yumimobi.com/api/2.0/mediation/adconfig.php"
#define YUMIVideoStatisticsUrlTest @"https://testapi.yumimobi.com/api/countad.php"
//新功能测试地址
//#define YUMIVideoServerUrlTest     @"http://testapi1.yumimobi.com:8899/api/2.0/mediation/adconfig.php"
//#define YUMIVideoStatisticsUrlTest @"http://testapi1.yumimobi.com:8899/api/countad.php"




//1.0接口
//测试
//#define YUMIVideoServerUrlTest @"http://testapi2.yumimobi.com/api/cornplan.php"
//#define YUMIVideoStatisticsUrlTest @"http://testapi2.yumimobi.com/api/countad.php"
//生产
//#define YUMIVideoServerUrl @"http://corn.yumimobi.com/api/cornplan.php"
//#define YUMIVideoStatisticsUrl @"http://tracker1.yumimobi.com/api/countad.php"
