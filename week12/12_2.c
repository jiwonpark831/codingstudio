#include <stdio.h>

struct rectangle
{
    int x1, y1; // 좌상점 좌표값 (왼쪽 위 모서리)
    int x2, y2; // 우하점 좌표값 (오른 아래 모서리)
};
struct rectangle *getPoints();
int checkOverlap(struct rectangle *r1, struct rectangle *r2);

int main()
{
    struct rectangle *rect1; // A structure pointer for the first rectangle
    struct rectangle *rect2; // A structure pointer for the second rectangle
    rect1 = getPoints();
    rect2 = getPoints();
    if (checkOverlap(rect1, rect2))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}

struct rectangle *getPoints()
{
    struct rectangle *rect = (struct rectangle *)malloc(sizeof(struct rectangle));

    scanf("%d %d", &rect->x1, &rect->y1);
    scanf("%d %d", &rect->x2, &rect->y2);

    return rect;
}
int checkOverlap(struct rectangle *r1, struct rectangle *r2)
{
    if (r1->x2 <= r2->x1 || r1->x1 >= r2->x2 || r1->y2 >= r2->y1 || r1->y1 <= r2->y2)
        return 0;
    else
        return 1;
}