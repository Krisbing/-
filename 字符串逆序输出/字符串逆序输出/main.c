//
//  main.c
//  字符串逆序输出
//
//  Created by 贺兵 on 2017/9/14.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void reverse(char s[])
{
    if (s != NULL) {
        
        char *p = s;
        char *q = s;
        while (*q != '\0') {
            
            q++;
        }
        q--;
        
        // 交换并移动指针，直到p和q交叉
        while(q > p) {
            char t = *p;
            *p = *q;
            *q = t;
            p++;
            q--;
        }
        
        printf("s == %s\n",s);
    }
}

int main(int argc, const char * argv[]) {

    char s[] = "hello world!";
    reverse(s);
    
    return 0;
}
