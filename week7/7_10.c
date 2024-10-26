#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int bingo[5][5] = {0}; // 빙고용 매트릭스
    int number;            // 입력받는 행, 열 번호
    int r, c;
    int count = 0;
    srand(time(0));
    while (count < 10)
    {
        r = rand() % 5;
        c = rand() % 5;

        if (bingo[r][c] != 1)
        {
            bingo[r][c] = 1;
            count++;
        }
    }

    printf("---------------------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("|");
        for (int j = 0; j < 5; j++)
        {
            if (j == 4)
                printf(" %d |\n", bingo[i][j]);
            else
                printf(" %d |", bingo[i][j]);
        }
        printf("---------------------\n");
    }
    return 0;
}
