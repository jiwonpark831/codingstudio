// 22300323 박지원
// 나 박지원은 하나님과 사람 앞에서 정직하고 성실하게 코딩 테스트를 수행하겠습니다.

#include <stdio.h>

int main()
{
    int count;
    int x[100];
    int y[100];
    int xmax = 0;
    int xmin = 100;
    int ymax = 0;
    int ymin = 100;
    int xres;
    int yres;

    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
        if (x[i] < xmin)
            xmin = x[i];
        if (x[i] > xmax)
            xmax = x[i];
        if (y[i] < ymin)
            ymin = y[i];
        if (y[i] > ymax)
            ymax = y[i];
    }

    xres = xmax - xmin;
    yres = ymax - ymin;

    printf("%d %d\n", xres, yres);

    return 0;
}