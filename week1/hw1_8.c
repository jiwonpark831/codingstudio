#include <stdio.h>

int main()
{
    int megabytes; // 용량(메가바이트 단위)
    float seconds; // 전송시간 (소숫점 3자리까지 표시)

    /*
    1. 메가바이트로 용량을 받는다
    2. 메가바이트를 총비트수로 변환하고 전송시간을 계산한다
    3. 전송시간을 출력한다
    */

    scanf("%d", &megabytes);
    // 100Mbps 무선랜의 전송속도는 초당 1억비트이다.
    // 1메가바이트는 1024*1024 바이트이다.
    // 1바이트는 8비트이다.
    // 전송시간 = 파일의 총비트수 / 전송속도
    seconds = (megabytes * 1024.0 * 1024.0 * 8.0) / 100000000;
    printf("%.3f", seconds);
    
    return 0;
}