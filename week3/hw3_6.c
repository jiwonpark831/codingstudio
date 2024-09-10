#include <stdio.h>

int main()
{
    int a, b, c;        // 2차 함수의 계수 a, b, c
    int x_begin, x_end; // x좌표의 시작 값과 끝 값
    int x, y;           // x좌표, y좌표

    /*
    1. a, b, c와 x의 범위를 받는다
    2. x-begin부터 x-end까지 다음을 반복한다
    - x=i로 설정
    - y를 계산
    - x, y의 좌표를 출력
    */

    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d", &x_begin, &x_end);
    for (int i = x_begin; i <= x_end; i++)
    {
        x = i;
        y = a * x * x + b * x + c;
        printf("(%d,%d)\n", x, y);
    }

    return 0;
}