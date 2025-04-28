#include <stdio.h>
#include <stdlib.h>

int Affinity(int );
int main()
{
    //printf("%d", Affinity(284));
    int i, num1, num2;
    for(i = 100;i<=10000;i++)
    {
        num1 = Affinity(i);
        num2 = Affinity(num1);
        if(i == num2)
        {
            printf("%d and %d\n", num1, num2);
        }
    }
    return 0;
}

int Affinity(int n)
{
    int sum = 1, i;
    for(i = 2;i < n;i++)
    {
        if(n % i == 0)
            sum += n/i;
    }
    return sum;
}
