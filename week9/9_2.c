#include <stdio.h>
void maxMinOfTen(int number[10], int *max, int *min);

int main()
{
    int num[10]; // 10개의 숫자를 받을 배열
    int max_num; // 가장 큰 숫자를 리턴 받을 변수,
    int min_num; // 가장 작은 숫자를 리턴 받을 변수
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    maxMinOfTen(num, &max_num, &min_num);
    printf("Maximum value: %d\nMinimum value: %d\n", max_num, min_num);
    return 0;
}

void maxMinOfTen(int number[10], int *max, int *min)
{
    *max = 0;
    *min = 100;
    for (int i = 0; i < 10; i++)
    {
        if (number[i] > *max)
            *max = number[i];
        if (number[i] < *min)
            *min = number[i];
    }
}