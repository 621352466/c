#define _CRT_SECURE_NO_WARNINGS
#include<time.h>
#include<stdlib.h>//���������

#include<stdio.h>
#define MAX 100

double average(double a, double b) {
	return((a + b) / 2);
}

void decompos(double a, long b, double c) {
	b = (long)a;
	c = a - b;

	
}
int secret;
void secret_number();
void guess();

int main() {
	/*double x = 1.0;
	double y = 2.5;
	printf("%f", average(x, y));*/

	//time_t timer = time(NULL);
	//srand((size_t)timer);
	//������������
	//srand((size_t)time(NULL));

	//for (int i = 0; i < 50; i++) {
	//	printf("%d\n", rand()%51+50);//50-100
	//}

	//˫ɫ�� 6������ 1-32 1������ 1-16
	/*int arr[6] = { 0 };
	int value = 0;
	srand((size_t)time(NULL));
	for (int i = 0; i < 6; i++) {
		
		value = rand()%32+1;
		for (int j = 0; j <= i; j++) {
			if (arr[j] == value) {
				i--;
				break;
			}
			if (i == j) {
				arr[i] = value;
			}
		}
	}*/
	/*printf("��ɫ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
		}
	printf("\n��ɫ%d ", rand() % 16 + 1);*/

	//double���͵�������С���ֿ����
	/*double a = 3.1415;
	long b;
	double c;
	decompos(a, b, c);*/
	//�ββ��ܸı�ʵ��

	/*int a[5] = { [2] = 2 };
	int len = sizeof(a) / sizeof(a[0]);
	printf("%d",  sum_array(a, len));*/

	char a;
	printf("guess number between 1-100\n");

	do {
		secret_number();
		printf("a number has been chosen\n");
		guess();
		printf("play again? yes/no");
		scanf(" %c", &a);
	} while (a == 'yes' || a == 'no');



	return 0;
}

void secret_number() {
	srand((size_t)time(NULL));
	secret = rand() % MAX + 1;
}

void guess() {
	int guess, count = 0;
	for (;;) {
		printf("Enter your guess\n");
		scanf("%d", &guess);
		count++;
			if (guess > secret) {
				printf("too high\n");
			}
			else if (guess < secret) {
				printf("too low\n");
			}
			else{
				printf("win %d��\n", count);
		}
	}
}