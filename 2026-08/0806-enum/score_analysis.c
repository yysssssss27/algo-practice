#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int max = -1;
    int min = 101;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        sum += x;

        if (x > max)
            max = x;
        if (x < min)
            min = x;
    }
    double result = (double)sum / n;

    printf("%d\n%d\n%.2f\n", max, min, result);
    return 0;

}