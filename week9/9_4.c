#include <stdio.h>
float bmiFromHW(float *h, float *w);

int main()
{
    float height, weight, bmi;
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        bmi = bmiFromHW(&height, &weight);
        if (bmi > 25)
        {
            printf("Person %d is obese.\nHeight: %.2fm, Weight: %.1fkg\n", i + 1, height, weight);
            count++;
        }
    }
    printf("Total number of obese people is %d.\n", count);
    return 0;
}

float bmiFromHW(float *h, float *w)
{
    float bmi;
    scanf("%f %f", h, w);
    bmi = *w / ((*h * 0.01) * (*h * 0.01));
    *h /= 100;

    return bmi;
}