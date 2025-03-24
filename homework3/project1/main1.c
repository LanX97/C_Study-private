#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c;
    scanf("%d,%d,%d", &a, &b, &c);
    if(a == 0)
    {
        printf("该方程非一元二次方程");
        if(b != 0)
        {
            printf("该方程的根为%f", -c*1.0/b);
        }else{
            printf("该方程无根");
        }
    }else{
        if(b*b-4*a*c > 0)
        {
            printf("该方程有两个不相等的实数根:x1 = %f, x2 = %f", (-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));
        }else{
            if(b*b-4*a*c == 0)
            {
                printf("方程有两个相等的实数根:x1 = x2 = %f", -b/2.0*a);
            }else{
                printf("该方程有两个不等的复数根:x1 = %d + %c*%d, x2 = %d - %c*%d", -b/2*a, 'j', (int)(sqrt(4*a*c-b*b)/2*a), -b/2*a, 'j', (int)(sqrt(4*a*c-b*b)/2*a));
            }
        }
    }



    return 0;

}
