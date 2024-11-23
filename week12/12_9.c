#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st_menu
{
    int no;          // 메뉴번호
    char name[20];   // 메뉴명
    char madein[20]; // 원산지
    int price;       // 가격
};

struct st_menu *getMenu();

int main()
{
    struct st_menu *menu = getMenu(); // 메뉴 구조체 포인터

    printf("Menu number menu name origin price\n");
    printf("%4d     %s  %s   %d", (*menu).no, (*menu).name, (*menu).madein, (*menu).price);

    return 0;
}

struct st_menu *getMenu()
{
    struct st_menu *menu = (struct st_menu *)malloc(sizeof(struct st_menu));

    scanf("%d %s %s %d", &menu->no, &menu->name, &menu->madein, &menu->price);

    return menu;
}