#include <stdio.h>

int main()
{
    int height; // 입력받은 높이
    int i, j;   // 반복문 사용을 위한 변수

    scanf("%d %d", &height);
    int scount = 1;
    int bcount = height - 1;

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < bcount; j++)
            printf(" ");
        for (j = 0; j < scount; j++)
            printf("*");
        printf("\n");
        bcount--;
        scount += 2;
    }

    return 0;
}