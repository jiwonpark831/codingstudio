#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int answer;     // 컴퓨터가 만들어 낸 1부터 100사이의 임의의 숫자
    int number_try; // 사용자가 제시한 숫자
    int count = 1;  // 사용자가 맞추려고 시도한 횟수

    srand(time(0));
    answer = rand() % 100;

    printf("만들어진수: %d\n", answer);

    while (1)
    {
        printf("Try to guess a number between 1 and 100. ");
        scanf("%d", &number_try);

        if (number_try == answer)
        {
            printf("You guessed the number in %d attempts.", count);
            break;
        }
        else if (number_try < answer)
        {
            printf("It's a larger number.\n");
            count++;
        }
        else
        {
            printf("It's a smaller number.\n");
            count++;
        }
    }

    return 0;
}