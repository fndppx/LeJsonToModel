//
//  NSObject+LeDictToModel.h
//  JsonToModel
//
//  Created by keyan on 16/3/22.
//  Copyright © 2016年 keyan. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol LeDictToModelDelegate <NSObject>

@optional
- (NSDictionary *)objectProperties;
- (NSDictionary *)arrayProperties;
- (NSDictionary *)renamedProperties;

@end

@interface NSObject (LeDictToModel) <LeDictToModelDelegate>

+ (instancetype)le_modelFromDictionary:(NSDictionary *)dict;
+ (instancetype)le_modelFromJSONString:(NSString *)str;
- (void)configurePropertyWithDictionary:(NSDictionary *)dict;
@end