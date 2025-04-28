#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GetData(int a[], int N);
void SortData(int a[], char ch, int N);

int main()
{
    srand((unsigned int)time(NULL));
    int a[10];
    int i;
    char c;
    GetData(a, 10);
    for(i = 0;i < 10;i++)
        printf("%d ", a[i]);
    printf("\n�������ַ�A����������������У������ַ�D���������ݽ��н������У������룺");
    c = getchar();
    SortData(a, c, 10);
    for(i = 0;i < 10;i++)
        printf("%d ", a[i]);

    return 0;
}

void GetData(int a[], int N)
{
    int i;
    for(i = 0;i < N;i++)
        a[i] = rand() % 99 + 1;
}

 void SortData(int a[], char ch, int N)
 {
     int i, j, temp;
     if(ch == 'A' || ch == 'a')
     {
         for(i = 1;i < N;i++)
            for(j = 0;j < N - i;j++)
                if(a[j] > a[j+1])
                {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
     }else if(ch == 'D' || ch == 'd')
     {
         for(i = 1;i < N;i++)
            for(j = 0;j < N - i;j++)
                if(a[j] < a[j+1])
                {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
     }else{printf("error\n");}
 }
