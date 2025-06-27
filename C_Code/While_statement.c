#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int a = 0;
	int b = 1;
	printf("请输入循环次数：\n");
	scanf("%d",&a);
	while (a) {
		printf("第%d次\n",b);
		a--;
		b++;
	}
	/*
	语句运行流程：
	while(条件为真true，或者结果为非零){
	
		自增运算;----->>必须要有自增或者自减运算不然有可能程序进入死循环


		}
	程序执行到while先判断条件是否成立，成立即执行否则不执行
	拓展：前置自增，后置自增/前置自减，后置自减
	a++:先用后加
	++a:先加后用
	详细分析：
	a++:
	a=a
	a=a+1
	++a:
	a=a+1
	a=a

	*/
	/***************************************************************/
	//break与continue的区别
	while (1) {
		int i = 0;
		printf("请c猜一个数字：\n");
		scanf("%d", &i);
		if (i != 66) {
			continue;	
		}
		printf("猜对了");
		break;
	}
	/*
	break---->>在条件语句中是停止的意思同理在循环中亦是如此，跳出这个循环语句
	continue----->>在循环语句中指的是跳过下面的代码,回到循环继续进行
	*/
return 0;
}