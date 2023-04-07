// 알람 시계
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int h, m;
	int ch, cm;

	scanf("%d %d", &h, &m);

	ch = h;
	cm = m - 45;
	if (ch != 0 && cm < 0)
	{
		ch--;
		cm += 60;
	}
	else if (ch <= 0 && cm < 0)
	{
		ch += 23;
		cm += 60;
	}

	printf("%d %d", ch, cm);
	return 0;
}