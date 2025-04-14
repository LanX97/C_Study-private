#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int num[3][4];
   int i, j, k, temp;
   srand((unsigned)time(NULL));
   for(i = 0;i < 3;i++)
       for(j = 0;j < 4;j++)
            num[i][j] = rand() % 20 + 1;


   printf("二维数组为：\n");
   for(i = 0;i < 3;i++)
    {
       for(j = 0;j < 4;j++)
            printf("%2d ", num[i][j]);
       printf("\n");
    }
    printf("\n");

    for(j = 0;j < 4;j++)
        for(i = 1;i < 3;i++)
            for(k = 0;k < 3 - i;k++)
                if(num[k][j] > num[k+1][j])
                {
                    temp = num[k][j];
                    num[k][j] = num[k+1][j];
                    num[k+1][j] = temp;
                }


    printf("按列排序后的结果为：\n");
    for(i = 0;i < 3;i++)
    {
       for(j = 0;j < 4;j++)
            printf("%2d ", num[i][j]);
       printf("\n");
    }

    return 0;
}
