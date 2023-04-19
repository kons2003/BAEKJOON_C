// 과제 안 내신 분..?
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int att[31] = { 0 };
	int stu;

	for (int i = 1; i <= 28; i++)
	{
		scanf("%d", &stu);
		att[stu] = stu;
	}

	for (int i = 1; i <= 30; i++)
		if (att[i] == 0)
			printf("%d\n", i);

	return 0;
}