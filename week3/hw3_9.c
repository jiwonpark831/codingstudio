#include <stdio.h>

int main()
{
    int num1, num2; // 입력받은 두 수
    int i;          // 반복문을 위한 변수

    scanf("%d %d", &num1, &num2);

    // for (i = 1; i <= 100; i++)
    // {
    //     if (num1 * i <= 100 && (num1 * i % num1 == 0 && num1 * i % num2 > 0))
    //         printf("%d\n", num1 * i);
    //     if (num2 * i <= 100 && (num2 * i % num2 == 0 && num2 * i % num1 > 0))
    //         printf("%d\n", num2 * i);
    // }

    for (i = 1; i <= 100; i++)
    {
        if ((i % num1 == 0 && i % num2 > 0) || (i % num2 == 0 && i % num1 > 0))
            printf("%d\n", i);
    }

    return 0;
}
