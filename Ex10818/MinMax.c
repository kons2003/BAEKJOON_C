// 최소, 최대
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int num = 0;
	int min = 1000000, max = -1000000;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		if (num < min)
			min = num;
		if (num > max)
			max = num;
	}
	printf("%d %d\n", min, max);

	return 0;
}