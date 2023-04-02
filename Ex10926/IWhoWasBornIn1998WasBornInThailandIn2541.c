// 1998년생인 내가 태국에서는 2541년생?!
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int be; // 불기
    int ce = 0; // 서기

    scanf("%d", &be);

    ce = be - 543; // 서기 = 불기 - 543

    printf("%d", ce);

    return 0;
}