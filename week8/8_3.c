#include <stdio.h>

int askBiman(int height, int weight);

int main()
{
    int height[10], weight[10]; // 10명의 신장(cm), 체중(kg)
    int degree;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d %d", &height[i], &weight[i]);
        degree = askBiman(height[i], weight[i]);

        if (degree == 0)
            printf("Person %d: Underweight\n", i + 1);
        else if (degree == 1)
            printf("Person %d: Normal weight\n", i + 1);
        else if (degree == 2)
            printf("Person %d: Overweight\n", i + 1);
        else if (degree == 3)
            printf("Person %d: Mild obesity\n", i + 1);
        else if (degree == 4)
            printf("Person %d: Severe obesity\n", i + 1);
        else
            printf("Person %d: Incorrect input\n", i + 1);
    }

    return 0;
}

int askBiman(int height, int weight)
{
    float bmi;
    int degree;

    if (height < 0 || weight < 0)
    {
        degree = -1;
        return degree;
    }
    bmi = weight / ((height * 0.01) * (height * 0.01));
    if (bmi >= 30)
        degree = 4;
    else if (bmi >= 25)
        degree = 3;
    else if (bmi >= 23)
        degree = 2;
    else if (bmi >= 18.5)
        degree = 1;
    else
        degree = 0;
    return degree;
}
