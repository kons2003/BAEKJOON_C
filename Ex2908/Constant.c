// »ó¼ö
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b;
	int x=0, y=0;

	scanf("%d %d", &a, &b);

	for (int i = 0; i < 3; i++)
	{
		x *= 10;
		y *= 10;
		x += a % 10;
		y += b % 10;
		a /= 10;
		b /= 10;
	}

	if (x > y)
		printf("%d\n", x);
	else
		printf("%d\n", y);

	return 0;
}