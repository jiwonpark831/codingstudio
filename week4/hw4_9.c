#include <stdio.h>

int main()
{

    int height; // 입력받은 높이
    int i, j;   // 반복문 사용을 위한 변수

    scanf("%d", &height);
    int scount = 1;
    int bcount = height - 1;

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < bcount; j++)
            printf(" ");
        if (i == 0 || i == height / 2)
        {
            for (j = 0; j < scount; j++)
                printf("*");
        }
        else
        {
            printf("*");
            for (j = 0; j < scount - 2; j++)
                printf(" ");
            printf("*");
        }
        printf("\n");
        bcount--;
        scount += 2;
    }
    return 0;
}