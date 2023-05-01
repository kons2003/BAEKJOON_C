// 2007³â
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int x, y;
	int month[13] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	char *week[8] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

	scanf("%d %d", &x, &y);

	for (int i = 0; i < x - 1; i++)
	{
		y += month[i];
	}

	printf("%s\n", week[y % 7]);

	return 0;
}