//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void decompose(double a, int* p, double* j);
//int main() {
//	//指针变量声明 C 语言要求每个指针变量只能指向一种特定类型（引用类型）的对象
//	//int* p;
//	//double* q;
//	//char* j;
//	//一行只声明一个指针变量 int* p,q只有p是指针变量
//	//使用前就要声明
//	//int i;
//	//p = &i;
//	//或者同时
//	//int i;
//	//int* p = &i;
//	
//	//取地址运算符&
//	//间接寻址运算符*也叫解引用运算符
//	//printf("%d", *p);//*p == i
//	//&*互为逆运算
//	//j = &*i//等同于j=i
//
//	//只要*p指向i *p就是i的别名。**p不仅拥有i一样的值，而且p的改变也会改变i
//	//int i;
//	//int* p = &i;
//	//printf("%d\n", i);
//	//printf("%d\n", *p);//i = *p
//
//	//*p = 2;
//	//printf("%d\n", i);
//	//printf("%d\n", *p);//2
//	//如果定义的指针非常多不知道那个会用上可以这样
//	/*int* p = NULL;
//	if (p != NULL) {
//
//	}*/
//
//	//指针赋值
//	//相同类型的指针变量可以赋值
//	/*int i;
//	int* p = &i;
//	int* q;
//	q = p;*/
//	//或者
//	//int* p = q;
//
//	//int i = 0;
//	//int* p = &i;
//	//int* q = p;
//	//printf("now i = %d\n", i);
//	//printf("now p = %d\n", *q);
//	//// 输出：0 0
//	//*q = 2;
//	//printf("now i = %d\n", i);
//	//printf("now p = %d\n", *q);
//	//printf("now p = %d\n", *p);
//	//*p = *q是吧p指向的对象（i）的值赋给q指向的对象 和p=q不一样
//
//	double a = 23.3;
//	int i;
//	double j;
//	decompose(a, &i, &j);
//	printf("%lf %d %lf", a, i, j);
//
//	//指针传参时，可以使用 const来表明函数不会改变指针参数所指向的对象。 const 应放于形参中
//	//const int* p使*p不能被修改
//	//int* const p只能使p的指向不能被修改
//	return 0;
//}
//
//void decompose(double a, int* p, double* j) {
//	*p = (long)a;
//	*j = a - *p;
//}
