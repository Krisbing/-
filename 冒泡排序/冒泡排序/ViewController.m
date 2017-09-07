//
//  ViewController.m
//  冒泡排序
//
//  Created by 贺兵 on 2017/8/28.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController



- (void)viewDidLoad {
    [super viewDidLoad];

    NSMutableArray *array = [self sortWithArray:[[NSMutableArray alloc] initWithArray:@[@1,@2,@32,@34,@21,@22,@16,@65]]];
    NSLog(@"dsadasdas");
    
}
- (NSMutableArray *)sortWithArray:(NSMutableArray *)array
{
    for (int i = 0; i < array.count; i++) {
        
        for (int j = i; j < array.count; j++) {
            
            if (array[i] > array[j]) {
                
                id temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    return array;
}
@end
