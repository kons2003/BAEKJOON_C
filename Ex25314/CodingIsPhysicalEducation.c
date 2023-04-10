// 코딩은 체육과목 입니다
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
    int n;
    scanf("%d", &n);
    char l[5] = "long";

    for (int i = 0; i < n / 4; i++)
    {
        printf("%s ", l);
    }
    printf("int");

    return 0;
}