// 영수증
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int x, n; // 총 금액, 종류 수
    int a, b; // 가격, 개수
    int sum = 0;

    scanf("%d", &x);
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        sum += a * b;
    }

    if (x == sum)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}