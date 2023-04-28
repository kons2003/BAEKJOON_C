// ´ÙÀÌ¾ó
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	char str[16] = "";
	int t = 0;

	scanf("%s", &str);
	for (int i = 0; i < strlen(str); i++)
	{
		if ('A' <= str[i] && str[i] <= 'C')
			t += 1 + 2;
		else if ('D' <= str[i] && str[i] <= 'F')
			t += 2 + 2;
		else if ('G' <= str[i] && str[i] <= 'I')
			t += 3 + 2;
		else if ('J' <= str[i] && str[i] <= 'L')
			t += 4 + 2;
		else if ('M' <= str[i] && str[i] <= 'O')
			t += 5 + 2;
		else if ('P' <= str[i] && str[i] <= 'S')
			t += 6 + 2;
		else if ('T' <= str[i] && str[i] <= 'V')
			t += 7 + 2;
		else if ('W' <= str[i] && str[i] <= 'Z')
			t += 8 + 2;
	}

	printf("%d\n", t);

	return 0;
}