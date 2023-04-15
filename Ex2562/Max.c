// ÃÖ´ñ°ª
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n[10] = { 0 };
	int max = 0;
	int cnt = 0;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &n[i]);
		if (max < n[i])
		{
			max = n[i];
			cnt = i + 1;
		}
	}

	printf("%d\n", max);
	printf("%d\n", cnt);

	return 0;
}