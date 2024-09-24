#include <stdio.h>
int main()
{
    int number[5][3];         // 각 집의 거주자 수
    int floor_total[5] = {0}; // 층별 거주자 합계 (1층, 2층, 3층, 4층, 5층)
    int line_total[3] = {0};  // 호수별 거주자 합계 (1호라인, 2호라인, 3호라인)
    int total = {0};          // 아파트의 총 거주자 수
    int ho = 1;               // 아파트 호를 나타내는 변수
    int i, j;                 // 반복문 사용을 위한 변수

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &number[i][j]);
            floor_total[i] += number[i][j];
            line_total[j] += number[i][j];
        }
        printf("Floor:%d, %dpeople\n", i + 1, floor_total[i]);
    }

    printf("\n");

    for (j = 0; j < 3; j++)
    {
        total += line_total[j];
        printf("The number of people living in the unit %d line: %d\n", j + 1, line_total[j]);
    }
    printf("\nTotal number of people living in the apartment: %d", total);

    return 0;
}