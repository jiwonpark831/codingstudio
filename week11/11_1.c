#include <stdio.h>

float evalBmi(int h, int w);

struct bmi_struct
{
    int height, weight; // Height (cm), Weight (kg)
    float bmi;          // Degree of obesity
};

int main()
{
    FILE *file;
    int count = 0;

    struct bmi_struct people[5];

    // 이 곳에 코드를 작성하라.
    file = fopen("data.txt", "r");
    for (int i = 0; i < 5; i++)
    {
        fscanf(file, "%d %d", &people[i].height, &people[i].weight);
        printf("%d번째 사람 : %d %d\n", i + 1, people[i].height, people[i].weight);
        people[i].bmi = evalBmi(people[i].height, people[i].weight);
        if (people[i].bmi > 25)
            count++;
    }

    printf("총 %d명\n", count);
    return 0;
}

float evalBmi(int h, int w)
{
    float b;

    b = w / (h * 0.01 * h * 0.01);

    return b;
}