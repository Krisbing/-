//
//  main.c
//  求最大公约数
//
//  Created by 贺兵 on 2017/8/29.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#include <stdio.h>
//最大公约数
int gcd(int a,int b)
{
    int ret = 0;
    
    if (a < b) {
        
        ret = a;
        a = b;
        b = ret;
    }
    while (b != 0) {
        
        ret = a % b;
        a = b;
        b = ret;
    }
    
    return a;
}

int main(int argc, const char * argv[]) {

    printf("ret == %d\n",gcd(100, 150));
    
    return 0;
}
