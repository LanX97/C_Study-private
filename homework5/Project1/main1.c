#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, temp, sum = 0;
    scanf("%d", &num);
    temp = num;

    while(1)
    {
        while(temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }

        if(sum / 10 == 0)
        {
            printf("%dÊÇ%dµÄÊ÷¸ù", sum, num);
            break;
        }

        temp = sum;
        sum = 0;
    }
    return 0;
}
