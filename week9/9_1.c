#include <stdio.h>
void askHW(float *h, float *w);

int main()
{
    float height, weight, bmi;
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        askHW(&height, &weight);
        height /= 100;
        bmi = weight / (height * height);
        if (bmi > 25)
            count++;
    }
    printf("%d\n", count);
    return 0;
}
void askHW(float *h, float *w)
{
    scanf("%f %f", h, w);
}