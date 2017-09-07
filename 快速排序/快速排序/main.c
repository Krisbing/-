//
//  main.c
//  快速排序
//
//  Created by 贺兵 on 2017/8/29.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#include <stdio.h>
// s数组,l左边界,r右边界 快速排序
void quick_sort(int s[],int l,int r)
{
    if (l < r) {
        //Swap(s[l], s[(l + r) / 2]); //将中间的这个数和第一个数交换 参见注1
        int i = l, j = r, x = s[l];
        while (i < j) {
            while(i < j && s[j] >= x) {// 从右向左找第一个小于x的数
                j--;
            }
            if(i < j) {
                s[i] = s[j];//将s[j]填到s[i]中，s[j]就形成了一个新的坑
            }
            
            while(i < j && s[i] < x) {// 从左向右找第一个大于等于x的数
                i++;
            }
            if(i < j) {
                s[j] = s[i];//将s[i]填到s[j]中，s[i]就形成了一个新的坑
            }
        }
        s[i] = x;
        quick_sort(s, l, i - 1); // 递归调用
        quick_sort(s, i + 1, r);
    }
}

int main(int argc, const char * argv[]) {

    int array[] = {2,17,12,34,51,22,1};
    quick_sort(array, 0,sizeof(array)/sizeof(*array) - 1);
    
    return 0;
}
