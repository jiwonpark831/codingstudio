#include <stdio.h>

int main()
{
    int count_all;   // 가족 인원수
    int count_young; // 미성년자의 수
    int birth_year;  // 태어난 년도
    int age;         // 나이
    int i;           // 반복문을 위한 변수

    /*
    1. 전체 가족 인원수 입력받기
    2. 인원수만큼 년도를 입력해서 나이를 계산하기
    3. 나이가 20 미만이면 미성년자의 수++
    4. 미성년자의 수 출력하기
    */
   
    scanf("%d", &count_all);

    for (int i = 0; i < count_all; i++)
    {
        scanf("%d", &birth_year);
        age = 2024 - birth_year;
        if (age < 20)
            count_young++;
    }

    printf("%d", count_young);

    return 0;
}