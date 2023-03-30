// 윤년
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int year;

    scanf("%d", &year);
    
    if (1<=year && year<=4000)
    {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
            printf("1\n");
        else
            printf("0\n");
    }
    else
        printf("다시 입력해주세요.\n");
    return 0;
}