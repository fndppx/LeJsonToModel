//
//  ViewController.m
//  JsonToModel
//
//  Created by keyan on 16/3/17.
//  Copyright © 2016年 keyan. All rights reserved.
//

#import "ViewController.h"
#import "TestModel.h"
#import "NSObject+LeDictToModel.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
   
    NSString *path = [[NSBundle mainBundle] pathForResource:@"weibo" ofType:@"json"];
    NSData *data = [NSData dataWithContentsOfFile:path];
    NSDictionary *json = [NSJSONSerialization JSONObjectWithData:data options:0 error:nil];
    

    
    
   
    
    
   TestModel * testModel2 = [[TestModel alloc]initWithDictionary:json];
    
}
//- (NSDictionary *)renamedProperties {
//    return @{@"channelId1":@"channelId",};
//}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
