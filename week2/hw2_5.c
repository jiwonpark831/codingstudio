#include <stdio.h>

int main()
{
    int birth_year; // 태어난 년도
    int age;        // 나이

    /*
    1. 태어난 년도를 입력받는다
    2. 나이를 계산한다
    3. 나이별로 연령을 판정하고 출력한다 (나이 많은 -> 나이 적은)
    */

    scanf("%d", &birth_year);
    age = 2024 - birth_year;

    // 7세 미만 : 유아,
    // 7세 이상 ~ 13세미만 : 어린이,
    // 13세 이상 ~ 20세 미만 : 청소년,
    // 20세 이상 ~ 30세 미만 : 청년,
    // 30세 이상 ~ 60세 미만 : 중년,
    // 60세 이상 : 노년
    if (age >= 60)
        printf("노년");
    else if (age >= 30)
        printf("중년");
    else if (age >= 20)
        printf("청년");
    else if (age >= 13)
        printf("청소년");
    else if (age >= 7)
        printf("어린이");
    else
        printf("유아");

    return 0;
}