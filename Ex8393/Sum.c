// n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n;
	int sum = 0;

	scanf("%d", &n);
	
	if (1<=n && n<=10000)
	{
		for (int i = 1; i <= n; i++)
		{
			sum += i;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("n의 값을 1 ~ 10,000 내에서 입력하세요.\n");
	}
	return 0;
}