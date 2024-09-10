#include <stdio.h>

int main()
{
  int width, height; // 가로크기, 세로크기
  int area;          // 직사각형의 넓이

  /*
  1. 가로, 세로 길이를 입력받는다
  2. 가로, 세로를 곱하여 넓이를 구한다
  3. 넓이를 출력한다
  */

  scanf("%d %d", &width, &height);
  area = width * height;
  printf("%d", area);

  return 0;
}