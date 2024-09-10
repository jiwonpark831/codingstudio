#include <stdio.h>

int main()
{
    int birth_year; // 태어난 년도
    int age;        // 나이

    /*
    1. 태어난 년도를 입력받는다
    2. 나이를 계산한다
    3. 나이 > 20 이면 No를 출력하고 아니라면 Yes를 출력한다
    */

    scanf("%d", &birth_year);
    age = 2024 - birth_year;
    if (age > 20)
        printf("No");
    else
        printf("Yes");

    return 0;
}