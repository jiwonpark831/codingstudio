#include <stdio.h>
#include <stdlib.h>
struct st_jumsu
{
    int kor, eng, mat;
    int sum;
    float avg;
    char grade;
};
struct st_jumsu *getJumsu();
void evalScore(struct st_jumsu *p);

int main()
{
    struct st_jumsu *jumsu[5]; // 5명의 점수 저장용 포인터 배열
    for (int i = 0; i < 5; i++)
    {
        jumsu[i] = getJumsu();
        evalScore(jumsu[i]);
        printf("Student %d - Total %d, Average %.1f (Grade %c)\n", i + 1, jumsu[i]->sum, jumsu[i]->avg, jumsu[i]->grade);
    }
    return 0;
}

struct st_jumsu *getJumsu()
{
    struct st_jumsu *p = (struct st_jumsu *)malloc(sizeof(struct st_jumsu));

    scanf("%d %d %d", &p->kor, &p->eng, &p->mat);

    return p;
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