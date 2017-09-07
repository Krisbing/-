//
//  main.c
//  冒泡排序01
//
//  Created by 贺兵 on 2017/8/29.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#include <stdio.h>
//冒泡排序
void bubble_sort(int s[])
{
    for (int i = 0; i < sizeof(s)/sizeof(*s); i++) {
        
        for (int j = i; j < sizeof(s)/sizeof(*s); j++) {
            
            if (s[i] > s[j]) {
                
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
