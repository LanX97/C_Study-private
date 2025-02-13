#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int GetSumRow(int* p, int num);
int GetMaxRow(int** p, int row, int col);

int main9_0()
{
    int row, col;
    int i, j, ** p, maxrow;

    printf("input row=");  // 输入矩阵的行数
    scanf("%d", &row);
    printf("input col=");  // 输入矩阵的列数
    scanf("%d", &col);

    // 根据输入的矩阵的行数和列数来动态建立一个二维数组 p
    p = (int**)malloc(row * sizeof(int*));
    for (i = 0; i < row; i++)
        p[i] = (int*)malloc(col * sizeof(int));

    // 通过输入值对二维数组的元素赋值
    printf("input the number:\n");
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", p[i] + j);

    // 调用函数来计算矩阵中所有行元素之和的最大值
    maxrow = GetMaxRow(p, row, col);
    printf("-------------\n");
    printf("maxrow=%d\n", maxrow);

    // 释放动态分配的内存空间
    for (i = 0; i < row; i++)
        free(p[i]);
    free(p);
    return 0;
}

// 计算矩阵中所有行元素之和的最大值
int GetMaxRow(int** p, int row, int col)
{
    int i, max, t;

    max = GetSumRow(p[0], col);
    for (i = 1; i < row; i++)
    {
        t = GetSumRow(p[i], col);
        if (t > max)
            max = t;
    }
    return (max);
}

// 计算矩阵中某行元素之和
int GetSumRow(int* p, int num)
{
    int sum = 0, i;

    for (i = 0; i < num; i++)
    {
        sum += p[i];
    }
    return(sum);
}
