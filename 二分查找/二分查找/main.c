//
//  main.c
//  二分查找
//
//  Created by 贺兵 on 2017/8/29.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#include <stdio.h>
int binary_search(int s[],int goal)
{
    int low = 0;
    int high = sizeof(s)/sizeof(*s) - 1;
    for (int i = 0; i < sizeof(s)/sizeof(*s); i++) {
        for (int j = i; j < sizeof(s)/sizeof(*s); j++) {
            if (s[i] > s[j]) {
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    
    while (low <= high) {
        int middle = (high - low) / 2 + low; // 直接使用(high + low) / 2 可能导致溢出
        if (s[middle] == goal) {
            return middle;
        }
        //在左半边
        else if (s[middle] > goal) {
            high = middle - 1;
        }
        //在右半边
        else {
            low = middle + 1;
        }
    }

    
    return goal;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
