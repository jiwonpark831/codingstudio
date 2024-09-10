#include <stdio.h>

int main()
{
    int birth_year; // 태어난 년도
    int age;        // 나이

    scanf("%d", &birth_year);
    age = 2024 - birth_year;
    printf("%d\n", age);

    return 0;
}