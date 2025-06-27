#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int a = 0;
	printf("请输入循环次数：\n");
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		printf("第%d次\n",i+1);
	}
	/*
	for (初始化; 条件判断; 迭代更新) {
		// 循环体
	}
	初始化（int i = 0）：只执行一次，在循环开始前执行。
	条件判断（i < a）：
	如果为真（true），执行循环体；
	如果为假（false），结束整个 for 循环。
	循环体（printf("%d\n", i+1);）：执行一次循环体代码。
	迭代更新（i++）：每次循环结束后执行，用于更新变量（通常是计数器）。
	回到步骤2，继续判断条件。
	------------------------------------------
	for(;;){}  ----->>死循环等价于while(1){}
	*/
	return 0;
}