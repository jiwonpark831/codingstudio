#include <stdio.h>

int main()
{
    int kor, eng, math; // 국어점수, 영어점수, 수학점수
    int total;          // 총점
    float average;      // 평균점수

    /*
    1. 한국어, 영어, 수학 점수를 입력받는다
    2. 총점과 평균점수를 계산한다
    3. 정보들을 출력한다
    */
   
    scanf("%d %d %d", &kor, &eng, &math);
    total = kor + eng + math;
    average = total / 3.0;
    printf("total = %d\naverage = %.1f", total, average);

    return 0;
}