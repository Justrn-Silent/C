#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>	
int main() {
	int sc = 0;
	printf("请输入一个整数：");
    scanf("%d", &sc); 
	/*
	关于scanf函数：
    	1. scanf函数的返回值是成功读入的数据个数
    	scanf("%d", &sc);  //成功读入一个整数，返回1
    	scanf("%d %d", &sc, &sc);  //成功读入两个整数，返回2
        当读取失败时候返回0
		其中scanf("%d", &sc); 中的&sc表示取sc的地址，将输入的整数存储到sc的地址中，接收类型是%d
		还有其他接收格式：
		%d : 整数
        %c : 字符
        %f : 浮点数
        %lf : 双精度浮点数
        %s : 字符串
        %p : 指针
        注意的是，在Scanf函数中在接收浮点型的数据类型时候，%f和%lf都可以接收，但是%f只能接收单精度浮点数(float)，%lf可以接收双精度浮点数(double)
        在printf，%f和%lf都可以输出，默认都是会转换为double
        在Scanf函数中如果用%lf去接收%f会报错，主要原因在内存上：
    float f = 0; -----------------------1
    printf("请输入一个浮点数：");---------------2
    scanf("%lf",&f);---------------3
    printf("你输入的浮点数是：%lf\n", f);------------4
        在内存中首先float在内存中会给出四个字节的空间储存
        当你输入时候Scanf接收的类型是double类型所以会给出八字节接收
        当四字节的内容传给八字节的内容时候会出现意外接收
        比如说输入：3.14---->>float
        四字节
        --------------------------
        |     |     |     |      | ---->>假设刚刚好是3.14
        --------------------------
        八字节
        --------------------------------------------------
        |     |     |     |      |     |     |     |     | ----->>八字节前四节可能是3.14，后四节可能是内存其他数据
        --------------------------------------------------
        从而导致输出乱码，或者警告

	*/
    printf("你输入的整数是：%d\n", sc);
        float f = 0; 
        printf("请输入一个浮点数：");
        scanf("%lf", &f); 
        printf("你输入的浮点数是：%lf\n", f); 
        /*
        Debug Error!
        Program:
        F:\c Codelc\c code\x64\Debug\c Code.exeModule: F:\c Code\c\c Code\x64\Debug\c Code.exeFile:
        Run-Time Check Failure #2 - Stack around the variable 'f' was corrupted
        (Press Retry to debug the application)
        */
 
}