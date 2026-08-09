#include <stdio.h>

int a[10][10];
int dx[] = { 0,1,0,-1 };//向右，向左
int dy[] = { 1,0,-1,0 };//向下，向上

int main()
{
    int n;
    scanf("%d", &n);

    int x = 0, y = 0, dir = 0;
    for (int num = 1; num <= n * n; num++)
    {
        a[x][y] = num;
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        //撞墙或位置已经有数
        if (nx < 0 || ny < 0 || nx >= n || ny >= n || a[nx][ny])
        {
            dir = (dir + 1) % 4;//旋转90度
            nx = x + dx[dir];
            ny = y + dy[dir];
        }
        x = nx;
        y = ny;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}