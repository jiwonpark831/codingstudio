#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Student ID  Name  Honor code
// 22300323 박지원
// 나 박지원은 하나님과 사람 앞에서 정직하고 성실하게 코딩테스트를 수행하겠습니다.

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
	1. size를 사용자로부터 입력받는다
	2. size만큼 for을 돌면서 정보를 저장
	- getchar(): \n 제거하기 위해서입니다
	- fgets로 타이틀을 i번째에 저장한다
	- 마지막-1번째가 \n이면 \0로 바꿔서 문자가 끝났다는걸 알려준다
	- scanf로 나머지 정보들을 입력받는다
	3. 몇개의 영화가 저장되었는지 출력
	4. 메뉴
	- 메뉴 안내 문장 출력하고 menu에 저장되는 번호에 따라 다른 기능을 하게 합니다
	 - 0: break
	 - 1: 정보를 리스트로 출력
	 - 2: 사용자가 입력한 문자를 포함하는 타이틀을 알려주는 search
	 - 3: 랜덤으로 숫자를 뽑아서 해당하는 영화를 알려주는
	 - 4: 장르별로 몇개가 있는지, 가장 긴 플레이타임 영화, 가장 많은 사람이 본 영화
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

	list 함수에서 가져온 index의 영화 정보를 출력합니다
	모든 정보를 받아온 index로 접근하여 출력한다

	*/
	printf("%s [%d, %s] ", title[index], year[index], genre_name[genre[index]]);
	printf("Playtime %dmin, Viewers %d\n", playtime[index], viewers[index]);
}

void list(char title[][100], int year[], int genre[], int playtime[], int viewers[], int size)
{
	/*
	Write down your understanding of the code for this function.

	for루프를 통해 size 만큼 반복해요
	- 번호찍기, list_record 실행

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

	count < 3이라면 루프를 반복한다
	- number을 랜덤 % size -> size보다 큰 수가 나오는 것을 방지하기 위해
	for (int i = 0; i < count; i++)
		{
			if (number == result[i])
				duplicated = 1;
		}
	-> 랜덤으로 같은 수가 저장되지 않게 한다

	0일때, 즉 중복되지 않은 수일때만 저장한다

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

	장르별로 몇개의 영화가 있는지를 출력하기 위한 함수

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
	// 사용자가 입력한 문자를 포함하는 타이틀을 알려주는
	// -> strstr 함수를 통해 사용자가 입력한 string이 포함되어있는 title의 포인터를 출력합니다
	// title 한개씩 문자 포함 여부를 검사해야하기 때문에 size만큼 돌아야한다
	// - strstr 타이틀[index] keyword -> == NULL -> 일치하는게 없는거 != NULL 일때만 정보들을 출력

	for (int i = 0; i < size; i++)
	{
		if (strstr(title[i], keyword) != NULL)
		{
			printf("%d. %s [%d, %s] ", i + 1, title[i], year[i], genre_name[genre[i]]);
			printf("Playtime %dmin, Viewers %d\n", playtime[i], viewers[i]);
			count++;
		}
	}

	printf("%d found.\n", count);
}

void random_list(char title[][100], int genre[], int pickup[3])
{
	// Your thought and code here!
	// for문을 통해서 3번 반복한다
	// 랜덤 인덱스의 영화를 출력한다
	// pickup[3] 랜덤 숫자가 저장되어있고 -> index를 숫자로 저장해둔거다

	for (int i = 0; i < 3; i++)
	{
		printf("%d. %s [%s] ", i + 1, title[pickup[i]], genre_name[genre[pickup[i]]]);
	}
}

void count_genre(int genre[], int size, int result[7])
{
	// Your thought and code here!
	// size 반복한다 -> 모든 제목의 장르를 알아서 세야하니까
	// 만약 장르가 i번째 장르 이름이면 result[i]++
	// 하기 전에 result[i] 초기화

	for (int i = 0; i < 7; i++)
		result[i] = 0;

	for (int i = 0; i <= size; i++)
		result[genre[i]]++;
}

int find_max(int num_array[], int size)
{
	int max = 0, max_index = 0;

	// Your thought and code here!
	// size만큼 반복한다 for문으로
	// num_array[i] > max, max = num_array[i]
	// max_index = i

	for (int i = 0; i < size; i++)
		if (num_array[i] > num_array[max_index])
		{
			max = num_array[i];
			max_index = i;
		}

	return max_index;
}
