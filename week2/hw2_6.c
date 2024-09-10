#include <stdio.h>

int main()
{
    float m2_area;    // 면적 (제곱미터)
    float pyung_area; // 면적 (평수)

    /*
     1. 제곱미터를 입력받는다
     2. 평으로 변환한다
     3. 평수를 출력하고 평수로 종류를 판정해서 출력한다 (작은 평 -> 큰 평)
     */

    scanf("%f", &m2_area);
    pyung_area = m2_area / 3.305;
    printf("%.1f\n", pyung_area);

    // 15평 미만 : 소형
    // 15평 이상 ~ 30평 미만 : 중소형
    // 30평 이상 ~ 50평 미만 : 중형
    // 50평 이상 : 대형
    if (pyung_area < 15)
        printf("소형");
    else if (pyung_area < 30)
        printf("중소형");
    else if (pyung_area < 50)
        printf("중형");
    else
        printf("대형");

    return 0;
}