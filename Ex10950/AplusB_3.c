// A+B - 3
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int t;
	scanf("%d", &t);


	int a[100000] = { 0, };
	int b[100000] = { 0, };

	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &a[i], &b[i]);
	}

	for (int i = 0; i < t; i++)
	{
		printf("%d\n", a[i] + b[i]);
	}

	return 0;
}