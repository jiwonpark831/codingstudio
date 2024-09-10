#include <stdio.h>

int main()
{
    int dan; // 출력하려는 구구단의 단 수
    int i;   // 반복문을 위한 변수

    /*
    1. 단 수를 입력받는다
    2. 2~9사이가 아니면 잘못입력하였습니다, 사이이면 곱하기 과정을 출력한다
    */

    while (1)
    {
        printf("출력하고 싶은 구구단의 단 수?(2~9) ");
        scanf("%d", &dan);
        if (dan < 2 || dan > 9)
            printf("잘못 입력하였습니다.\n");
        else
        {
            for (i = 1; i <= 9; i++)
                printf("%d x %d = %d\n", dan, i, dan * i);
            break;
        }
    }
    return 0;
}