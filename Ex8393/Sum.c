// n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
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
		printf("n�� ���� 1 ~ 10,000 ������ �Է��ϼ���.\n");
	}
	return 0;
}