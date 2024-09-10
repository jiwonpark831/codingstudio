#include <stdio.h>

int main()
{
    float m2_area;    // 면적 (제곱미터)
    float pyung_area; // 면적 (평수)
    int count1;       // 소형 아파트 개수
    int count2;       // 중소형 아파트 개수
    int count3;       // 중형 아파트 개수
    int count4;       // 대형 아파트 개수

    /*
    - 다음을 10번 반복한다
        1. 제곱미터를 입력받는다
        2. 평으로 변환한다
        3. 평수를 출력하고 평수로 종류를 판정한다
    - 결과를 출력한다
    */

    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &m2_area);
        pyung_area = m2_area / 3.305;
        printf("%.1f\n", pyung_area);

        if (pyung_area < 15)
            count1++;
        else if (pyung_area < 30)
            count2++;
        else if (pyung_area < 50)
            count3++;
        else
            count4++;
    }

    printf("소형 아파트 %d개\n중소형 아파트 %d개\n중형 아파트 %d개\n대형 아파트 %d개\n", count1, count2, count3, count4);

    return 0;
}