#include<stdio.h>

int main()
{
    int a, b, d, ans;
    char c;
    scanf("%d %d ", &a, &b);
    //fflush(stdin);
    scanf("%c", &c);
    //printf("%d %d %c", a, b, c);

    switch(c)
    {
        case '+':printf("%d + %d =", a, b);
                 scanf("%d", &d);
                 ans = a + b;
                 break;
        case '-':printf("%d - %d =", a, b);
                 scanf("%d", &d);
                 ans = a - b;
                 break;
        case '*':printf("%d * %d =", a, b);
                 scanf("%d", &d);
                 ans = a * b;
                 break;
        case '/':printf("%d / %d =", a, b);
                 scanf("%d", &d);
                 ans = a / b;
                 break;
    }
    if(ans == d)
    {
        printf("������ȷ��");
    }else{
        printf("���������ȷ��ӦΪ%d", ans);
    }

    return 0;
}
