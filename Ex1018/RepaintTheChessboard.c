// 체스판 다시 칠하기
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    char board[51][51] = { 0 };
    int n, m;
    scanf("%d %d", &n, &m);
    getchar();

    //체스판 입력
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            scanf("%c", &board[i][j]);
        getchar();
    }

    //체스판 계산
    int min_cnt = n * m; // 다시 칠해야 하는 최종 최솟값

    for (int a = 0; a + 7 < n; a++) // 8*8 체스판의 가로 끝
    {
        for (int b = 0; b + 7 < m; b++) // 8*8 체스판의 세로 끝
        {
            //해당 위치부터 8*8만큼의 체스판을 살펴봄
            char tmp;
            int cnt1 = 0; // 'B'로 시작하는 체스판일때 다시 칠해야 하는 개수
            int cnt2 = 0; // 'W'로 시작하는 체스판일때 다시 칠해야 하는 개수
            for (int i = a; i < a + 8; i++) // 8*8 체스판 가로 체크
            {
                if (i % 2 == a % 2) 
                    tmp = 'B';
                else
                    tmp = 'W'; 
                for (int j = b; j < b + 8; j++) // 8*8 체스판 세로 체크
                {
                    if (board[i][j] != tmp)
                        cnt1++;
                    else
                        cnt2++;
                    if (tmp == 'W')
                        tmp = 'B';
                    else
                        tmp = 'W';
                }
            }

            int mcnt = cnt1;
            if (mcnt > cnt2) // 'B', 'W' 중 작은 값을 mcnt에 저장
                mcnt = cnt2;

            if (min_cnt > mcnt)
                min_cnt = mcnt;
        }   
    }
    
    printf("%d", min_cnt);

    return 0;
}