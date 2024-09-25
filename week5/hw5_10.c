#include <stdio.h>

int main()
{
    int bingo[5][5] = {0};
    int a;
    int num;
    int r, c;

    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &num);
        r = (num - 1) / 5;
        c = (num - 1) % 5;
        for (int j = 0; j < 5; j++)
        {
            if (bingo[r][c] != 1)
                bingo[r][c] = 1;
        }
    }

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         r = (arr[i]-1) / 5;
    //         c = (arr[i]-1) % 5;
    //         bingo[r][c] = 1;
    //     }
    // }

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