// 주사위 세개
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n1, n2, n3;
	int max = 0, result = 0;

	scanf("%d %d %d", &n1, &n2, &n3);



	if (n1 == n2 && n2 == n3)
		result = 10000 + n1 * 1000;
	else if (n1 == n2 || n1 == n3 || n2 == n3)
	{
		if (n1 == n2 || n1 == n3)
			result = 1000 + n1 * 100;
		else if (n2 == n3)
			result = 1000 + n2 * 100;
	}
	else if (n1 != n2 && n1 != n3 && n2 != n3)
	{
		if (n1 >= max)
		{
			max = n1;
			if (n2 >= max)
			{
				max = n2;
				if (n3 >= max)
					max = n3;
			}
			else if (n3 >= max)
				max = n3;
		}

		result = max * 100;
	}

	printf("%d", result);

	return 0;
}