#include <stdio.h>
#include <stdlib.h>

struct st_jumsu
{
    int kor, eng, mat;
    int sum;
    float avg;
    char grade;
};

struct st_jumsu *getScore();
void evalScore(struct st_jumsu *p);

int main()
{
    struct st_jumsu *score = getScore();
    evalScore(score);
    printf("Total score: %d, Average: %.1f (Grade %c)\n", score->sum, score->avg, score->grade);
    return 0;
}

struct st_jumsu *getScore()
{
    struct st_jumsu *score = (struct st_jumsu *)malloc(sizeof(struct st_jumsu));

    scanf("%d %d %d", &score->kor, &score->eng, &score->mat);

    return score;
}

void evalScore(struct st_jumsu *p)
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