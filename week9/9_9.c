#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *findLongestWord(char *str);

int main()
{

  char line[100]; // 입력받을 문장
  fgets(line, 100, stdin);
  line[strlen(line) - 1] = '\0';
  char *p = findLongestWord(line);
  // 이곳에 코드를 작성하라
  char word[10];
  int i = 0;
  while (p[i] != ' ' && p[i] != '\0')
  {
    word[i] = p[i];
    i++;
  }
  printf("The longest word in \"%s\" is \"%s\", with a length of %d.",line, word, strlen(word));
  return 0;
}

char *findLongestWord(char *str)
{
}