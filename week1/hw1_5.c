#include <stdio.h>

int main()
{
    float m2_area;    // 면적 (제곱미터)
    float pyung_area; // 면적 (평수)

    /*
     1. 제곱미터를 입력받는다
     2. 평으로 변환한다
     3. 평수로 된 면적을 출력한다
     */

    scanf("%f", &m2_area);
    pyung_area = m2_area / 3.305;
    printf("%.1f", pyung_area);

    return 0;
}