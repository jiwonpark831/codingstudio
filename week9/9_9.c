#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *findLongestWord(char *str);

int main()
{

  char line[100]; // 입력받을 문장
  fgets(line, 100, stdin);
  if (line[strlen(line) - 1] == '\n')
    line[strlen(line) - 1] = '\0';

  // 이곳에 코드를 작성하라
  char *p = findLongestWord(line);
  char word[100];
  int i = 0;
  while (p[i] != ' ' && p[i] != '\0')
  {
    word[i] = p[i];
    i++;
  }
  word[i] = '\0';

  printf("The longest word in \"%s\" is \"%s\", ", line, word);
  printf("with a length of %d.", strlen(word));
  return 0;
}

char *findLongestWord(char *str)
{
  char *max = NULL;
  char *temp = str;
  int templen = 0;
  int maxlen = 0;

  for (int i = 0; i <= strlen(str); i++)
  {
    if (str[i] != ' ' && str[i] != '\0')
      templen++;
    else
    {

      if (templen > maxlen)
      {
        maxlen = templen;
        max = temp;
      }
      templen = 0;
      temp = str + i + 1;
    }
  }
  return max;
}