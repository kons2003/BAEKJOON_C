// ¿Àºì ½Ã°è
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b, c;
	int ac, bc;

	scanf("%d %d", &a, &b);
	scanf("%d", &c);

	ac = a + (b + c) / 60;
	bc = (b + c) % 60;

	if (ac >= 24)
	{
		ac -= 24;
	}

	printf("%d %d", ac, bc);

	return 0;
}