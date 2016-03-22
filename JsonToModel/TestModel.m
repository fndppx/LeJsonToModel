

//
//  TestModel.m
//  JsonToModel
//
//  Created by keyan on 16/3/17.
//  Copyright © 2016年 keyan. All rights reserved.
//

#import "TestModel.h"
#import "NSObject+LeDictToModel.h"
@implementation TestModel


- (id)initWithDictionary:(NSDictionary *)jsonDictionary
{
    self = [super init];
    if(self){
        [self configurePropertyWithDictionary:jsonDictionary];

    }
    return self;
}

@end
