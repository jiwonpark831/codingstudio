#include <stdio.h>

struct st_score
{
  int kor, eng, mat;
  int sum;
  float avg;
  char grade;
};

void sumClass(struct st_score p[], int *sum, float *avg, int i);
void evalStudent(struct st_score *p);

int main(void)
{
  struct st_score p[5];
  FILE *data;
  int sum;
  float avg;

  data = fopen("data.txt", "r");
  for (int i = 0; i < 5; i++)
  {
    fscanf(data, "%d %d %d", &p[i].kor, &p[i].eng, &p[i].mat);
    printf("%d번 학생 : 국어 %d, 영어 %d, 수학 %d\n", i + 1, p[i].kor, p[i].eng, p[i].mat);
    evalStudent(p + i);
  }
  printf("1) 각 과목별 총점과 평균점수\n");
  for (int i = 0; i < 3; i++)
  {
    sumClass(p, &sum, &avg, i);
    if (i == 0)
      printf("국어 - 총점 %d 평균 %.1f\n", sum, avg);
    else if (i == 1)
      printf("영어 - 총점 %d 평균 %.1f\n", sum, avg);
    else
      printf("수학 - 총점 %d 평균 %.1f\n", sum, avg);
  }

  printf("2) 각 학생별 총점과 평균점수, 평균에 따른 등급\n");
  for (int i = 0; i < 5; i++)
    printf("%d번 학생 - 총점 %d 평균 %.1f (등급 %c)\n", i + 1, p[i].sum, p[i].avg, p[i].grade);
  fclose(data);
  return 0;
}

void sumClass(struct st_score p[], int *sum, float *avg, int i)
{
  *sum = 0;
  for (int j = 0; j < 5; j++)
    if (i == 0)
      *sum += p[j].kor;
    else if (i == 1)
      *sum += p[j].eng;
    else
      *sum += p[j].mat;
  *avg = *sum / 5.0;
}

void evalStudent(struct st_score *p)
{
  p->sum = 0;
  p->sum = p->kor + p->eng + p->mat;
  p->avg = p->sum / 3.0;
  if (p->avg >= 90.0)
    p->grade = 'A';
  else if (p->avg >= 80.0)
    p->grade = 'B';
  else if (p->avg >= 70.0)
    p->grade = 'C';
  else if (p->avg >= 60.0)
    p->grade = 'D';
  else
    p->grade = 'F';
}