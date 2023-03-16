#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n; // 숫자를 입력받음
	int fst[100000]; // 입력 받은 값을 배열에 저장
	int tmp; // fst의 값을 임시 저장할 빈 공간
	int re = 0; // 뒤집은 숫자


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