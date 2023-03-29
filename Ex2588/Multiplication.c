// °ö¼À
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int n1, n2;
    int mul1, mul2, mul3;

    scanf("%d", &n1);
    scanf("%d", &n2);

    mul1 = n1 * (n2 % 10);
    mul2 = n1 * (n2 / 10 % 10);
    mul3 = n1 * (n2 / 100);

    printf("%d\n", mul1);
    printf("%d\n", mul2);
    printf("%d\n", mul3);
    printf("%d\n", mul1 + mul2*10 + mul3*100);

    return 0;
}