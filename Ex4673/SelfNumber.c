// ¼¿ÇÁ ³Ñ¹ö
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int sum(int n)
{
	int sum = n;

	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	int arr[10001] = { 0, };
	int i, check = 0;

	for (i = 1; i <= 10000; i++)
	{
		check = sum(i);
		if (check <= 10000)
			arr[check] = 1;

		if (arr[i] != 1)
			printf("%d\n", i);
	}

	return 0;
}