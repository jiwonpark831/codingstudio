#include <stdio.h>

int main()
{
    int count = 0;
    int menu;
    int num = 50;
    int half = 25;

    while (1)
    {
        count++;
        printf("How about %d? (try more : 1, try less : 2, right : 0) ", num);
        scanf("%d", &menu);
        if (menu == 1)
            num += half;
        else if (menu == 2)
            num -= half;
        else
            break;
        half = (half + 1) / 2;
        if (num == 99)
            half = 1;
    }
    printf("%d tried.", count);

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int count = 0;
//     int menu;
//     int start = 1;
//     int end = 100;
//     int midnum;

//     while (1)
//     {
//         midnum = (start + end) / 2;

//         count++;
//         printf("How about %d? (try more : 1, try less : 2, right : 0) ", midnum);
//         scanf("%d", &menu);
//         if (menu == 1)
//             start = midnum + 1;
//         else if (menu == 2)
//             end = midnum - 1;
//         else
//             break;
//     }
//     printf("%d tried.", count);

//     return 0;
// }