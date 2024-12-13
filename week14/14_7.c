#include <stdio.h>
#include <string.h>
#include <ctype.h>

void rPrint(char *str);

int main()
{
  char str[80];
  fgets(str, 80, stdin);
  if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
  rPrint(str);
  printf("\n");
  return 0;
}

void rPrint(char *str)
{

  if (strlen(str) <= 2)
  {
    for (int i = 0; i < strlen(str); i++)
      printf("%c", toupper(str[i]));
    return;
  }
  else
  {
    rPrint(str + 2);
    printf("%c%c", toupper(str[0]), toupper(str[1]));
  }
}