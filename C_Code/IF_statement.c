﻿#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	/*
	伪代码IF语句：
    	1. 输入一个整数
    	2. 如果这个整数是正数
    	3. 输出结果
    伪代码IF-ELSE语句：
    	1. 输入一个整数
    	2. 如果这个整数是正数
    	3. 输出结果
    	4. 否则
    	5. 输出不是正数
	伪代码多嵌套IF语句：
    	1. 输入一个数
    	2. 如果这个整数是整数
    	3. 如果这个整数是正数
    	4. 输出结果
    	5. 如果这个整数是负数
    	6. 输出结果
        7. 否则
        8. 输出非整数
    伪代码多嵌套IF-ELSE语句：
    	1. 输入一个数
    	2. 如果这个数是整数
    	3. 如果这个整数是正数
        4 .输出结果
        5. 否则
        6. 输出不是正数
        7. 否则
        8. 输出不是整数
	*/
    int a = 0;
    printf("请输入一个数：");
    scanf("%d", &a);
    if (a > 0) {
        printf("正数\n");
    }
    if (a > 0) {
        printf("正数\n");
    }
    else {
        printf("非正数\n");
    }
    printf("-----------------------------------------\n");
    int b = 0;
    printf("请输入一个数：");
    scanf("%d", &b);
    if (b % 2 == 0) {
        printf("偶数\n");
    }else if(b%3==0){
        printf("3的倍数\n");
    }else{
        printf("奇数\n");
    }
    /*
    IF语句有：
    if-else
    if
    if-else if
    其中if-else if是if-else的升级版
    if语句运行逻辑：
    if(结果为:真True，或者是结果为非零){}
    */
	return 0;
}