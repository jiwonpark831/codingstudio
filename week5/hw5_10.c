#include <stdio.h>

int main()
{
    int bingo[5][5] = {0};
    int a;
    int arr[a];

    scanf("%d", &a);
    for (int i = 0; i < a; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int r = arr[i] / 5;
            int c = arr[i] % 5;
            bingo[r][c] = 1;
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