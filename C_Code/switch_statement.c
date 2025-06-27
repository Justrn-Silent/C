#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int num;
	printf("请选择：1.加法 2.减法 3.乘法 4.除法\n");
    	scanf("%d", &num);
        switch (num) {
        case 1:
            printf("加法函数功能实现\n");
            break;
        case 2:
            printf("减法函数功能实现\n");
            break;
        case 3:
            printf("乘法函数功能实现\n");
            break;  //break是跳出switch语句，如果不写break关键字，会继续执行下一个case，遇到break为止
        case 4:
            printf("除法函数功能实现\n");
            break;
        default:
            printf("输入错误\n");
        }
	return 0;
}