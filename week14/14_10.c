#include <stdio.h>
void markArea(int p[5][5], int z[5][5], int xpos, int ypos, int area, int value);
void printMatrix(int p[5][5]); // 5*5 매트릭스의 내용을 출력하는 함수

int main()
{
    int picture[5][5] = {0}; // 원본 패턴
    int zone[5][5] = {0};    // 영역표시용 패턴
    int row = 5, col = 5;    // 가로, 세로 크기
    int area = 0;            // 영역번호
    FILE *fp = fopen("picture.txt", "rt");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            fscanf(fp, "%d", &picture[i][j]);
    }
    fclose(fp);

    printMatrix(picture);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (picture[i][j] != 0 && zone[i][j] == 0)
            {
                // 원본 패턴값이 0이 아니고, 아직 영역체크가 안된 경우
                area++;                    // 새로운 영역 시작
                int value = picture[i][j]; // 패턴값
                markArea(picture, zone, i, j, area, value);
                // 이 칸으로부터 같은 패턴값의 모든 영역을 찾아 마크하라.
            }
        }
    }

    printf("\n%d areas found.\n\n", area);
    printMatrix(zone);
}

void printMatrix(int p[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
}

void markArea(int p[5][5], int z[5][5], int xpos, int ypos, int area, int value)
{
    // 재귀호출 해야 하는데
    // Stop condition
    // --> 1) xpos, ypos이 유효하지 않은 셀을 가리키는 경우, (0,0)~(4,4)
    // --> 2) 찾으려는 value값이 아닌 셀은 검사 진행할 필요가 없음
    // --> 3) 이미 방문했던 셀은 계속 진행할 필요가 없음
    // Recursion을 진행하는 방향(Stop condtion을 향해 가야함)
    // 현재 셀의 동 - 서 - 남 - 북 을 makeArea 해라..
    //
    if (xpos < 0 || ypos < 0 || xpos > 4 || ypos > 4)
        return;
    else if (p[xpos][ypos] != value)
        return;
    else if (z[xpos][ypos] != 0)
        return;
    else
    {
        // 현재 셀에 대해서 zone 마크.
        z[xpos][ypos] = area;
        markArea(p, z, xpos + 1, ypos, area, value);
        markArea(p, z, xpos - 1, ypos - 1, area, value);
        markArea(p, z, xpos, ypos - 1, area, value);
        markArea(p, z, xpos, ypos + 1, area, value);
    }
}