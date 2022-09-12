#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//signal是一个函数声明
//signal函数的参数有两个 一个int一个函数指针 该函数指针指向的函数的参数是int 返回类型是void
//signal函数的返回类型也是一个函数指针 该函数指针指向的函数的参数是int 返回类型是void
void(*signal(int, void(*)(int)))(int);

//简化
typedef void(*pfun_t)(int);
pfun_t signal(int, pfun_t);
int main() {
	

	
}