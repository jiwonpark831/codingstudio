#include <stdio.h>

struct st_score
{
    char name[10]; // 이름
    int score[3];  // 점수 (C, Java, Python)
    int sum;       // 총점
    float avg;     // 평균
};

findMax(count, name, score, max, maxname);

int main()
{
    FILE *file;
    file = fopen("data.txt", "r");

    int scoresum[3] = {0};
    float scoreavg[3];
    int count = 0;
    int max[3] = {0};
    char maxname[3][30];

    struct st_score s[20];

    while (!feof(file))
    {
        int ret = fscanf(file, "%s %d %d %d", &s[count].name, &s[count].score[0], &s[count].score[1], &s[count].score[2]);
        if (ret < 4)
            continue;
        s[count].sum = s[count].score[0] + s[count].score[1] + s[count].score[2];
        s[count].avg = s[count].sum / 3.0;
        for (int j = 0; j < 3; j++)
            scoresum[j] += s[count].score[j];
        count++;
    }
    for (int i = 0; i < 3; i++)
        scoreavg[i] = scoresum[i] / (float)count;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < count; j++)
            if (s[j].score[i] > max[i])
            {
                max[i] = s[j].score[i];
                strcpy(maxname[i], s[j].name);
            }

    printf("%d records read.\n", count);
    for (int i = 0; i < count; i++)
        printf("%s %d %d %d %d %.1f\n", s[i].name, s[i].score[0], s[i].score[1], s[i].score[2], s[i].sum, s[i].avg);

    printf("C - average : %.1f, Top : %s (%d)\n", scoreavg[0], maxname[0], max[0]);
    printf("Java - average : %.1f, Top : %s (%d)\n", scoreavg[1], maxname[1], max[1]);
    printf("Python - average : %.1f, Top : %s (%d)\n", scoreavg[2], maxname[2], max[2]);
    fclose(file);

    return 0;
}
