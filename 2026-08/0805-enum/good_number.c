#include <stdio.h>

int check(int m)
{
    int pos=1;
    while(m)
    {
        int s=m%10;
        if(pos%2==1)
        {
            if(s%2==0)
                return 0;
        }

        else
        {
            if(s%2==1)
                return 0;
        }

        m/=10;
        pos++;
    }

    return 1;
}

int main(void)
{
    int n;
    scanf("%d",&n);
    int space,result=0;

    for(int i=1;i<=n;i++)
    {
        space=check(i);
        if(space==1)
        {
            result++;
        }
    }

    printf("%d",result);
    return 0;
}