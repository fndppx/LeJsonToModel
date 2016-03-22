//
//  TestModel.h
//  JsonToModel
//
//  Created by keyan on 16/3/17.
//  Copyright © 2016年 keyan. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef enum : NSInteger {
    //    mainVideoDetailTypeVOD=1,//点播
    videoDetailTypeVOD=11,
    videoDetailTypeSubject=12,//专辑
    videoDetailTypeLive=21,
    videoDetailTypeRound=22,//轮播台
    videoDetailTypeTV=23,//卫视
    videoDetailTypeImageTextPage=31,//图文
    videoDetailTypeWebPage=32
    
} VideoDetailType;

typedef enum : NSInteger {
    videoSuperscriptTypeOne=11,
    videoSuperscriptTypeTwo=12,//水平
    videoSuperscriptTypeThree=13,//倾斜
    VideoSuperscriptTypeFour=14,
    
    videoSuperscriptTypeFive=21,
    videoSuperscriptTypeSix=22,
    videoSuperscriptTypeSeven=23,
    videoSuperscriptTypeEight=24,
    videoSuperscriptTypeNone=0
    
}VideoSuperscriptType;

//0: 无 1: 电影显示评分2: 直播活动不显示3: 点播显示时间4：样式4 5: …
typedef enum : NSInteger {
    videoSubscriptTypeNone=0,
    videoSubscriptTypeMovieGrade,//电影评分
    videoSubscriptTypeLiveActive,//直播活动
    videoSubscriptTypeVODTime,//点播时间
    videoSubscriptTypeOther,
    
} VideoSubscriptType;
typedef enum : NSInteger {
    videoSuperscriptColorOrange,//橘色
    videoSuperscriptColorPink,//粉色
    
} VideoSuperscriptColor;

//视频左角标名字	0：无1、	活动2、	直播3、	会员
typedef enum : NSInteger {
    videoSuperscriptNameNone,
    videoSuperscriptNameActive,
    videoSuperscriptNameLive,
    videoSuperscriptNameMember,
    
} VideoSuperscriptName;

@interface TestModel : NSObject
@property (nonatomic, strong) NSString *target;             //下行页目标
@property (nonatomic, assign) VideoDetailType detailType;   //下行页类型
//@property (nonatomic, strong) VideoDetailType detailType;   //下行页类型

@property (nonatomic, strong) NSString* tesTdetailType;   //下行页类型

@property (nonatomic, strong) NSString *shareUrl;           //分享用url
@property (nonatomic, strong) NSString *videoId;            //id
@property (nonatomic, assign) long tempVideoId;            //id

@property (nonatomic, strong) NSString *videoAblumId;

@property (nonatomic, strong) NSString *channelId1;          //发现
@property (nonatomic, strong) NSString *videoShareUrl;      //发现
@property (nonatomic, strong) NSString *videoTitle;         //发现
@property (nonatomic, strong) NSString *videoImage;         //发现
@property (nonatomic, strong) NSString *downloadPlatform;  //是否可以下载
@property (nonatomic, strong) NSString *title;              //标题
@property (nonatomic, strong) NSString *videoType;          //视频类型
@property (nonatomic, strong) NSString *videoTypeCode;      //视频类型code

@property (nonatomic, strong) NSString *brief;              //视频简介
@property (nonatomic, strong) NSString *image;              //视频图片
@property (nonatomic, strong) NSString *ablumId;            //专辑id
@property (nonatomic, strong) NSString *nextLinkUrl;        //下一集播放的Url
@property (nonatomic, strong) NSString *videoBrief;         //视频简介
@property (nonatomic, assign) int episodeNumber;            //集数



@property (nonatomic, assign) VideoSuperscriptType superscriptType;     //视频左上角标样式
@property (nonatomic, assign) VideoSuperscriptColor superscriptColor;   //视频左角标颜色0:橘色1:粉色
@property (nonatomic, strong) NSString *  superscriptName;//视频左角标名字	0：无1、	活动2、	直播3、	会员

@property (nonatomic, assign) VideoSubscriptType subscriptType;         //视频右下角样式
//@property (nonatomic, strong) NSString *subscriptName;          //视频右下角标名字
@property (nonatomic, strong) NSString *subscriptName;          //视频右下角标名字

@property (nonatomic, strong) NSString * videoChannelId;        //视频频道id
@property (nonatomic, assign) long long videoPlayTimes;         //视频播放次数
@property (nonatomic, assign) long long videoPublishTime;       //视频上映时间
@property (nonatomic, assign) long long publishTime;            //视频上映时间

@property (nonatomic, assign) int videoEpisode;                 //视频集数
@property (nonatomic, assign) int episode;                      //视频集数(搜索页)
@property (nonatomic, strong) NSString * videoDirector;         //视频导演
@property (nonatomic, strong) NSString * videoActor;            //视频主演

@property (nonatomic, strong)NSString * videoDesc;              //视频描述
@property (nonatomic, assign)BOOL hasSupport;                   //是否已点赞
@property (nonatomic, assign)int supportNumber;                 //点赞数量
@property (nonatomic, assign)long long videoTime;               //播放时长

- (instancetype)initWithDictionary:(NSDictionary *)dict;
+ (NSString * )playTimeFormate:(NSInteger)time;

//- (id)initWithDictionary:(NSDictionary *)jsonDictionary;
- (id)initWithDictionary:(NSDictionary *)jsonDictionary;
-(int)reflectDataFromDictionary:(NSDictionary *)dic;
@end
