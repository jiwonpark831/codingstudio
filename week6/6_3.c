#include <stdio.h>
#include <string.h>

int main()
{
    char names[14][100] = {
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
        "Creative Convergence Education",
        "Applied Artificial Intelligence"};

    int max = 0;
    int min = 100;

    int maxi;
    int mini;

    for (int i = 0; i < 14; i++)
    {
        if (strlen(names[i]) > max)
        {
            max = strlen(names[i]);
            maxi = i;
        }
        if (strlen(names[i]) < min)
        {
            min = strlen(names[i]);
            mini = i;
        }
    }

    for (int i = 0; i < 14; i++)
    {
        if (i == maxi)
            printf("The longest school name is %s.\n", names[i]);
        if (i == mini)
            printf("The shortest school name is %s.", names[i]);
    }

    return 0;
}