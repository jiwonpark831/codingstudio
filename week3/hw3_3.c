#include <stdio.h>

int main()
{
    int width, height; // 가로크기, 세로크기
    int count1 = 0;    // "정사각형"의 개수
    int count2 = 0;    // "가로형 직사각형"의 개수
    int count3 = 0;    // "세로형 직사각형"의 개수

    /*
    1. while로 가로 세로 중 하나가 0이하가 될때까지 무한 반복
    2. 같으면 정사각형 가로가 크면 가로형 세로가 크면 세로형
    3. 결과를 출력한다
    */

    while (1)
    {
        scanf("%d %d", &width, &height);
        if (width <= 0 || height <= 0)
            break;

        if (width == height)
            count1++;
        else if (width > height)
            count2++;
        else
            count3++;
    }

    // while (width>0 && height>0)
    // {
    //     if (width == height)
    //         count1++;
    //     else if (width > height)
    //         count2++;
    //     else
    //         count3++;
    // }

    printf("정사각형 %d개\n가로형 직사각형 %d개\n세로형 직사각형 %d개\n", count1, count2, count3);

    return 0;
}