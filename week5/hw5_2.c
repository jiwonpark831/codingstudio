#include <stdio.h>
int main()
{
    int height[10], weight[10]; // 10명의 신장(cm), 체중(kg)
    float bmi[10];              // 10명의 비만도 수치
    int count = 0;              // 비만인 사람의 숫자
    int i;                      // 반복문을 위한 변수

    for (i = 0; i < 10; i++)
    {
        scanf("%d %d", &height[i], &weight[i]);
        bmi[i] = weight[i] / ((height[i] * 0.01) * (height[i] * 0.01));
        if (bmi[i] >= 25)
        {
            count++;
            printf("%d번째 사람 비만\n", i + 1);
        }
    }
    printf("총 %d명 비만", count);

    return 0;
}