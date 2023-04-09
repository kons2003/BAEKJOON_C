// 한수
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a, b, c;
    int cnt = 99; // 1~99까지는 한수임.

    // 100의 자리 구함. *1000은 한수 아니라서 계산X
    for (int i = 100; i <= n; i++)
    {
        a = i / 100; // 백의 자리
        b = i / 10 % 10; // 십의 자리
        c = i % 10; // 일의 자리

        if (a - b == b - c)
            cnt++;
    }

    if (n < 100)
        printf("%d", n);
    else
        printf("%d", cnt);

    return 0;
}