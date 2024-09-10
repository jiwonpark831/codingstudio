#include <stdio.h>

int main()
{
    float c_degree; // 섭씨 온도
    float f_degree; // 화씨 온도

    /*
    1. 섭씨온도를 입력받는다
    2. 섭씨온도를 화씨온도로 변환한다
    3. 화씨온도를 출력한다
    */

    // 섭씨온도를 입력받는다
    scanf("%f", &c_degree);

    // 섭씨온도를 화씨온도로 변환한다
    f_degree = c_degree * 1.8 + 32;

    // 화씨온도를 출력한다
    printf("%.1f\n", f_degree);

    return 0;
}