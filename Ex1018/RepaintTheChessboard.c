// ü���� �ٽ� ĥ�ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    char board[51][51] = { 0 };
    int n, m;
    scanf("%d %d", &n, &m);
    getchar();

    //ü���� �Է�
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            scanf("%c", &board[i][j]);
        getchar();
    }

    //ü���� ���
    int min_cnt = n * m; // �ٽ� ĥ�ؾ� �ϴ� ���� �ּڰ�

    for (int a = 0; a + 7 < n; a++) // 8*8 ü������ ���� ��
    {
        for (int b = 0; b + 7 < m; b++) // 8*8 ü������ ���� ��
        {
            //�ش� ��ġ���� 8*8��ŭ�� ü������ ���캽
            char tmp;
            int cnt1 = 0; // 'B'�� �����ϴ� ü�����϶� �ٽ� ĥ�ؾ� �ϴ� ����
            int cnt2 = 0; // 'W'�� �����ϴ� ü�����϶� �ٽ� ĥ�ؾ� �ϴ� ����
            for (int i = a; i < a + 8; i++) // 8*8 ü���� ���� üũ
            {
                if (i % 2 == a % 2) 
                    tmp = 'B';
                else
                    tmp = 'W'; 
                for (int j = b; j < b + 8; j++) // 8*8 ü���� ���� üũ
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
            if (mcnt > cnt2) // 'B', 'W' �� ���� ���� mcnt�� ����
                mcnt = cnt2;

            if (min_cnt > mcnt)
                min_cnt = mcnt;
        }   
    }
    
    printf("%d", min_cnt);

    return 0;
}