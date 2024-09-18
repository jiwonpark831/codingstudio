#include <stdio.h>

int main()
{
    int family;                  // 총 가족
    int children, adult, senior; // 가족 별 아이, 어른, 노인 수
    int all_children = 0;
    int all_adult = 0;
    int all_senior = 0; // 아이, 어른, 노인의 합계
    int i, j;           // 반복문 사용을 위한 변수

    scanf("%d", &family);
    for (i = 0; i < family; i++)
    {
        scanf("%d %d %d", &children, &adult, &senior);
        for (j = 0; j < children; j++)
            printf("@");
        printf(" ");
        for (j = 0; j < adult; j++)
            printf("#");
        printf(" ");
        for (j = 0; j < senior; j++)
            printf("$");
        printf("\n");
        all_children += children;
        all_adult += adult;
        all_senior += senior;
    }

    printf("The total number of people in all families is as follows:\n");
    for (i = 0; i < all_children; i++)
        printf("@");
    printf(" ");
    for (i = 0; i < all_adult; i++)
        printf("#");
    printf(" ");
    for (i = 0; i < all_senior; i++)
        printf("$");

    return 0;
}