// 숫자의 개수
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b, c;
	int mul = 0;
	int arr[11] = { 0, };
	int num = 0;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	mul = a * b * c;

	while (mul > 0)
	{
		num = mul % 10;
		arr[num]++;
		mul /= 10;
	}

	for (int i = 0; i <= 9; i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}