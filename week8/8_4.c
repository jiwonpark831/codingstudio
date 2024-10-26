#include <stdio.h>

void PrintStar(int size);

int main()
{
  int star;

  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &star);
    PrintStar(star);
  }

  return 0;
}

void PrintStar(int size)
{
  for (int i = 0; i < size; i++)
    printf("*");
  printf("\n");
}
