#include <stdio.h>

struct menu
{
    int no;        // 메뉴번호
    char name[20]; // 메뉴명
    int price;     // 가격
};

int main()
{
    struct menu mymenu[5];
    FILE *fpr = fopen("input.txt", "r");
    printf("메뉴번호 메뉴이름 1인분가격\n");
    for (int i = 0; i < 5; i++)
    {
        fscanf(fpr, "%d %s %d", &mymenu[i].no, &mymenu[i].name, &mymenu[i].price);
        printf("%d %s %d\n", mymenu[i].no, mymenu[i].name, mymenu[i].price);
    }
    fclose(fpr);

    FILE *fpw = fopen("menu.txt", "w");
    fprintf(fpw, "메뉴번호 메뉴이름 1인분가격\n");
    for (int i = 0; i < 5; i++)
        fprintf(fpw, "%d %s %d\n", mymenu[i].no, mymenu[i].name, mymenu[i].price);

    fclose(fpw);

    // 수정 금지(아래 코드)
    FILE *fp = fopen("menu.txt", "r");
    char sent[100];
    printf("=====【menu.txt】=====\n");
    while (fgets(sent, 100, fp) != NULL)
        printf("%s", sent);
    fclose(fp);
    // 수정 금지(위 코드)

    return 0;
}