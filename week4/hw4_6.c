#include <stdio.h>

int main()
{
    int length; // 입력받은 정사각형 한 변의 길이
    int i, j;   // 반복문 사용을 위한 변수

    scanf("%d", &length);
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length; j++)
            printf("#");
        printf("\n");
    }
    return 0;
}