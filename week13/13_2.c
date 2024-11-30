#include <stdio.h>

struct st_point
{
    float x; // x좌표 값
    float y; // y좌표 값
};

struct st_point *getPoint();

int getPosition(struct st_point *p);

int main()
{
    struct st_point *mypoint[10];
    int one = 0;
    int two = 0;
    int thr = 0;
    int fou = 0;
    int axis = 0;

    for (int i = 0; i < 10; i++)
        mypoint[i] = getPoint();

    for (int i = 0; i < 10; i++)
    {
        int res = getPosition(mypoint[i]);
        if (res == 0)
            printf("%d coordinate: Located in(on) the axis.\n", i + 1);
        else
            printf("%d coordinate: Located in(on) the %d quadrant.\n", i + 1, res);

        if (res == 1)
            one++;
        else if (res == 2)
            two++;
        else if (res == 3)
            thr++;
        else if (res == 4)
            fou++;
        else
            axis++;
    }

    printf("There is(are) %d coordinate(s) in(on) the axis.\nThere is(are) %d coordinate(s) in(on) the 1 quadrant.\nThere is(are) %d coordinate(s) in(on) the 2 quadrant.\nThere is(are) %d coordinate(s) in(on) the 3 quadrant.\nThere is(are) %d coordinate(s) in(on) the 4 quadrant.", axis, one, two, thr, fou);

    return 0;
}

struct st_point *getPoint()
{
    struct st_point *p = (struct st_point *)malloc(sizeof(struct st_point));

    scanf("%f %f", &p->x, &p->y);

    return p;
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