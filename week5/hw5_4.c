#include <stdio.h>
int main()
{
    int num[10];          // 10개의 숫자
    int first = 0;        // 첫 번째로 큰 수
    int second = 0;       // 두 번째로 큰 수
    int second_max_index; // 두 번째로 큰 수의 인덱스
    int i;                // 반복문을 위한 변수

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] > first)
            first = num[i];
    }

    for (i = 0; i < 10; i++)
        if (num[i] > second && num[i] < first)
        {
            second = num[i];
            second_max_index = i;
        }
    if (second_max_index == 0)
        printf("Second largest number: %d (1st)", second);
    else if (second_max_index == 1)
        printf("Second largest number: %d (2nd)", second);
    else if (second_max_index == 2)
        printf("Second largest number: %d (3rd)", second);
    else
        printf("Second largest number: %d (%dth)", second, second_max_index + 1);

    return 0;
}