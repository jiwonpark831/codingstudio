#include <stdio.h>

int main()
{
    int height, weight; // 신장(cm), 체중(kg)
    float bmi;          // 비만도 수치
    int people;         // 비만인 사람의 수

    /*
    - 다음을 5번 반복한다
       1. 신장과 체중을 입력받는다
       2. bmi 수치를 계산한다
       3. bmi >= 25이면 people++
    - people을 출력한다
       */

    for (int i = 0; i < 5; i++)
    {
        scanf("%d %d", &height, &weight);
        bmi = weight / ((height * 0.01) * (height * 0.01));
        if (25 <= bmi)
            people++;
    }
    printf("%d", people);

    return 0;
}