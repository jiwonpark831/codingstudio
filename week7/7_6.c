#include <stdio.h>
#include <math.h>

int main()
{
    int number[5];       // 입력받은 5개의 숫자
    int pow_value[5][5]; // 임의의 두 수 a, b로 만들 수 있는 ab의 값 들
    int max = 0;
    int min = pow(9, 10); // 최댓값과 최솟값
    int max_a, max_b;     // 최댓값을 만들어 내는 경우의 a와 b의 값
    int min_a, min_b;     // 최솟값을 만들어 내는 경우의 a와 b의 값
    int i, j;
    int a; // 반복문을 위한 변수

    for (int i = 0; i < 5; i++)
        scanf("%d", &number[i]);

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (i != j)
                pow_value[i][j] = pow(number[i], number[j]);

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            if (i != j)
            {

                if (pow_value[i][j] < min)
                {
                    min = pow_value[i][j];
                    min_a = number[i];
                    min_b = number[j];
                }
                if (pow_value[i][j] > max)
                {
                    max = pow_value[i][j];
                    max_a = number[i];
                    max_b = number[j];
                }
            }
        }

    printf("The largest number is %d to the power of %d, which is %d.\nThe smallest number is %d to the power of %d, which is %d.", max_a, max_b, max, min_a, min_b, min);
    return 0;
}