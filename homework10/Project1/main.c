#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float ComputeMean(float a[], int n);
float ComputeRmse(float a[], int n);

int main()
{
    float a[10];
    int i;
    srand((unsigned int)time(NULL));
    for(i = 0;i < 10;i++)
        a[i] = rand()%100+1;

    for(i = 0;i < 10;i++)
        printf("%-4.0f", a[i]);

    printf("\n计算均值为");
    printf("%.2f", ComputeMean(a, 10));

    printf("\n计算标准差为");
    printf("%.2f", ComputeRmse(a, 10));

    return 0;
}

float ComputeMean(float a[], int n)
{
    float sum = 0;
    int i;
    for(i = 0;i < n;i++)
        sum += a[i];
    return sum/n;
}

float ComputeRmse(float a[], int n)
{
    float mean, RMSE, sum = 0;
    int i;
    mean = ComputeMean(a, n);
    for(i = 0;i < n;i++)
        sum += (a[i]-mean)*(a[i]-mean);
    RMSE = sqrt(sum/n);
    return RMSE;
}
