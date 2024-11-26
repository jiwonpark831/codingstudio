// 22300323 박지원
// 나 박지원은 하나님과 사람 앞에서 정직하고 성실하게 코딩 테스트를 수행하겠습니다.

#include <stdio.h>

int main()
{
    int all;
    int gls;
    float per;

    scanf("%d %d", &all, &gls);
    per = ((float)gls / (float)all) * 100.0;

    printf("%.2f%c\n", per, '%');

    return 0;
}