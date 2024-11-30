#include <stdio.h>
#include <stdlib.h>
struct st_menu
{
    int no;          // 메뉴번호
    char name[20];   // 메뉴명
    char madein[20]; // 원산지
    int price;       // 가격
};
struct st_menu *getMenu();
void saveMenu(struct st_menu *list[], char *filename, int size);
int main()
{
    struct st_menu *menu[10]; // 최대 10개의 메뉴 저장용 포인터 배열
    for (int i = 0; i < 5; i++)
    {
        menu[i] = getMenu();
    }
    saveMenu(menu, "menu.txt", 5);
    return 0;
}
struct st_menu *getMenu()
{
    struct st_menu *p = (struct st_menu *)malloc(sizeof(struct st_menu));

    scanf("%d %s %s %d", &p->no, p->name, p->madein, &p->price);

    return p;
}
void saveMenu(struct st_menu *list[], char *filename, int size)
{
    FILE *file = fopen(filename, "w");

    for (int i = 0; i < size; i++)
        fprintf(file, "%d %s %s %d\n", list[i]->no, list[i]->name, list[i]->madein, list[i]->price);

    printf("Saved at '%s'.\n", filename);

    fclose(file);
}