#include <stdio.h>
void sort3Num(int *n1, int *n2, int *n3);

int main()
{
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    sort3Num(&num1, &num2, &num3);
    printf("%d %d %d\n", num1, num2, num3);
    return 0;
}

void sort3Num(int *n1, int *n2, int *n3)
{
    int temp = 0;

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    // 1이 제일 큰 경우 -> 2,3을 검사
    // 2가 제일 큰 경우 -> 1,2를 바꾸고 2,3을 검사
    // 3이 제일 큰 경우 -> 1,3을 바꾸고 2,3을 검사
    if (*n1 > *n2 && *n1 > *n3)
    {
        if (*n2 < *n3)
        {
            int temp = 0;

            temp = *n2;
            *n2 = *n3;
            *n3 = temp;
        }
    }
    else if (*n2 >= *n1 && *n2 >= *n3)
    {
        int temp = 0;

        temp = *n1;
        *n1 = *n2;
        *n2 = temp;
        if (*n2 < *n3)
        {
            int temp = 0;

            temp = *n2;
            *n2 = *n3;
            *n3 = temp;
        }
    }
    else if (*n3 >= *n1 && *n3 >= *n2)
    {
        int temp = 0;

        temp = *n1;
        *n1 = *n3;
        *n3 = temp;
        if (*n2 < *n3)
        {
            int temp = 0;

            temp = *n2;
            *n2 = *n3;
            *n3 = temp;
        }
    }
}