#include <stdio.h>

void findMax(int count, char name[20][30], int score[3][20], int max[3], char maxname[3][30]);

int main()
{
    char pname[3][10] = {"C", "Java", "Python"};
    char name[20][30]; // 이름 (최대 20명)
    int score[3][20];  // 3과목 점수 (최대 20명)
    int sum[20];       // 총점 (최대 20명)
    float avg[20];     // 평균 (최대 20명)

    FILE *file;
    file = fopen("data.txt", "r");

    int count = 0;
    int scoresum[3] = {0};
    float scoreavg[3] = {0.0};
    int max[3] = {0};
    char maxname[3][30];

    while (!feof(file))
    {
        int ret = fscanf(file, "%s %d %d %d", &name[count], &score[0][count], &score[1][count], &score[2][count]);
        if (ret < 4)
            continue;
        sum[count] = score[0][count] + score[1][count] + score[2][count];
        avg[count] = sum[count] / 3.0;
        for (int i = 0; i < 3; i++)
            scoresum[i] += score[i][count];
        count++;
    }
    for (int j = 0; j < 3; j++)
        scoreavg[j] = scoresum[j] / (float)count;

    findMax(count, name, score, max, maxname);

    printf("%d records read.\n", count);
    for (int i = 0; i < count; i++)
        printf("%s     %d  %d  %d  %d  %.1f\n", name[i], score[0][i], score[1][i], score[2][i], sum[i], avg[i]);
    for (int j = 0; j < 3; j++)
        printf("%s - average : %.1f, Top : %s (%d)\n", pname[j], scoreavg[j], maxname[j], max[j]);
    fclose(file);
    return 0;
}

void findMax(int count, char name[20][30], int score[3][20], int max[3], char maxname[3][30])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < count; j++)
            if (score[i][j] > max[i])
            {
                max[i] = score[i][j];
                strcpy(maxname[i], name[j]);
            }
}