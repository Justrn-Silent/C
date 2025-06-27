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

	/***************************************************************/
	//break与continue的区别
	do {
		int i = 0;
		printf("请c猜一个数字：\n");
		scanf("%d", &i);
		if (i != 66) {
			continue;
		}
		printf("猜对了");
		break;
	} while (1);
	/*
	break---->>在条件语句中是停止的意思同理在循环中亦是如此，跳出这个循环语句
	continue----->>在循环语句中指的是跳过下面的代码,回到循环继续进行
	*/
	return 0;

}