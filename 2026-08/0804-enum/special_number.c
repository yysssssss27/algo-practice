#include<stdio.h>

int check(int n)
{
    while (n)
    {
        int num = n % 10;
        n /= 10;
        if (num == 1 || num == 2 || num == 9 || num == 0)
        {
            return 1;

        }
    }
    return 0;
}

int main()
{
    int m, result = 0;
    scanf("%d", &m);

    for (int i = 1; i <= m; i++)
    {
        if (check(i))
            result += i;
    }

    printf("%d", result);

    return 0;
}