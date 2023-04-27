// 숫자의 합
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n;
	char num[102] = { 0 };
	int sum = 0;

	scanf("%d", &n);
	scanf("%s", &num);
	for (int i = 0; i < n; i++)
	{
		sum += (num[i] - '0');
	}

	printf("%d\n", sum);

	return 0;
}