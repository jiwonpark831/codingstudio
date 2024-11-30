#include <stdio.h>
#include <stdlib.h>
struct st_score
{
    int kor, eng, mat;
    int sum;
    float avg;
    char grade;
};
int load_Score(struct st_score *p[], char *filename);
void eval_Score(struct st_score *p);
void eval_Class(struct st_score *p[], int sum[], float avg[], int size);

int main()
{
    struct st_score *score[10]; // Pointer array for storing the scores of up to 10 students
    int count;                  // 점수 개수
    int classsum[3];            // Total score for each subject
    float classavg[3];          // Average score for each subject
    char classname[3][20] = {"Korean", "English", "Math"};
    count = load_Score(score, "data.txt");
    for (int i = 0; i < count; i++)
        eval_Score(score[i]);
    eval_Class(score, classsum, classavg, count);
    printf("1) Total and average scores for each subject:\n");
    for (int i = 0; i < 3; i++)
        printf("%s - Total: %d Average: %.1f\n", classname[i], classsum[i], classavg[i]);
    printf("2) Total and average scores for each student, and grade based on the average\n");
    for (int i = 0; i < 5; i++)
        printf("Student %d - Total %d, Average %.1f (Grade %c)\n", i + 1, score[i]->sum, score[i]->avg, score[i]->grade);
    return 0;
}

int load_Score(struct st_score *p[], char *filename)
{
    FILE *file;
    file = fopen(filename, "r");
    int count = 0;

    while (!feof(file))
    {
        p[count] = (struct st_score *)malloc(sizeof(struct st_score));
        int ret = fscanf(file, "%d %d %d", &p[count]->kor, &p[count]->eng, &p[count]->mat);
        if (ret != 3)
            break;
        count++;
    }
    fclose(file);
    printf("Read scores for %d students.\n", count);

    return count;
}
void eval_Score(struct st_score *p)
{
    p->sum = p->kor + p->eng + p->mat;
    p->avg = p->sum / 3.0;
    if (p->avg >= 90)
        p->grade = 'A';
    else if (p->avg >= 80)
        p->grade = 'B';
    else if (p->avg >= 70)
        p->grade = 'C';
    else if (p->avg >= 60)
        p->grade = 'D';
    else
        p->grade = 'F';
}
void eval_Class(struct st_score *p[], int sum[], float avg[], int size)
{
    for (int i = 0; i < size; i++)
    {
        sum[0] += p[i]->kor;
        sum[1] += p[i]->eng;
        sum[2] += p[i]->mat;
    }
    for (int i = 0; i < 3; i++)
        avg[i] = sum[i] / (float)size;
}