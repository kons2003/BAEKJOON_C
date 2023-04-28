// 문자열 반복
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	int t, r;
	char arr[21] = "";

	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &r);
		scanf("%s", &arr);
		for (int j = 0; j < strlen(arr); j++)
		{
			for (int k = 0; k < r; k++)
			{
				printf("%c", arr[j]);
			}
		}
		printf("\n");
	}

	return 0;
}