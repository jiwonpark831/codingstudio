#include <stdio.h>

int ageToGroup(int b, int i);

int main()
{
    int birth_year;     // 입력받은 태어난 년도
    int year[100];      // 각 사람들의 생년 (최대 100명)
    int count_person;   // 입력된 인원 수
    int count[6] = {0}; // 6가지 연령대별 숫자
    int index = 1;

    scanf("%d", &count_person);
    for (int i = 0; i < count_person; i++)
    {
        scanf("%d", &year[i]);
        birth_year = ageToGroup(year[i], index);
        index++;
        if (birth_year == 0)
            count[0]++;
        else if (birth_year == 1)
            count[1]++;
        else if (birth_year == 2)
            count[2]++;
        else if (birth_year == 3)
            count[3]++;
        else if (birth_year == 4)
            count[4]++;
        else
            count[5]++;
    }

    printf("The number of infant is %d\nThe number of child is %d\nThe number of teenager is %d\nThe number of young adult is %d\nThe number of middle-aged is %d\nThe number of elderly is %d", count[0], count[1], count[2], count[3], count[4], count[5]);

    return 0;
}

int ageToGroup(int b, int i)
{
    b = 2024 - b;
    printf("Age of person %d is %d\n", i, b);
    if (b < 7)
        return 0;
    else if (b < 13)
        return 1;
    else if (b < 20)
        return 2;
    else if (b < 30)
        return 3;
    else if (b < 60)
        return 4;
    else
        return 5;
};