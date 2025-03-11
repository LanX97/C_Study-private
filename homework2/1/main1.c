#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, p, S, C;
    scanf("%f%f%f", &a, &b, &c);
    if(a + b > c && a - b < c)
    {
        p = (a + b + c)/2;
        S = sqrt(p * (p - a) * (p - b) * (p - c));
        C = a + b + c;
        printf("%.2f\n%.2f\n", S, C);
    }else{
        printf("不构成三角形");
    }
    return 0;
}
