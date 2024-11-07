#include <stdio.h>
float evalBmi(float h, float w);

int main()
{
    float height, weight, bmi;
    int count = 0;

    // 이 곳에 코드를 작성하라.
    FILE *file;
    file = fopen("data.txt", "r");
    for (int i = 0; i < 5; i++)
    {
        fscanf(file, "%f %f", &height, &weight);
        bmi = evalBmi(height, weight);
        if (bmi > 25)
            count++;
        printf("%d번째 사람 : %.0f %.0f\n", i + 1, height, weight);
    }
    fclose(file);
    printf("총 %d명\n", count);
    return 0;
}

float evalBmi(float h, float w)
{
    float bmi;
    h /= 100;
    bmi = w / (h * h);
    return bmi;
}