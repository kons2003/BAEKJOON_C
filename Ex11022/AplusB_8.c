// A+B - 8
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int t, a, b;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
    }

    return 0;
}