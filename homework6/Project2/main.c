#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num1[10], num2[10];
    int i, j, count = 1, tag = 1;
    srand((unsigned)time(NULL));
    for(i = 0;i < 10;i++)
        num1[i] = rand() % 10 + 1;

    printf("数组数据为：\n");
    for(i = 0;i < 10;i++)
        printf("%d ", num1[i]);

    num2[0] = num1[0];
    for(i = 1;i < 10;i++)
    {
        tag = 1;
        for(j = 0;j < count;j++)
        {
            if(num1[i] == num2[j])
            {
                tag = 0;
                break;
            }
        }
        if(tag == 1)
        {
            num2[count] = num1[i];
            count++;
        }

    }

    printf("\n共出现%d个数字：\n", count);
    for(i = 0;i < count;i++)
        printf("%d ", num2[i]);

    return 0;

}
