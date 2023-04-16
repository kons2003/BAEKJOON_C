// 공 바꾸기
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n, m, i, j, k;
	int tmp = 0;
	int basket[102] = { 0 };

	scanf("%d %d", &n, &m);

	// 바구니 번호 순서대로 넣기
	for (k = 1; k <= n; k++)
		basket[k] = k;

	for (k = 1; k <= m; k++)
	{
		scanf("%d %d", &i, &j);
		tmp = basket[i];
		basket[i] = basket[j];
		basket[j] = tmp;
	}

	for (k = 1; k <= n; k++)
		printf("%d ", basket[k]);
	printf("\n");

	return 0;
}