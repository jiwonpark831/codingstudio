#include <stdio.h>

int main()
{
    int a, b; // 1차 함수의 계수 a, b
    int x;    // x값

    /*
    1. a, b, x를 차례대로 입력받는다
    2. 식을 계산한다
    3. f(x)를 출력한다
    */

    scanf("%d %d %d", &a, &b, &x);
    x = a * x + b;
    printf("%d", x);

    return 0;
}