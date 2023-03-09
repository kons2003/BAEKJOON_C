#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B;
	scanf("%d %d", &A, &B);
	double result = (double)A / B;
	printf("%.9lf\n", result);

	return 0;
}