#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c;
    scanf("%d,%d,%d", &a, &b, &c);
    if(a == 0)
    {
        printf("�÷��̷�һԪ���η���");
        if(b != 0)
        {
            printf("�÷��̵ĸ�Ϊ%f", -c*1.0/b);
        }else{
            printf("�÷����޸�");
        }
    }else{
        if(b*b-4*a*c > 0)
        {
            printf("�÷�������������ȵ�ʵ����:x1 = %f, x2 = %f", (-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));
        }else{
            if(b*b-4*a*c == 0)
            {
                printf("������������ȵ�ʵ����:x1 = x2 = %f", -b/2.0*a);
            }else{
                printf("�÷������������ȵĸ�����:x1 = %d + %c*%d, x2 = %d - %c*%d", -b/2*a, 'j', (int)(sqrt(4*a*c-b*b)/2*a), -b/2*a, 'j', (int)(sqrt(4*a*c-b*b)/2*a));
            }
        }
    }



    return 0;

}
