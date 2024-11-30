#include <stdio.h>
#include <stdlib.h>
struct st_point
{
    float x; // x좌표 값
    float y; // y좌표 값
};
struct st_point *getPoint();
void savePoints(struct st_point *list[], char *filename, int size);

int main()
{
    struct st_point *mypoint[50]; // 최대 50개의 좌표 저장용
    int size;
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        mypoint[i] = getPoint();
    }
    savePoints(mypoint, "point.txt", size);
    return 0;
}

struct st_point *getPoint()
{
    struct st_point *p = (struct st_point *)malloc(sizeof(struct st_point));

    scanf("%f %f", &p->x, &p->y);

    return p;
}
void savePoints(struct st_point *list[], char *filename, int size)
{
    FILE *file;

    file = fopen(filename, "w");

    for (int i = 0; i < size; i++)
        fprintf(file, "%.2f %.2f\n", list[i]->x, list[i]->y);

    printf("%d coordinates are saved.", size);

    fclose(file);
}