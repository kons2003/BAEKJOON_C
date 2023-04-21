// 바구니 뒤집기
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n, m;
	int i, j, k, l;
	int tmp = 0;
	int basket[102] = { 0 };

	scanf("%d %d", &n, &m);

	// 1~n까지 순서대로 바구니에 저장
	for (k = 1; k <= n; k++)
		basket[k] = k;

	// i, j 값 입력
	for (k = 1; k <= m; k++)
	{
		scanf("%d %d", &i, &j);

		while (i <= j) // i부터 j까지 역순 저장
		{
			tmp = basket[i];
			basket[i] = basket[j];
			basket[j] = tmp;
			i++;
			j--;
		}
	}

	// 결과 출력
	for (k = 1; k <= n; k++)
		printf("%d ", basket[k]);

	return 0;
}