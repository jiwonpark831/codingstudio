#include <stdio.h>
#include <math.h>

struct point
{
    float x; // x좌표 값
    float y; // y좌표 값
};

float calcDistance(struct point p1, struct point p2); // 두 점의 거리 구하는 함수

int main()
{
    struct point p1, p2;
    float distance;

    scanf("%f %f", &p1.x, &p1.y);
    scanf("%f %f", &p2.x, &p2.y);
    distance = calcDistance(p1, p2);

    printf("%.1f", distance);

    return 0;
}

float calcDistance(struct point p1, struct point p2)
{
    // (x값의 차이)²+(y값의 차이)²의 제곱근
    float cal;

    cal = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    return cal;
}