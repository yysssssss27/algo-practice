#include <stdio.h>

int check(int x, int y, int z)
{
    int num[9];
    int used[10] = { 0 };

    num[0] = x / 100; num[1] = x / 10 % 10; num[2] = x % 10;
    num[3] = y / 100; num[4] = y / 10 % 10; num[5] = y % 10;
    num[6] = z / 100; num[7] = z / 10 % 10; num[8] = z % 10;

    for (int i = 0; i < 9; i++)
    {
        if (num[i] == 0 || used[num[i]])
            return 0;
        used[num[i]] = 1;
    }
    return 1;
}

int main()
{
    for (int x = 123; x <= 329; x++)
    {
        int y = 2 * x;
        int z = 3 * x;

        if (check(x, y, z))
            printf("%d %d %d\n", x, y, z);
    }
    return 0;
}