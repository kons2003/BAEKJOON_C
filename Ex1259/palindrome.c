#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	int j, check; // j�� �迭���� ����, check�� ���� Ʋ�� ����
	char value[10000];

	while (scanf("%s", &value) && value[0] != '0')
	{
		check = 1;
		j = strlen(value);

		for (int i = 0; i < (j/2); i++)
		{
			if (value[i] != value[j-1-i])
			{
				check = 0;
				break;
			}
		}
		if (check == 1)
		{
			printf("yes\n");
		}
		else if (check == 0)
		{
			printf("no\n");
		}


	}

	return 0;
}