#include <stdio.h>

int markBingo(int num, int b[5][5]);

void printBingo(int b[5][5]);

int main()
{

    int bingo[5][5] = {0}; // 빙고용 매트릭스
    int num;
    int s;

    while (1)
    {
        printf("Enter a number(1~25) > ");
        scanf("%d", &num);
        if (num > 25 || 1 > num)
        {
            printf("EXIT!\n");
            printBingo(bingo);
            break;
        }
        s = markBingo(num, bingo);
        if (s == -1)
        {
            continue;
        }
        else if (s == 1)
        {
            printf("빙고!\n");
            printBingo(bingo);
            break;
        }
        else if (s == 0)
            printf("중복!\n");
    }
    return 0;
}

int markBingo(int num, int b[5][5])
{
    int r, c;
    int rbingo = 1;
    int cbingo = 1;
    r = (num - 1) / 5;
    c = (num - 1) % 5;

    if (b[r][c] != 1)
    {
        b[r][c] = 1;

        for (int i = 0; i < 5; i++)

            if (b[r][i] == 0)
                rbingo = 0;

        for (int i = 0; i < 5; i++)

            if (b[i][c] == 0)
                cbingo = 0;

        if (rbingo == 1 || cbingo == 1)
            return 1;
        else
            return -1;
    }
    else
        return 0;
}

void printBingo(int b[5][5])
{
    printf("BINGO MATRIX\n---------------------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("|");
        for (int j = 0; j < 5; j++)
        {
            if (j == 4)
                printf(" %d |\n", b[i][j]);
            else
                printf(" %d |", b[i][j]);
        }
        printf("---------------------\n");
    }
}