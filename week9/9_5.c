#include <stdio.h>
void maxMinOfTen(int number[10], int *maxmin[]);

int main()
{
    int num[10];     //  An array to store the 10 numbers
    int *max_min[2]; // A pointer array to point to the maximum and minimum values:
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    maxMinOfTen(num, max_min);
    printf("Maximum number: %d\nMinimum number: %d", *max_min[0], *max_min[1]);
    return 0;
}

void maxMinOfTen(int number[10], int *maxmin[])
{
    int max = 0;
    int min = 100;

    for (int i = 0; i < 10; i++)
    {
        if (number[i] > max)
        {
            max = number[i];
            maxmin[0] = &number[i];
        }
        if (number[i] < min)
        {
            min = number[i];
            maxmin[1] = &number[i];
        }
    }
}