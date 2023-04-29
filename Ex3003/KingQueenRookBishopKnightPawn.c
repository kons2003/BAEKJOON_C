// Å·, Äý, ·è, ºñ¼ó, ³ªÀÌÆ®, Æù
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int origin[7] = { 1, 1, 2, 2, 2, 8 };
	int old[7] = { 0 };

	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &old[i]);
		printf("%d ", origin[i] - old[i]);
	}
	printf("\n");

	return 0;
}