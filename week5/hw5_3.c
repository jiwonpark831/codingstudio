#include <stdio.h>
int main()
{
    float score[10];             // 심사점수
    float max = 0.0, min = 10.0; // 가장 큰 점수, 가장 작은 점수
    float total = 0.0;           // 점수 총 합계
    float average = 0.0;         // 평균점수
    int i;                       // 반복문을 위한 변수

    for (i = 0; i < 10; i++)
    {
        scanf("%f", &score[i]);
        if (score[i] > max)
            max = score[i];
        if (score[i] < min)
            min = score[i];
    }

    if (score[0] == score[9])
        printf("%.1f", score[0]);
    else
    {
        for (i = 0; i < 10; i++)
            if ((score[i] != max) && (score[i] != min))
                average += score[i];

        average /= 8;
        printf("%.1f", average);
    }

    return 0;
}