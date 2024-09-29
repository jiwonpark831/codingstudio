#include <stdio.h>
#include <string.h>

int main()
{
    char names[13][100] = {
        "Global Leadership School",
        "International Studies, Languages and Literature",
        "Management and Economics",
        "Law",
        "Counseling Psychology and Social Welfare",
        "Communication Arts",
        "Spatial Environment System Engineering",
        "Mechanical and Control Engineering",
        "Contents Convergence Design",
        "Life Science",
        "Computer Science and Electrical Engineering",
        "Global Entrepreneurship and ICT",
        "Creative Convergence Education"};
    int count = 0;
    char search[100];

    scanf("%s", search);

    if (strlen(search) < 3)
    {
        printf("The input must be at least 3 characters long.");
        return 0;
    }

    printf("Matching :\n");
    for (int i = 0; i < 13; i++)
    {
        if (strstr(names[i], search) != NULL)
        {
            printf("[%s]\n", names[i]);
            count++;
        }
    }
    printf("%d found", count);

    return 0;
}