#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[20];
    gets(str);
    int flag = 1, i = 0, j = strlen(str) - 1;
    while(i < j)
    {
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if(flag == 1){
        printf("���ַ���Ϊ���Ĵ�");
    }else{
        printf("���ַ�����Ϊ���Ĵ�");
    }
    return 0;
}
