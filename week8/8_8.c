#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int classSum(int s[5][3], int classnum);
// 파라미터 : 점수배열(s)과 과목번호(0,1,2)
// 리턴값 : 해당 과목의 총점
int studentSum(int s[5][3], int studentnum);
// 파라미터 : 점수배열(s)과 학생번호(0,1,2,3,4)
// 리턴값 : 해당 학생의 총점
char studentGrade(int s[5][3], int studentnum);
// 파라미터 : 점수배열(s)과 학생번호(0,1,2,3,4)
// 리턴값 : 해당 학생의 등급 ('A','B','C','D','F')

int main(void)
{

    int jumsu[5][3]; // 5명의 3과목 점수를 저장하고 있는 2차원 배열
    char classname[3][20] = {"국어", "영어", "수학"};
    int sum_student[5];       // 학생별 총점
    float average_student[5]; // 학생별 평균
    char grade[5];            // 학생별 등급
    int sum_class[3];         // 과목별 총점
    float average_class[3];   // 과목별 평균

    srand(time(0));

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 3; j++)
            jumsu[i][j] = rand() % 51 + 50;

    for (int i = 0; i < 3; i++)
        sum_class[i] = classSum(jumsu, i);

    for (int j = 0; j < 3; j++)
        average_class[j] = sum_class[j] / 5.0;

    for (int i = 0; i < 5; i++)
        sum_student[i] = studentSum(jumsu, i);

    for (int j = 0; j < 5; j++)
        average_student[j] = average_student[j] / 3.0;

    for (int k = 0; k < 5; k++)
        grade[k] = studentGrade(jumsu, k);

    printf("The scores for 5 students have been generated.\n");
    for (int i = 0; i < 5; i++)
        printf("Student %d - Korean %d, English %d, Math %d\n", i + 1, jumsu[i][0], jumsu[i][1], jumsu[i][2]);
    printf("\n1) The total and average scores for each subject\nKorean - Total %d, Average %.1f\nEnglish - Total %d, Average %.1f\nMath - Total %d, Average %.1f\n\n", sum_class[0], average_class[0], sum_class[1], average_class[1], sum_class[2], average_class[2]);

    printf("2) The total and average scores for each student, along with the grade based on their average\n");
    for (int i = 0; i < 5; i++)
    {
        average_student[i] = sum_student[i] / 3.0;
        printf("Student %d - Total %d, Average %0.1f (Grade %c)\n", i + 1, sum_student[i], average_student[i], grade[i]);
    }
    return 0;
}

int classSum(int s[5][3], int classnum)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
        sum += s[i][classnum];
    return sum;
}

int studentSum(int s[5][3], int studentnum)
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
        sum += s[studentnum][i];
    return sum;
}
char studentGrade(int s[5][3], int studentnum)
{
    int sum = 0;
    float avg;
    for (int i = 0; i < 3; i++)
        sum += s[studentnum][i];
    avg = sum / 3.0;

    if (avg >= 90.0)
        return 'A';
    else if (avg >= 80.0)
        return 'B';
    else if (avg >= 70.0)
        return 'C';
    else if (avg >= 60.0)
        return 'D';
    else
        return 'F';
}