//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void decompose(double a, int* p, double* j);
//int main() {
//	//ָ��������� C ����Ҫ��ÿ��ָ�����ֻ��ָ��һ���ض����ͣ��������ͣ��Ķ���
//	//int* p;
//	//double* q;
//	//char* j;
//	//һ��ֻ����һ��ָ����� int* p,qֻ��p��ָ�����
//	//ʹ��ǰ��Ҫ����
//	//int i;
//	//p = &i;
//	//����ͬʱ
//	//int i;
//	//int* p = &i;
//	
//	//ȡ��ַ�����&
//	//���Ѱַ�����*Ҳ�н����������
//	//printf("%d", *p);//*p == i
//	//&*��Ϊ������
//	//j = &*i//��ͬ��j=i
//
//	//ֻҪ*pָ��i *p����i�ı�����**p����ӵ��iһ����ֵ������p�ĸı�Ҳ��ı�i
//	//int i;
//	//int* p = &i;
//	//printf("%d\n", i);
//	//printf("%d\n", *p);//i = *p
//
//	//*p = 2;
//	//printf("%d\n", i);
//	//printf("%d\n", *p);//2
//	//��������ָ��ǳ��಻֪���Ǹ������Ͽ�������
//	/*int* p = NULL;
//	if (p != NULL) {
//
//	}*/
//
//	//ָ�븳ֵ
//	//��ͬ���͵�ָ��������Ը�ֵ
//	/*int i;
//	int* p = &i;
//	int* q;
//	q = p;*/
//	//����
//	//int* p = q;
//
//	//int i = 0;
//	//int* p = &i;
//	//int* q = p;
//	//printf("now i = %d\n", i);
//	//printf("now p = %d\n", *q);
//	//// �����0 0
//	//*q = 2;
//	//printf("now i = %d\n", i);
//	//printf("now p = %d\n", *q);
//	//printf("now p = %d\n", *p);
//	//*p = *q�ǰ�pָ��Ķ���i����ֵ����qָ��Ķ��� ��p=q��һ��
//
//	double a = 23.3;
//	int i;
//	double j;
//	decompose(a, &i, &j);
//	printf("%lf %d %lf", a, i, j);
//
//	//ָ�봫��ʱ������ʹ�� const��������������ı�ָ�������ָ��Ķ��� const Ӧ�����β���
//	//const int* pʹ*p���ܱ��޸�
//	//int* const pֻ��ʹp��ָ���ܱ��޸�
//	return 0;
//}
//
//void decompose(double a, int* p, double* j) {
//	*p = (long)a;
//	*j = a - *p;
//}
