// À½°è
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n[9] = { 0 };
	int asc = 0, des = 0;
	int i = 0, j = 0;

	for (i = 1; i <= 8; i++)
		scanf("%d", &n[i]);

	for (i = 1; i <= 8; i++)
	{
		if (n[i] == i)
		{
			asc++;
			continue;
		}
		else if (8 - n[i] == j)
		{
			des++;
			j++;
			continue;
		}
	}

	if (asc == 8)
		printf("ascending\n");
	else if (des == 8)
		printf("descending\n");
	else
		printf("mixed\n");

	return 0;
}