#include <stdio.h>
#include <string.h>

void rPrint(char* str);

int main() {
  char str[80];
  fgets(str, 80, stdin);
  str[strlen(str)-1]='\0';
  rPrint(str);
  printf("\n");
  return 0;
}

void rPrint(char* str){
    if(strlen(str)<=2)
    printf("%s", str);

}