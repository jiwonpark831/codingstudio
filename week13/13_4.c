#include <stdio.h>
#include <stdlib.h>
struct st_point
{
    float x; // value of x coordinate
    float y; // value of y coordinate
};
int loadPoints(struct st_point *list[], char *filename);
int getPosition(struct st_point *p);

int main()
{
    struct st_point *mypoint[50]; // 최대 50개의 좌표 저장용
    int size;                     // 좌표 총 개수
    int count[5] = {0};           // 좌표위치별 개수 (0:축 좌표 개수, 1~4:1~4분면 좌표 개수)
    size = loadPoints(mypoint, "point.txt");
    printf("Read %d coordinate point(s) from point.txt.\n", size);
    for (int i = 0; i < size; i++)
    {
        int pos = getPosition(mypoint[i]);
        count[pos]++;
    }
    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            printf("There is(are) %d coordinate(s) on(in) the axis.\n", count[i]);
        }
        else
        {
            printf("There is(are) %d coordinate(s) on(in) the %d quadrant.\n", count[i], i);
        }
    }

    return 0;
}

int loadPoints(struct st_point *list[], char *filename)
{
    FILE *file;
    file = fopen(filename, "r");
    int count = 0;

    while (!feof(file))
    {
        list[count] = (struct st_point *)malloc(sizeof(struct st_point));
        int ret = fscanf(file, "%f %f", &list[count]->x, &list[count]->y);
        if (ret != 2)
            break;
        count++;
    }
    fclose(file);

    return count;
}
int getPosition(struct st_point *p)
{
    if (p->x > 0 && p->y > 0)
        return 1;
    else if (p->x < 0 && p->y > 0)
        return 2;
    else if (p->x < 0 && p->y < 0)
        return 3;
    else if (p->x > 0 && p->y < 0)
        return 4;
    else
        return 0;
}
