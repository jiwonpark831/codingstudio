#include <stdio.h>
#include <stdlib.h>
struct st_bmi
{
    int height, weight; // 키(cm), 몸무게(kg)
    float bmi;          // 비만도
    int bmi_index;      // 1,2,3,4 --> 각각 저체중, 정상, 과체중, 비만
};
int loadBmi(struct st_bmi *list[], char *filename);
void evalBmi(struct st_bmi *p);

int main()
{
    struct st_bmi *bmilist[50]; // 최대 50명의 비만도 데이터
    char bmi_string[4][20] = {"Underweight", "Normal", "Overweight", "Obese"};
    int count = loadBmi(bmilist, "data.txt");
    // 이곳에 코드 작성!

    printf("%d records have been read.\n", count);
    for (int i = 0; i < 10; i++)
        printf("Person %d: Height %d, Weight %d, Degree of obesity %.1f, Assessment result %s\n", i + 1, bmilist[i]->height, bmilist[i]->weight, bmilist[i]->bmi, bmi_string[bmilist[i]->bmi_index - 1]);
    return 0;
}
int loadBmi(struct st_bmi *list[], char *filename)
{
    int i = 0;
    int count = 0;
    FILE *file;
    file = fopen(filename, "r");
    while (!feof(file))
    {
        list[i] = (struct st_bmi *)malloc(sizeof(struct st_bmi));
        int ret = fscanf(file, "%d %d", &list[i]->height, &list[i]->weight);
        if (ret != 2)
            break;
        else
            evalBmi(list[count]);
        i++;
        count++;
    }
    fclose(file);

    return count;
}
void evalBmi(struct st_bmi *p)
{
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
