#include "stdio.h"
#include "time.h"
#include "stdlib.h"
#include "myhead.h"
#define NUM 20


void main(void)
{
    int myArr[NUM], k;

    srand((unsigned)time(NULL));

    for(k=0; k<NUM; k++)
    myArr[k] = myRand( );

    printf("\n%d������������ͼ�� \n",NUM);
    myDisplayBar (myArr, NUM, '*');

    printf("\n\n�ȴ����̴�س������ð������......");
    fflush(stdin);
    getchar();

    myBubbleSort(myArr, NUM);

    printf("\nð�������Ľ�������ͼ�� \n");
    myDisplayBar (myArr, NUM, '+');

    printf("\n\n�ȴ����̴�س������ѡ������......");
    fflush(stdin);
    getchar();

    mySelectSort(myArr, NUM);
    printf("\nѡ�������Ľ�������ͼ�� \n");
    myDisplayBar (myArr, NUM, '@');

    printf("\n\n�ȴ����̴�س������");
    fflush(stdin);
    getchar();
}


