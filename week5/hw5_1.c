#include <stdio.h>

int main()
{
    int birth_year;      // 입력받은 태어난 년도
    int year[100];       // 각 사람들의 생년 (최대 100명)
    int count_person;    // 입력된 인원 수
    int count_baby = 0;  // 유아 수
    int count_child = 0; // 어린이 수
    int count_youth = 0; // 청소년 수
    int count_young = 0; // 청년 수
    int count_adult = 0; // 중년 수
    int count_old = 0;   // 노년 수
    int i;               // 반복문을 위한 변수

    scanf("%d", &count_person);
    for (i = 0; i < count_person; i++)
    {
        scanf("%d", &year[i]);
        birth_year = year[i];
        birth_year = 2024 - birth_year;
        printf("The age of the %dth person is %d\n", i + 1, birth_year);
        if (birth_year < 7)
            count_baby++;
        else if (birth_year < 13)
            count_child++;
        else if (birth_year < 20)
            count_youth++;
        else if (birth_year < 30)
            count_young++;
        else if (birth_year < 60)
            count_adult++;
        else
            count_old++;
    }
    printf("Infants: %d\nChild: %d\nTeenager: %d\nYoung adult: %d\nMiddle aged: %d\nElderly: %d", count_baby, count_child, count_youth, count_young, count_adult, count_old);

    return 0;
}