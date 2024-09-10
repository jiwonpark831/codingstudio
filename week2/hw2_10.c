#include <stdio.h>

int main()
{
    int num1, num2, num3; // 첫 번째 숫자, 두 번째 숫자, 세 번째 숫자
    int max_num, min_num; // 가장 큰 숫자, 가장 작은 숫자

    /*
    1. 숫자 3개를 입력받는다
    2. 가장 큰 수를 찾는다
        1) 1번 숫자가 2번 숫자보다 크고 3번 숫자보다 크면 1이 max num
        2) 2번 숫자가 1번 숫자보다 크고 3번 숫자보다 크면 2이 max num
        3) 둘 다 아니면 3이 max num
    3. 가장 작은 수를 찾는다
        1) 1번 숫자가 2번 숫자보다 작고 3번 숫자보다 작으면 1이 min num
        2) 2번 숫자가 1번 숫자보다 작고 3번 숫자보다 작으면 2이 min num
        3) 둘 다 아니면 3이 min num
    4. max, min num을 출력한다
    */

    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3)
        max_num = num1;
    else if (num2 > num1 && num2 > num3)
        max_num = num2;
    else
        max_num = num3;

    if (num1 < num2 && num1 < num3)
        min_num = num1;
    else if (num2 < num1 && num2 < num3)
        min_num = num2;
    else
        min_num = num3;

    printf("가장 큰 수 %d\n", max_num);
    printf("가장 작은 수 %d", min_num);

    return 0;
}