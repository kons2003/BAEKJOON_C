// �Ѽ�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a, b, c;
    int cnt = 99; // 1~99������ �Ѽ���.

    // 100�� �ڸ� ����. *1000�� �Ѽ� �ƴ϶� ���X
    for (int i = 100; i <= n; i++)
    {
        a = i / 100; // ���� �ڸ�
        b = i / 10 % 10; // ���� �ڸ�
        c = i % 10; // ���� �ڸ�

        if (a - b == b - c)
            cnt++;
    }

    if (n < 100)
        printf("%d", n);
    else
        printf("%d", cnt);

    return 0;
}