#include<stdio.h>
#define PI 3.1415926

main1() 
{

//第一题
	/*解法一
	char ch1, ch2, ch3, ch4;

	ch1 = getchar();
	ch2 = getchar();
	ch3 = getchar();
	ch4 = getchar();

	printf("%c%c%c%c", ch4, ch3, ch2, ch1);*/

	//解法二
	/*int a, b, c, d, A;

	scanf("%X", &A);
	a = A >> 12;
	b = A - (a << 12) >> 8;
	c = A - (a << 12) - (b << 8) >> 4;
	d = A << 28 >> 28;
	printf("%X%X%X%X\n", d, c, b, a);*/

//第二题
	/*int a, b;

	printf("please enter the value of a and b: ");
	scanf("%d %d", &a, &b);
	printf("before: a = %d b = %d\n", a, b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("after: a = %d b = %d\n", a, b);

	return 0;
}*/

//第三题
	/*double r, S, C;
	printf("please enter radius: ");
	scanf("%lf", &r);

	C = 2 * PI * r;
	S = PI * r * r;

	printf("C = %lf S = %lf", C, S);
	return 0;*/

//第四题
	/*int a;
	printf("please enter a Negative hexadecimal number: ");
	scanf("%X", &a);
	printf("-%X\n", -a);

	return 0;*/

//第七题
	/*char ch;
	
	ch = getchar();
	printf("%c   %d\n", ch - 1, ch - 1);
	printf("%c   %d\n", ch, ch);
	printf("%c   %d\n", ch + 1, ch + 1);*/

//第八题
	/*float C, F;
	printf("please enter temperature: ");
	scanf("%f", &C);

	F = (C + 32) * 9 / 5;
	printf("%.2f", F);*/

//第九题
	/*int a, b, c, input;
	printf("please enter a three-digit number: ");
	scanf("%d", &input);
	
	a = input / 100;
	b = (input - 100 * a) / 10;
	c = input % 10;

	printf("%d", c * 100 + b * 10 + a);
	return 0;*/

//第十题
	/*int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("before a = %d b = %d c = %d\n", a, b, c);
	
	a = a + b + c;
	b = a - b - c;
	c = a - b - c;
	a = a - b - c;

	printf("after a = %d b = %d c = %d\n", a, b, c);
	return 0;*/

}

