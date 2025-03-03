#include<stdio.h>
#define PI 3.14159

int main()
{
    float r, S;
    scanf("%f", &r);
    S = PI * r * r;
    printf("%.2lf\n", S);
    return 0;
}
