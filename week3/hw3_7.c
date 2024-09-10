#include <stdio.h>

int main()
{
    int number;       // 입력받은 수
    int totalsum = 0; // 1부터 더한 계산 결과 값
    int i;            // 반복문 사용을 위한 변수

    /*
    1. number를 입력받는다
    2. 1이하면 에러문구, 아니면 다음을 반복한다
    - number까지 totalsum에 더한다
    3. totalsum을 출력한다
    */

    scanf("%d", &number);
    if (number <= 1)
        printf("잘못 입력하였습니다.\n");
    else
    {
        for (i = 1; i <= number; i++)
            totalsum += i;
        printf("%d", totalsum);
    }

    return 0;
}