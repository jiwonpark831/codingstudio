#include <stdio.h>

int main()
{
    int height, weight; // 신장(cm), 체중(kg)
    float bmi;          // 비만도 수치

    /*
    1. 신장과 체중을 입력받는다
    2. bmi 수치를 계산한다
    3. bmi > 25이면 Yes를 출력하고 아니면 No를 출력한다
    */

    scanf("%d %d", &height, &weight);
    bmi = weight / ((height * 0.01) * (height * 0.01));

    if (bmi > 25)
        printf("Yes");
    else
        printf("No");

    return 0;
}