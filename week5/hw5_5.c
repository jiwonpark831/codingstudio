#include <stdio.h>

int main()
{
    int monthdays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // 1~12월의 날 수
    int month, day;                                                       // 입력받은 월, 일
    int day_count;                                                        // 1년 중 날 수
    int i;                                                                // 반복문을 위한 변수

    scanf("%d %d", &month, &day);
    if (month > 12)
        printf("You entered wrong input.");
    else
    {
        month--;
        if (day > monthdays[month])
            printf("You entered wrong input.");
        else
        {
            for (i = 0; i < month; i++)
                day_count += monthdays[i];
            day_count += day;

            printf("%d", day_count);
        }
    }

    return 0;
}