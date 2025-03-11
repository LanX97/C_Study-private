#include<stdio.h>
#include<math.h>

int main()
{
    float x, y;
    scanf("%f%f", &x, &y);
    if(fabs(x*x + y*y - 1) <= 1e-3)
        printf("Y\n");
    else
        printf("F\n");
    return 0;
}
