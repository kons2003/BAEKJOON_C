// OXÄûÁî
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	int n;
	char test[81] = "";
	int cnt = 0;
	int result = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		cnt = 0;
		result = 0;
		scanf("%s", &test);
		for (int j = 0; j < strlen(test); j++)
		{
			if (test[j] == 'O')
			{
				cnt++;
				result += cnt;
			}
			else
				cnt = 0;
		}
		printf("%d\n", result);
	}

	return 0;
}