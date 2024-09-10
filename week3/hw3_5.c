#include <stdio.h>

int main()
{
    int number;       // 입력받은 수
    int count = 0.0;  // 입력받은 숫자의 개수
    int totalsum = 0; // 합계
    float average;    // 평균 값

    /*
    - count를 입력받고 count만큼 다음을 반복한다
    1. number을 입력받아 totalsum에 추가한다
    - average를 계산하고 결과를 출력한다
    */

    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &number);
        totalsum += number;
    }
    average = (float)totalsum / count;
    printf("합계 %d\n평균 %.1f", totalsum, average);

    return 0;
}