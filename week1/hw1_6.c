#include <stdio.h>

int main()
{
    int days;    // 입력받은 날 수
    int hours;   // 환산한 시간
    int minutes; // 환산한 분
    int seconds; // 환산한 초

    /*
    1. 날을 입력받는다
    2. 입력받은 날을 각각 시간, 분, 초로 변환한다
    3. 정보들을 프린트한다
    */

    scanf("%d", &days);
    hours = days * 24;
    minutes = days * 24 * 60;
    seconds = days * 24 * 60 * 60;
    printf("%d days = %d hours\n%d days = %d minutes\n%d days = %d seconds", days, hours, days, minutes, days, seconds);

    return 0;
}