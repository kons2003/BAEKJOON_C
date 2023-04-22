// ЦђБе
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n, m = 0;
	double sum = 0.0;
	double avg = 0.0;
	int score[1002] = { 0 };

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &score[i]);

	for (int i = 1; i <= n; i++)
		if (score[i] > m)
			m = score[i];

	for (int i = 1; i <= n; i++)
		sum += (double)score[i] / m * 100;

	avg = sum / n;

	printf("%lf\n", avg);

	return 0;
}