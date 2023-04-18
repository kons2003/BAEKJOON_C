// ¾ËÆÄºª Ã£±â
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char s[102] = { 0 };
	int i, j;

	scanf("%s", &s);

	for (i = 97; i <= 122; i++)
	{
		j = 0;

		while (s[j] != 0 )
		{
			if (s[j] == (char)i )
				break;
			j++;
		}
		if (s[j] == (char)i)
			printf("%d ", j);
		else
			printf("%d ", (-1));
	}

	return 0;
}