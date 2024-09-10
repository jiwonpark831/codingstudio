#include <stdio.h>

int main()
{
    int kor, eng, math; // 국어점수, 영어점수, 수학점수
    int total;          // 총점
    float average;      // 평균점수

    /*
    1. 한국어, 영어, 수학 점수를 입력받는다
    2. 총점과 평균점수를 계산한다
    3. 정보들을 출력하고 90점 넘은 과목은 우수 표시를 한다
    */

    scanf("%d %d %d", &kor, &eng, &math);
    total = kor + eng + math;
    average = total / 3.0;
    printf("총점 %d\n평균 %.1f\n", total, average);

    if (kor >= 90)
        printf("국어 우수\n");

    if (eng >= 90)
        printf("영어 우수\n");

    if (math >= 90)
        printf("수학 우수\n");

    return 0;
}