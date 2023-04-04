// º° Âï±â - 2
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int star = 0;
	scanf("%d", &star);

	for (int i = 1; i <= star; i++)
	{
		for (int j = 1; j <= (star - i); j++)
		{
			printf(" ");
		}
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}


    return 0;
}