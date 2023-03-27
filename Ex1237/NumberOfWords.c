// 단어의 개수
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
    char arr[1000002];
    int len, count = 0;
    int i = 0;

    scanf("%[^\n]", &arr);
    len = strlen(arr);

    if (len == 1) { 
        if (arr[i] == ' ') {
            printf("0\n");
            return 0;
        }
    }

    for (i = 1; i < len - 1; i++) {
        if (arr[i] == ' ') {
            count++;
        }
    }

    printf("%d\n", count+1);

    return 0;
}