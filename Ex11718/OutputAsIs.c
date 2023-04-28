// 그대로 출력하기
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char str;

	while (scanf("%c", &str)!=-1)
		printf("%c", str);

	return 0;
}