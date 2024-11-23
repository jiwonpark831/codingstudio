#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct st_point
{
    float x; // x좌표 값
    float y; // y좌표 값
};
struct st_point *getPoint();
float calcDistance(struct st_point *p1, struct st_point *p2);

int main()
{
    struct st_point *point1; // 첫번째 좌표를 위한 포인터
    struct st_point *point2;
    float distance;

    point1 = getPoint();
    point2 = getPoint();
    distance = calcDistance(point1, point2);

    printf("%.1f", distance);

    return 0;
}

struct st_point *getPoint()
{
    struct st_point *point = (struct st_point *)malloc(sizeof(struct st_point));

    scanf("%f %f", &point->x, &point->y);

    return point;
}
float calcDistance(struct st_point *p1, struct st_point *p2)
{
    float cal;

    cal = sqrt(pow(p2->x - p1->x, 2) + pow(p2->y - p1->y, 2));

    return cal;
}