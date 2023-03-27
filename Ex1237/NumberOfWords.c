// 단어의 개수
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
    int count = 0;
    char str[10000];

    scanf("%s", &str);

    for (int i = 1; i <= strlen(str); i++)
    {
        if (str[i] == ' ')
            count++;
        else
            continue;
    }
    printf("%d\n", count);

    return 0;
}