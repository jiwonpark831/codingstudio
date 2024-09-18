#include <stdio.h>
#include <math.h>

int main()
{
    int mode;   // 출력모드(1: 홀수단, 2:짝수단)
    int column; // 열 개수
    int i, j;   // 반복문 사용을 위한 변수

    scanf("%d %d", &mode, &column);
    if (mode == 1)
    {
        for (i = 3; i <= 9; i += 2)
        {
            for (j = 1; j <= 9; j++)
            {
                printf("%d X %d = %2d\t", i, j, i * j);
                if (j % column == 0)
                    printf("\n");
            }

            if (i != 9)
                printf("\n\n");
        }
    }
    else
    {
        for (i = 2; i <= 8; i += 2)
        {
            for (j = 1; j <= 9; j++)
            {
                printf("%d X %d = %2d\t", i, j, i * j);
                if (j % column == 0)
                    printf("\n");
            }

            if (i != 8)
                printf("\n\n");
        }
    }
    return 0;
}