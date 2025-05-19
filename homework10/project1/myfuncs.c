#include "stdio.h"
#include "time.h"
#include "stdlib.h"

int myRand (void)
{
    int num;
    num = rand()%50+1;
    return num;
}

void myBubbleSort(int *arrp, int num)
{
    int i, j, temp;
    for(i = 1;i < num;i++)
    {
        for(j = 0;j < num-i;j++)
        {
            if(arrp[j] > arrp[j+1])
            {
                temp = arrp[j];
                arrp[j] = arrp[j+1];
                arrp[j+1] = temp;
            }
        }
    }
}

void mySelectSort(int *arrp, int num)
{
    int i, j, temp, k;
    for(i = 0;i < num-1;i++)
    {
        k = i;
        for(j = i+1;j < num;j++)
        {
            if(arrp[k] < arrp[j])
                k = j;
        }
        if(k != i)
        {
            temp = arrp[i];
            arrp[i] = arrp[k];
            arrp[k] = temp;
        }
    }

}

void myDisplayBar (int array[ ], int num, char cStar)
{
    int i, j;
    for(i = 0;i < num;i++)
    {
        printf("[%-2d]%5d  ", i, array[i]);
        for(j = 0;j < array[i];j++)
            printf("%c", cStar);
        printf("\n");
    }
}
