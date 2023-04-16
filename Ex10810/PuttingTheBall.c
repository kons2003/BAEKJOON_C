// °ø ³Ö±â
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int basket[102] = { 0 };
	int n, m, i, j, k, l;

	scanf("%d %d", &n, &m);

	for (l = 0; l < m; l++)
	{
		scanf("%d %d %d", &i, &j, &k);
		for (; i <= j; i++)
			basket[i] = k;
	}

	for (l = 1; l <= n; l++)
		printf("%d ", basket[l]);
	printf("\n");

	return 0;
}