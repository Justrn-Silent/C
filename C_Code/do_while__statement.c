#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    	int a = 0;
    	int b = 1;
		printf("请输入循环次数：\n");
		scanf("%d",&a);
	do {
		printf("第%d次\n",b);
		b++;
		a--;
	} while (a);
	printf("----------------------\n");
	/*
	do-while循环
	是一个特殊的循环语句
	先执行一次循环体
    再判断循环条件
	*/
	do {
		printf("do语句内被执行！！");
	} while (0);
	return 0;
}