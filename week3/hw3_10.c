#include <stdio.h>

int main()
{
    int size;             // 입력 받을 숫자의 개수
    int number;           // 입력받은 수
    int max_num, min_num; // 가장 큰 숫자, 가장 작은 숫자

    /*
    1. size를 입력받는다
    2. size만큼 다음을 반복한다
    - 입력받은 number이 maxnum보다 크면 maxnum 업데이트
    - 입력받은 number이 minnum보다 크면 minnum 업데이트
    3. 결과를 출력F
    */

    scanf("%d", &size);
    max_num = 0;
    min_num = 100;
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &number);
        if (number > max_num)
            max_num = number;
        if (number < min_num)
            min_num = number;
    }
    printf("가장 큰 수 %d\n가장 작은 수 %d", max_num, min_num);

    return 0;
}