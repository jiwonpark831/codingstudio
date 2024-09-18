#include <stdio.h>

int main()
{
    int height;

    scanf("%d", &height);
    int star = 1;
    int blank = height * 2 - 2;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < star; j++)
            printf("*");
        for (int j = 0; j < blank; j++)
            printf(" ");
        for (int j = 0; j < star; j++)
            printf("*");
        printf("\n");
        star++;
        blank -= 2;
    }

    star = height - 1;
    blank = 2;
    for (int i = 0; i < height - 1; i++)
    {
        for (int j = 0; j < star; j++)
            printf("*");
        for (int j = 0; j < blank; j++)
            printf(" ");
        for (int j = 0; j < star; j++)
            printf("*");
        if (i != height * 2 - 1)
            printf("\n");
        star--;
        blank += 2;
    }

    return 0;
}