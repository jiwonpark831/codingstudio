#include <stdio.h>

int main(void)
{
    int mode;
    int i, j;
    
    scanf("%d", &mode);
    if (mode == 1)
    {
        for (i = 3; i <= 9; i += 2)
        {
            for (j = 1; j <= 3; j++)
                printf("%d X %d = %2d\t", i, j, i * j);
            printf("\n");
            for (j = 4; j <= 6; j++)
                printf("%d X %d = %2d\t", i, j, i * j);
            printf("\n");
            for (j = 7; j <= 9; j++)
                printf("%d X %d = %2d\t", i, j, i * j);
            if (i != 9)
                printf("\n\n");
        }
    }
    else
    {
        for (i = 2; i <= 8; i += 2)
        {
            for (j = 1; j <= 3; j++)
                printf("%d X %d = %2d\t", i, j, i * j);
            printf("\n");
            for (j = 4; j <= 6; j++)
                printf("%d X %d = %2d\t", i, j, i * j);
            printf("\n");
            for (j = 7; j <= 9; j++)
                printf("%d X %d = %2d\t", i, j, i * j);
            if (i != 8)
                printf("\n\n");
        }
    }
    return 0;
}