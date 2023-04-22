// 문자와 문자열
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char s[1002] = "";
	int i;

	scanf("%s", &s);
	scanf("%d", &i);

	printf("%c", s[i - 1]);

	return 0;
}