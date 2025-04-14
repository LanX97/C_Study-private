#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int num[10], count[6] = {0};
    int i, j, temp, tag = 0;
    srand((unsigned)time(NULL));
    for(i = 0;i < 10;i++)
        num[i] = rand() % 6 + 1;
    /*
    for (i = 1; i < 10; i++)
    {
        tag = 0;
        for (j = 0; j < 10 - i; j++)
        {
            if (num[j+1] < num[j])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
                tag = 1;
            }
        }
        if (tag == 0)
            break;
    }
    */
    for(i = 0;i < 10;i++)
    {
        switch(num[i])
        {
            case 1:count[0]++;break;
            case 2:count[1]++;break;
            case 3:count[2]++;break;
            case 4:count[3]++;break;
            case 5:count[4]++;break;
            case 6:count[5]++;break;
        }
    }

    printf("数组数据为：");
    for(i = 0;i < 10;i++)
        printf("%d ", num[i]);

    printf("\n");

    for(i = 0;i < 6;i++)
        printf("%d: %d\n", i+1, count[i]);

    return 0;
}
