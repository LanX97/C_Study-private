#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randN1N2(int , int );
char randOperator( );
int randLmt100( );
int addLmt100(int , int );
int subLmt100(int , int );
int mulLmt100(int , int );
int divLmt100( );

int main()
{
    int probNum[4] = {0}, ansNum[4] = {0};
    int num1, num2, i;
    //printf("%c", randOperator( ));
    srand((unsigned)time(NULL));

    while(1)
    {
        num1 = randLmt100( );
        num2 = randLmt100( );
        switch(randOperator( ))
        {
            case '+': ansNum[0] += addLmt100(num1, num2);probNum[0]++;break;
            case '-': ansNum[1] += subLmt100(num1, num2);probNum[1]++;break;
            case '*': ansNum[2] += mulLmt100(num1, num2);probNum[2]++;break;
            case '/': ansNum[3] += divLmt100( );probNum[3]++;break;
        }
        printf("\n\n想继续做吗？\n如果想继续，请按回车；如果不想继续键盘输入字母’N‘或’n‘后回车");
        fflush(stdin);
        if('n' == getchar() || 'N' == getchar())
            break;

    }
    
    printf("\n+，-，*，/题目个数和答对个数分别为：\n");
    for(i = 0;i < 4;i++)
    	printf("%4d", probNum[i]);
    printf("\n");
    for(i = 0;i < 4;i++)
    	printf("%4d", ansNum[i]);
    
    return 0;
}

int randN1N2(int N1, int N2)
{
    if(N1 <= N2)
    {
        return rand() % (N2 - N1 + 1) + N1;
    }else{
        return -1;
    }
}

char randOperator( )
{
    switch(randN1N2(1,4))
    {
        case 1: return '+';
        case 2: return '-';
        case 3: return '*';
        case 4: return '/';
    }
}

int randLmt100( )
{
    return randN1N2(0,99);
}

int addLmt100(int num1, int num2)
{
    int temp, answer;
    if(num1 < num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    printf("%d + %d = ", num1, num2);
    scanf("%d", &answer);
    if(answer == num1 + num2)
    {
        printf("\n\n你答对了！你真棒！");
        return 1;
    }else{
        printf("\n\n对不起，你答错了！");
        return 0;
    }
}

int subLmt100(int num1, int num2)
{
    int temp, answer;
    if(num1 < num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    printf("%d - %d = ", num1, num2);
    scanf("%d", &answer);
    if(answer == num1 - num2)
    {
        printf("\n\n你答对了！你真棒！");
        return 1;
    }else{
        printf("\n\n对不起，你答错了！");
        return 0;
    }
}

int mulLmt100(int num1, int num2)
{
    int answer;
    printf("%d * %d = ", num1, num2);
    scanf("%d", &answer);
    if(answer == num1 * num2)
    {
        printf("\n\n你答对了！你真棒！");
        return 1;
    }else{
        printf("\n\n对不起，你答错了！");
        return 0;
    }
}

int divLmt100( )
{
    int num1, num2, answer;
    while(1)
    {
        num1 = randLmt100( );
        num2 = randLmt100( );
        if(num1 % num2 == 0 && num2 != 0)
            break;
    }

    printf("%d / %d = ", num1, num2);
    scanf("%d", &answer);
    if(answer == num1 / num2)
    {
        printf("\n\n你答对了！你真棒！");
        return 1;
    }else{
        printf("\n\n对不起，你答错了！");
        return 0;
    }
}


