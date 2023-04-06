// 사분면 고르기
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int x, y;

	scanf("%d", &x);
	scanf("%d", &y);

	if ((-1000 <= x && x <= 1000 && x != 0) && (-1000 <= y && y <= 1000 && y != 0))
	{
		if (0 < x && 0 < y)
			printf("1\n");
		if (x < 0 && 0 < y)
			printf("2\n");
		if (x < 0 && y < 0)
			printf("3\n");
		if (0 < x && y < 0)
			printf("4\n");
	}

	return 0;
}