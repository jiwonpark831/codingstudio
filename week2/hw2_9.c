#include <stdio.h>

int main()
{
    int income; // 연봉 (원 단위)
    int tax;    // 소득세 (원 단위)

    /*
    1. 연봉을 입력받는다
    2. 소득세를 구간별로 나누어 계산한다
    3. 소득세를 출력한다
    */

    scanf("%d", &income);

    // 연봉 1천만 원 미만 : 연봉의 9.5%
    // 연봉 1천만 원 이상 ~ 4천만 원 미만 : 연봉의 19%
    // 연봉 4천만 원 이상 ~ 8천만 원 미만 : 연봉의 28%
    // 연봉 8천만 원 이상 : 연봉의 37%

    if (income < 10000000)
        tax = income * 0.095;
    else if (income < 40000000)
        tax = income * 0.19;
    else if (income < 80000000)
        tax = income * 0.28;
    else
        tax = income * 0.37;

    printf("%d", tax);

    return 0;
}