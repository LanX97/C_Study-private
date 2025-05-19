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

    printf("\n%d个随机数及其棒图： \n",NUM);
    myDisplayBar (myArr, NUM, '*');

    printf("\n\n等待键盘打回车后进行冒泡排序......");
    fflush(stdin);
    getchar();

    myBubbleSort(myArr, NUM);

    printf("\n冒泡排序后的结果及其棒图： \n");
    myDisplayBar (myArr, NUM, '+');

    printf("\n\n等待键盘打回车后进行选择排序......");
    fflush(stdin);
    getchar();

    mySelectSort(myArr, NUM);
    printf("\n选择排序后的结果及其棒图： \n");
    myDisplayBar (myArr, NUM, '@');

    printf("\n\n等待键盘打回车后结束");
    fflush(stdin);
    getchar();
}


