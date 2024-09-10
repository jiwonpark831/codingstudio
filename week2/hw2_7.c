#include <stdio.h>

int main()
{
    int month, day; // 월, 일
    int day_count;  // 1년 중 날 수

    /*
    1. 월과 일을 입력받는다
    2. 경우의 수를 나누어 1년 중 날 수를 계산한다
    3. 날 수를 출력한다
    */

    scanf("%d %d", &month, &day);

    if (month == 1)
        day_count = day;
    else if (month == 2)
        day_count = 31 + day;
    else if (month == 3)
        day_count = 31 + 28 + day;
    else if (month == 4)
        day_count = 31 + 28 + 31 + day;
    else if (month == 5)
        day_count = 31 + 28 + 31 + 30 + day;
    else if (month == 6)
        day_count = 31 + 28 + 31 + 30 + 31 + day;
    else if (month == 7)
        day_count = 31 + 28 + 31 + 30 + 31 + 30 + day;
    else if (month == 8)
        day_count = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;
    else if (month == 9)
        day_count = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
    else if (month == 10)
        day_count = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
    else if (month == 11)
        day_count = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
    else
        day_count = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;

    printf("%d", day_count);

    return 0;
}