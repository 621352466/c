#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//signal��һ����������
//signal�����Ĳ��������� һ��intһ������ָ�� �ú���ָ��ָ��ĺ����Ĳ�����int ����������void
//signal�����ķ�������Ҳ��һ������ָ�� �ú���ָ��ָ��ĺ����Ĳ�����int ����������void
void(*signal(int, void(*)(int)))(int);

//��
typedef void(*pfun_t)(int);
pfun_t signal(int, pfun_t);
int main() {
	

	
}