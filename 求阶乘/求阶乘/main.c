//
//  main.c
//  求阶乘
//
//  Created by 贺兵 on 2017/8/29.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#include <stdio.h>
int factorial(int n)
{
    int s = 0;
    
    if (n > 20) {
        
        return -1;
    }
    
    if (n == 0 || n == 1) {
        
        return 1;
    }
    
    s = n * factorial(n - 1);
    
    return s;
}
int main(int argc, const char * argv[]) {

    
    printf("s == %d\n",factorial(5));
    
    return 0;
}
