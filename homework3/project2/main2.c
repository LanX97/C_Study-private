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
        printf("计算正确！");
    }else{
        printf("计算错误！正确答案应为%d", ans);
    }

    return 0;
}
