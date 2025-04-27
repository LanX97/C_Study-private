#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char str[30], substr[10];
   int i, j, k, count = 0, flag = 1;
   printf("请输入字符串：");
   gets(str);
   printf("请输入待查找子串：");
   gets(substr);

   for(i = 0;i < strlen(str);i++)
   {
       if(str[i] == substr[0])
        {
            k = i + 1;
            for(j = 1;j < strlen(substr);j++)
            {
                if(str[k] != substr[j])
                {
                    flag = 0;
                    break;
                }
                k++;
            }

            if(flag == 1)
            {
                count++;
                i += 2;
            }
            flag = 1;
        }
   }

   printf("字符串%s出现了%d次", substr, count);

    return 0;
}
