// 평균 점수
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int score;
	int sum = 0; 
	int avg = 0;

	

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &score);
		if (0 <= score && score <= 100)
		{
			if (40 <= score)
				sum += score;
			else if (score < 40)
			{
				score = 40;
				sum += score;
			}
		}
		else
		{
			printf("점수를 0이상, 100점 이하인 5의 배수로 입력하세요.\n");
			i -= 1;
		}
	}
	avg = sum/5;

	printf("%d\n", avg);

	return 0;
}