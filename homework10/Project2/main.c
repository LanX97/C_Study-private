#include <stdio.h>
#include <stdlib.h>

void Delstr(char str[], char substr[]);

int main()
{
    char str[30], substr[10];
    printf("请输入字符串：");
    gets(str);
    printf("请输入待查找和删除的子串：");
    gets(substr);
    Delstr(str, substr);
    return 0;
}

void Delstr(char str[], char substr[])
{
    int i, j, len = 0, sum = 0, flag = 1;
    for(i = 0;substr[i] != '\0';i++)
        len++;
    for(i = 0;str[i] != '\0';i++)
    {
        flag = 1;
        if(str[i] == substr[0])
        {
            for(j = 1;substr[j] != '\0';j++)
            {
                if(str[i+j] != substr[j])
                    flag = 0;
            }

            if(flag == 1)
            {
                sum++;
                for(j = 0;str[i+j+len] != '\0';j++)
                    str[i+j] = str[i+j+len];
                str[i+j] = '\0';
            }

        }
    }
    if(sum == 0)
    {
        printf("not found");
    }else{
        printf("字符串%s出现了%d次，删除后的字符串为：%s", substr, sum, str);
    }
}
