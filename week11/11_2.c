#include <stdio.h>

struct rectangle
{
    int x1, y1; // 좌상점 좌표값 (왼쪽 위 모서리)
    int x2, y2; // 우하점 좌표값 (오른 아래 모서리)
};

int checkOverlap(struct rectangle r1, struct rectangle r2);

int main()
{
    struct rectangle rect1, rect2;
    int menu;

    scanf("%d %d", &rect1.x1, &rect1.y1);
    scanf("%d %d", &rect1.x2, &rect1.y2);
    scanf("%d %d", &rect2.x1, &rect2.y1);
    scanf("%d %d", &rect2.x2, &rect2.y2);

    menu = checkOverlap(rect1, rect2);
    if (menu == 1)
        printf("Yes");
    else
        printf("No");

    return 0;
}

int checkOverlap(struct rectangle r1, struct rectangle r2)
{
    if (r1.x2 <= r2.x1 || r1.x1 >= r2.x2 || r1.y2 >= r2.y1 || r1.y1 <= r2.y2)
        return 0;
    else
        return 1;
}