//최대공약수와 최소공배수
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int num1, num2;
	int gcd = 0;
	int lcm = 0;
	scanf("%d %d", &num1, &num2);

	for (int i = 2; i <= num1 && i <= num2; i++)
		if (num1 % i == 0 && num2 % i == 0)
			gcd = i;
	

	lcm = (num1 * num2) / gcd;

	printf("%d\n", gcd);
	printf("%d\n", lcm);

	return 0;
}