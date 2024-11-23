#include <stdio.h>
#include <stdlib.h>
struct st_bmi
{
    int height, weight; // Height(cm), Weight(kg)
    float bmi;          // Degree of obesity
    int bmi_index;      // 1,2,3,4 --> Underweight, Normal, Overweight, Obese, respectively
};
struct st_bmi *addBmi();
void evalBmi(struct st_bmi *p);

int main(void)
{
    struct st_bmi *one;
    char bmi_string[4][20] = {"Underweight", "Normal", "Overweight", "Obese"};
    one = addBmi();
    printf("Height(cm): %d, ", one->height);
    printf("Weight(kg): %d, ", one->weight);
    printf("Degree of obesity(BMI): %.1f, ", one->bmi);
    printf("Assessment results: %s\n", bmi_string[one->bmi_index - 1]);
    return 0;
}

struct st_bmi *addBmi()
{
    struct st_bmi *p = (struct st_bmi *)malloc(sizeof(struct st_bmi));
    scanf("%d %d", &(p->height), &(p->weight));
    evalBmi(p);
    return p;
}

void evalBmi(struct st_bmi *p)
{
    // Write code here
    p->bmi = p->weight / (p->height * 0.01 * p->height * 0.01);
    if (p->bmi < 18.5)
        p->bmi_index = 1;
    else if (p->bmi < 23)
        p->bmi_index = 2;
    else if (p->bmi < 25)
        p->bmi_index = 3;
    else
        p->bmi_index = 4;
}