#include <stdio.h>
// 학번, 이름 Student ID, Name
// 22300323 박지원

// 아너코드 선언 Honor code
// 나 박지원은 하나님과 사람 앞에서 정직하고 성실하게 코딩 테스트를 수행하겠습니다.

// 이곳에 생각을 적을 것! Your thoughts here!
// 1. count(몇번 반복할 것인가)와 기준이 되는 초기값을 입력받는다
// 2. count만큼 반복한다
// - 값을 입력받아서 기준 값보다 큰지 작은지를 판별한다
// - 크면 count_plus++ 작으면 count_minus++를 한다
// - 입력받은 값을 sum에 추가한다
// 3. sum/count를 한다
// 4. 결과를 출력한다

int main()
{
    int count;
    int count_plus = 0;
    int count_minus = 0; // 날짜 수, 오른날 수, 내린날 수
    float start, price, average;
    float sum = 0.0; // 처음 가격, 입력받는 가격, 가격합계, 가격평균

    scanf("%d %f", &count, &start);

    for (int i = 0; i < count; i++)
    {
        scanf("%f", &price);
        if (start <= price)
            count_plus++;
        else
            count_minus++;

        sum += price;
    }

    average = sum / count;

    printf("Statistics of %d days.\n> Starting price - %.1f\n> Days(plus) - %d\n> Days(minus) - %d\n> Average price - %.1f\n> Current price - %.1f", count, start, count_plus, count_minus, average, price);

    return 0;
}