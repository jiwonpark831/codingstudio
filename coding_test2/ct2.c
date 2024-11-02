#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Student ID  Name  Honor code

#define SIZE 50
char genre_name[10][20] = {"", "Drama", "Action", "Romance", "Sci-Fi", "Horror", "Comedy"};

// Functions completed
void list_record(char title[][100], int year[], int genre[], int playtime[], int viewers[], int index);
void list(char title[][100], int year[], int genre[], int playtime[], int viewers[], int size);
void random_pick(int result[3], int size);
void list_genre(int result[7]);

// Functions you need to implement
void search(char title[][100], int year[], int genre[], int playtime[], int viewers[], int size);
void random_list(char title[][100], int genre[], int pickup[3]);
void count_genre(int genre[], int size, int result[7]);
int find_max(int num_array[], int size);

// You can't change the main() function.
int main()
{
    /*
    Write down your understanding of the code for this function.

    */
    char title[SIZE][100];
    int year[SIZE], genre[SIZE], playtime[SIZE], viewers[SIZE];
    int size, menu;
    int pick[3], top, count[10];
    srand(1000);
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        getchar();
        fgets(title[i], 100, stdin);
        if (title[i][strlen(title[i]) - 1] == '\n')
            title[i][strlen(title[i]) - 1] = '\0';
        scanf("%d %d %d %d", &year[i], &genre[i], &playtime[i], &viewers[i]);
    }
    printf("%d records saved.\n", size);
    while (1)
    {
        printf("\nMenu (1:List 2:Search 3:Random 4:Report 0:Exit) > ");
        scanf("%d", &menu);
        if (menu == 0)
            break;
        if (menu == 1)
            list(title, year, genre, playtime, viewers, size);
        else if (menu == 2)
            search(title, year, genre, playtime, viewers, size);
        else if (menu == 3)
        {
            random_pick(pick, size);
            random_list(title, genre, pick);
        }
        else if (menu == 4)
        {
            printf("1. Number of movies by genre\n");
            count_genre(genre, size, count);
            list_genre(count);

            top = find_max(playtime, size);
            printf("2. Longest Playtime\n>>>");
            list_record(title, year, genre, playtime, viewers, top);

            top = find_max(viewers, size);
            printf("3. Most viewers\n>>>");
            list_record(title, year, genre, playtime, viewers, top);
        }
    }
    return 0;
}

void list_record(char title[][100], int year[], int genre[], int playtime[], int viewers[], int index)
{
    /*
    Write down your understanding of the code for this function.

    */
    printf("%s [%d, %s] ", title[index], year[index], genre_name[genre[index]]);
    printf("Playtime %dmin, Viewers %d\n", playtime[index], viewers[index]);
}

void list(char title[][100], int year[], int genre[], int playtime[], int viewers[], int size)
{
    /*
    Write down your understanding of the code for this function.

    */
    for (int i = 0; i < size; i++)
    {
        printf("%2d. ", i + 1);
        list_record(title, year, genre, playtime, viewers, i);
    }
}

void random_pick(int result[3], int size)
{
    /*
    Write down your understanding of the code for this function.

    */
    int duplicated, count = 0;
    while (count < 3)
    {
        int number = rand() % size;
        duplicated = 0;
        for (int i = 0; i < count; i++)
        {
            if (number == result[i])
                duplicated = 1;
        }
        if (duplicated == 0)
        {
            result[count] = number;
            count++;
        }
    }
}

void list_genre(int result[7])
{
    /*
    Write down your understanding of the code for this function.

    */
    for (int i = 1; i <= 6; i++)
    {
        printf("%s \t %d movies \n", genre_name[i], result[i]);
    }
}

////////////////////////////////////

void search(char title[][100], int year[], int genre[], int playtime[], int viewers[], int size)
{
    char keyword[50];
    int count = 0;
    printf("Enter a keyword > ");
    scanf("%s", keyword);

    // Your thought and code here!

    for (int i = 0; i < size; i++)
        if (strstr(title[i], keyword) != NULL)
        {
            printf("%d. %s [%d, %s] ", i + 1, title[i], year[i], genre_name[genre[i]]);
            printf("Playtime %dmin, Viewers %d\n", playtime[i], viewers[i]);
            count++;
        }

    printf("%d found.\n", count);
}

void random_list(char title[][100], int genre[], int pickup[3])
{

    // Your thought and code here!
    for (int i = 0; i < 3; i++)
    {
        int index = pickup[i];
        printf("%d. %s [%s]\n", i + 1, title[index], genre_name[genre[index]]);
    }
}

void count_genre(int genre[], int size, int result[7])
{

    // Your thought and code here!
    for (int i = 0; i < 7; i++)
        result[i] = 0;

    for (int i = 0; i < size; i++)
        result[genre[i]]++;
}

int find_max(int num_array[], int size)
{
    int max = 0, max_index = 0;

    // Your thought and code here!
    for (int i = 1; i < size; i++)

        if (num_array[i] > num_array[max_index])
            max_index = i;

    return max_index;
}
