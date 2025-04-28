#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Decmps(int );

int main()
{
    Decmps(24);
    return 0;
}

void Decmps(int x)
{
    if(x <= 1)
        return ;
    int i, j, flag;
    for(i = 2;i <= x - i;i++)
    {
        flag = 1;
        for(j = 2;j < sqrt(x);j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            for(j = 2;j < sqrt(x-i);j++)
            {
                if(i % (x-i) == 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag)
            printf("%d = %d + %d\n", x, i, x-i);
    }
}
