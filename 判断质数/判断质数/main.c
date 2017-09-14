//
//  main.c
//  判断质数
//
//  Created by 贺兵 on 2017/9/14.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++) {
        
        if (n % i == 0) {
            return 0;
        }
    }
    
    return -1;
}


int main(int argc, const char * argv[]) {

    
    printf("n == %d\n",isPrime(23));
    return 0;
}
