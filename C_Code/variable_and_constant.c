﻿#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
const int B = 100;
int a = 100;
int main() {
	/*
在C语言中程序是由初始化头文件再调用main函数，从main函数依此由上到下运行
变量有：
	局部变量和全局变量
	局部变量：在函数内部定义的变量，其作用域仅限于函数内部，函数执行完毕后，局部变量被销毁
    全局变量：在函数外部定义的变量，其作用域为整个程序，从定义开始到程序结束，全局变量可以被任何函数访问
	判断局部与全局一般都要有函数介入
	main函数就是一个例子：
	当某一个变量定义在main函数外时候，这个变量即为全局变量
	如果在main函数内，即为局部变量
	其他自行定义的函数亦是如此
	*/
	int a = 10;
	printf("%d\n",a); //当同名变量一个是局部一个是全局优先调用局部
	/*
常量：
    	常量：在C语言中，常量是指在程序运行过程中其值不能被改变的量
        	常量分为：
			------------------------------
        	const 修饰的常变量
			#define 定义的标识符常量
			字面常量
			枚举常量
            ------------------------------
	const 修饰的常变量：
			使用const修饰的变量，其值在定义后不能被修改，称为常变量
	
	*/
	//B = 200; const修饰的常变量，其值在定义后不能被修改，如果修改会报错
	printf("%d\n", B); 
	/*
	生命周期：
	所有程序或者变量都有生命周期：
	局部变量的生命周期是当函数调用时候创建，函数调用完时候销毁
    全局变量的生命周期是当程序运行时候创建，程序结束时候销毁
	const修饰的常变量的生命周期是当程序运行时候创建，程序结束时候销毁
	*/
	return 0;
}