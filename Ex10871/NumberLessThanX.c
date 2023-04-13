// X보다 작은 수
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n, x;
	int a[10002] = { 0 };

	scanf("%d %d", &n, &x);
	for (int i = 0; i < n; i++)
	{
		scanf("%d ", &a[i]);
		if (a[i] < x )
		{
			printf("%d ", a[i]);
		}
	}

	return 0;
}