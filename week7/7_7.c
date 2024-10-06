#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int a;
    int p[10][10] = {0};
    int i, j;

    srand(time(0));

    scanf("%d", &a);

    for (int b = 0; b < a; b++)
    {

        i = rand() % 10;
        j = rand() % 10;

        if (p[i][j] == 0)
            p[i][j] = 1;
        else
            b--;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            if (p[i][j] == 0)
                printf("+");
            else
                printf("@");
        printf("\n");
    }

    return 0;
}