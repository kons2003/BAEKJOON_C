#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n; // ���ڸ� �Է¹���
	int fst[100000]; // �Է� ���� ���� �迭�� ����
	int tmp; // fst�� ���� �ӽ� ������ �� ����
	int re = 0; // ������ ����


	while (true)
	{
	

		for (int i = 0; ; i++)
		{
			if (n != 0)
			{
				scanf("%d\n", &n);
			}
			else if (n == 0)
				break;

			fst[i] = n;
		}

		for (int i = 0; ; i++)
		{
			tmp = fst[i];

			while (fst[i]!=0)
			{
				re = fst[i] % 10;
				fst[i] /= 10;
			}

			if (tmp == re)
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}

	}

	return 0;
}