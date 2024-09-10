#include <stdio.h>

int main()
{
    float input_degree; // 입력받은 온도

    /*
    1. 온도를 입력받는다
    2. 입력받은 온도의 구간을 판정한다 (높은 온도 -> 낮은 온도)
    */

    scanf("%f", &input_degree);

    // 음수값 (0미만) : 잘못된 입력
    // 0도 이상 ~ 25도 미만 : 냉수
    // 25도 이상 ~ 40도 미만 : 미온수
    // 40도 이상 ~ 80도 미만 : 온수
    // 80도 이상 : 끓는 물
    if (input_degree >= 80)
        printf("끓는 물");
    else if (input_degree >= 40)
        printf("온수");
    else if (input_degree >= 25)
        printf("미온수");
    else if (input_degree >= 0)
        printf("냉수");
    else
        printf("잘못된 입력");

    return 0;
}