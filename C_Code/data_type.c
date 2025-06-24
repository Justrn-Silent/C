#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
int main() {
	/*
	整数类型：
    		1. short 2字节 有效范围：-32768~32767
    		2. int 4 有效范围：-2147483648~2147483647
    		3. long 4 有效范围：-2147483648~2147483647
    		4. long long 8 有效范围：-9223372036854775808~9223372036854775807
     浮点类型：
            1. float 4 有效范围：-3.4E+38~3.4E+38
            2. double 8 有效范围：-1.7E+308~1.7E+308
            3. long double 16 有效范围：-1.7E+308~1.7E+308
     字符类型：
            1. char 1 有效范围：-128~127(对应ASCII码)
     枚举类型：
            1. enum 枚举类型名 {枚举元素1，枚举元素2，...} 变量名;
     void类型：
            1. void 表示空类型，通常用于函数的返回类型，表示该函数不返回任何值
     _Bool类型：
            1. _Bool 1 有效范围：0或1(表示真或假即true或false)使用要导入头文件：<stdbool.h>
     以上为基本数据类型，如果超出有效范围将会出现内存溢出的情况，通常为显示负数乱码！！
	*/
    int a = 10;
    printf("a = %d\n", a);
    short b = 20;
    printf("b = %d\n", b);
    long c = 30;
    printf("c = %ld\n", c);
    long long ll = 40;
    printf("d = %lld\n", ll);
    float f = 3.14159265351f;  //如果不加f后缀，编译器会默认为double类型，所以任何浮点数编译器都认为是double类型
    printf("f = %f\n", f);
    double d = 3.14159265351;
    printf("d = %lf\n", d);
    /*
    关于float和double的精度问题：
    当用%f输出时，输出的是小数点后六位，当用%lf时，输出的是小数点后六位
    所有看不出有什么精度丢失的情况
    当修改代码：
    */
    float f_new = 3.14159265351f;  //添加f后缀表示这是一个float类型的数
    printf("f_new = %.10f\n", f_new);
    double d_new = 3.14159265351;
    printf("d_new = %.10lf\n", d_new);
    /*
    这个时候就会出现精度丢失情况：
    e_new = 3.1415927410
    f_new = 3.1415926535

    */
    char g = 'a';
    printf("g = %c\n", g);//当用%c输出时，输出的是字符的ASCII码值，当用%d时，输出的是字符的ASCII码值
    _Bool h = 1;
    printf("h = %d\n", h);
    printf("对比得：%s\n",h==true?"true":"false");  //_bool类型认为：1为true，0为false

    return 0;

}