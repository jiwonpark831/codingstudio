#include <stdio.h>

float findMax(float num[], int size);
float findMin(float num[], int size);

int main()
{
    float num[10];
    int size;
    float max, min;
    float sum = 0;
    float avg;

    FILE *data;
    data = fopen("data.txt", "r");

    size = 10;
    for (int i = 0; i < size; i++)
        fscanf(data, "%f", &num[i]);

    max = findMax(num, size);
    min = findMin(num, size);

    for (int i = 0; i < size; i++)
    {
        printf("Judge %d score : %.1f\n", i + 1, num[i]);
        if (num[i] != max && num[i] != min)
            sum += num[i];
    }
    avg = sum / (size - 2);
    printf("Final Score : %.1f", avg);

    fclose(data);
    return 0;
}

float findMax(float num[], int size)
{
    float max = num[0];
    for (int i = 0; i < size; i++)
        if (num[i] > max)
            max = num[i];

    return max;
}

float findMin(float num[], int size)
{
    float min = num[0];
    for (int i = 0; i < size; i++)
        if (num[i] < min)
            min = num[i];

    return min;
}