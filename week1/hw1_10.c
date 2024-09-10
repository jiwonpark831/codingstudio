#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2;   // x좌표 값
    float y1, y2;   // y좌표 값
    float distance; // 거리 값

    /*
    1. x1, y1를 입력받고 x2, y2를 입력받는다
    2. 거리를 계산한다 (계산할 때에 sqrt()와 pow()함수를 사용)
    3. 거리를 출력한다
    */

    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%.1f", distance);

    return 0;
}