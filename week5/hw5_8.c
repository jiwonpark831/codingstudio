#include <stdio.h>

int main()
{
    int number[10] = {0}; // 사용자가 입력한 숫자 10개
    int count = 0;        // 현재까지 입력된 숫자의 갯수(0~10)
    int i;                // 반복문을 위한 변수
    int temp;             // 입력받은 임시 변수
    int check;            // 검사결과 (1성공, 0실패)

    printf("Enter a number between 1 and 100.\n");
    while (1)
    {
        if (count == 10)
            break;
        else
        {
            printf("Enter the %dth number: ", count + 1);
            scanf("%d", &temp);
            check = 1;

            for (i = 0; i < count; i++)

                if (number[i] == temp)
                {
                    check = 0;
                    break;
                }

            if (check == 1)
            {
                number[count] = temp;
                count++;
            }
            else
                printf("Invalid input. Please enter again.\n");
        }
    }

    for (i = 0; i < 10; i++)
        printf("The %dth number is %d.\n", i + 1, number[i]);

    return 0;
}
