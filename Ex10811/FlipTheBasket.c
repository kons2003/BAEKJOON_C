// �ٱ��� ������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n, m;
	int i, j, k, l;
	int tmp = 0;
	int basket[102] = { 0 };

	scanf("%d %d", &n, &m);

	// 1~n���� ������� �ٱ��Ͽ� ����
	for (k = 1; k <= n; k++)
		basket[k] = k;

	// i, j �� �Է�
	for (k = 1; k <= m; k++)
	{
		scanf("%d %d", &i, &j);

		while (i <= j) // i���� j���� ���� ����
		{
			tmp = basket[i];
			basket[i] = basket[j];
			basket[j] = tmp;
			i++;
			j--;
		}
	}

	// ��� ���
	for (k = 1; k <= n; k++)
		printf("%d ", basket[k]);

	return 0;
}