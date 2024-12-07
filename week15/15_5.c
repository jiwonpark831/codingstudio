#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char GRADE[3][10] = {"Deluxe", "Luxury", "Suite"}; // 객실등급 명칭

struct st_card
{                  // 객실 관리 카드 레코드
    int no;        // 객실번호 (3자리 숫자)
    int grade;     // 객실 등급 (1:deluxe, 2:luxury, 3:suite)
    int capa;      // 수용최대인원 (2~10명)
    char name[20]; // 예약자 성명
    int person;    // 예약 인원
};

int loadCards(struct st_card *p[]);             // 객실정보 읽기
void listCards(struct st_card *p[], int n);     // 객실 목록 출력
void makeReserve(struct st_card *p[], int n);   // 객실 예약
void cancelReserve(struct st_card *p[], int n); // 예약 취소
void findCards(struct st_card *p[], int n);     // 객실 검색
void saveReport(struct st_card *p[], int n);    // 보고서 저장
void findRoom(struct st_card *p[], int n);      // 빈 객실 찾기
int addCards(struct st_card *p[], int n);       // 객실 추가

int main()
{
    struct st_card *cards[50]; // 최대 50개의 객실을 관리할 수 있는 구조체 포인터 배열
    int count;                 // 현재 등록된 카드 수
    int menu;                  // 메뉴번호
    count = loadCards(cards);  // 시작 전에 파일로부터 객실 리스트를 모두 읽어온다.
    while (1)
    {
        // 메뉴 출력
        printf("\n[1]객실목록 [2]예약 [3]예약취소 [4]검색 [5]저장 [6]빈객실찾기 [7]객실추가 [0]종료 >> ");
        scanf("%d", &menu); // 메뉴를 읽음

        if (menu == 1)
        {
            listCards(cards, count); // 객실 목록 출력
        }
        else if (menu == 2)
        {
            makeReserve(cards, count); // 예약하기
        }
        else if (menu == 3)
        {
            cancelReserve(cards, count); // 예약 취소
        }
        else if (menu == 4)
        {
            findCards(cards, count); // 검색
        }
        else if (menu == 5)
        {
            saveReport(cards, count); // 보고서 저장
        }
        else if (menu == 6)
        {
            findRoom(cards, count); // 빈 객실 찾기
        }
        else if (menu == 7)
        {
            count = addCards(cards, count); // 객실 추가
        }
        else
        {
            break;
        }
    }
}

int loadCards(struct st_card *p[])
{
    FILE *file;
    int n = 0;
    file = fopen("rooms.txt", "r");
    while (!feof(file))
    {
        p[n] = (struct st_card *)malloc(sizeof(struct st_card));
        int result = fscanf(file, "%d %d %d", &(p[n]->no), &(p[n]->grade), &(p[n]->capa));
        if (result < 1)
            break;
        p[n]->person = 0;
        n++;
    }
    fclose(file);
    printf("%d개의 객실 정보를 읽었습니다.\n", n);
    return n;
}

void listCards(struct st_card *p[], int n)
{
    int i;
    printf("\n전체 객실 목록입니다.\n");
    printf("객실번호 / 등급 / 최대인원 / 예약상황\n");

    for (i = 0; i < n; i++)
    {
        printf("%d호 / %s / %d명 / ", p[i]->no, GRADE[p[i]->grade - 1], p[i]->capa);
        if (p[i]->person > 0)
            printf("예약 : %s %d명\n", p[i]->name, p[i]->person);
        else
            printf("예약없음\n");
    }
}

// 15-5
void makeReserve(struct st_card *p[], int n)
{
    char name[20];
    struct st_card *rp; // 예약할 카드레코드 구조체의 포인터값
    int i, roomno, newperson;

    printf("예약하실 고객 이름은? >> ");
    scanf("%s", name);
    printf("예약 인원수를 입력하시오. >> ");
    scanf("%d", &newperson);
    while (1)
    {
        printf("예약하실 객실 번호는? >> ");
        scanf("%d", &roomno);
        rp = NULL;
        for (i = 0; i < n; i++)
            if (p[i]->no == roomno)
            {
                rp = p[i];
                break;
            }
        if (rp == NULL)
        {
            printf("예약불가(객실번호 오류)\n");
            continue;
        }

        if (rp->person != 0)
        {
            printf("예약불가(예약된 객실)\n");
            continue;
        }

        if (newperson > rp->capa)
        {
            printf("예약불가(인원 초과)\n");
            continue;
        }

        break;
    }
    rp->person = newperson;
    strcpy(rp->name, name);
    printf("예약완료!\n");
}

// 15-6
void cancelReserve(struct st_card *p[], int n)
{
}

// 15-7
void findCards(struct st_card *p[], int n)
{
}
// 15-8
void saveReport(struct st_card *p[], int n)
{
}

// 15-9
void findRoom(struct st_card *p[], int n)
{
}

// 15-10
int addCards(struct st_card *p[], int n)
{

    return n + 1;
}