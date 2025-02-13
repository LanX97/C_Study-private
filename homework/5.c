#include<stdio.h>

int main2()
{
//第一题
	/*int a;
	printf("please enter an integer: ");
	scanf("%d", &a);
	
	if (a >= 0) {
		if (a % 2 == 0) {
			printf("a is positive even number\n");
		}else {
			printf("a is positive odd number\n");
		}
	}
	else {
		if (a % 2 == 0) {
			printf("a is negative even number\n");
		}
		else {
			printf("a is negative odd number\n");
		}
	}*/

//第二题
	/*int a, sign;
	printf("please enter an integer: ");
	scanf("%d", &a);

	if (a > 0){
		sign = 1;
		printf("sign = %d", sign);
	}
	else if (a < 0) {
		sign = -1;
		printf("sign = %d", sign);
	}
	else {
		sign = 0;
		printf("sign = %d", sign);
	}*/

//第三题
	/*int num1, num2, num3;
	printf("please enter three integers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num2 >= num1) {
		if (num3 >= num2) {
			printf("%d %d %d", num1, num2, num3);
		}
		else {
			if (num1 >= num3)
				printf("%d %d %d", num3, num1, num2);
			else
				printf("%d %d %d", num1, num3, num2);
		}
	}
	else {
		if (num2 >= num3) {
			printf("%d %d %d", num3, num2, num1);
		}
		else {
			if (num1 >= num3)
				printf("%d %d %d", num2, num3, num1);
			else
				printf("%d %d %d", num2, num1, num3);
		}
	}*/

// 第四题
	/*int num;

	printf("*****Time*****\n1 morning\n2 afternoon\n3 night\nPlease enter your choice: ");
	scanf("%d", &num);

	switch (num)
	{
		case 1: 
			printf("Good morning\n");
			break;
		case 2:
			printf("Good afternoon\n");
			break;
		case 3:
			printf("Good night\n");
			break;
		default:
			printf("Selection error!\n");
	}*/

//第五题
	/*int year, month;
	printf("Please enter year and month: ");
	scanf("%d %d", &year, &month);
	switch (month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 days");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30 days");
			break;
		case 2:
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
				printf("29 days");
			}
			else {
				printf("28 days");
			}
		default("Input error!");
		
	}*/

//第六题
	/*int c, s;
	float p, w, f, d;
	printf("Please enter the value of p, w(t), s(km): ");
	scanf("%f %f %d", &p, &w, &s);

	c = (s + 1) / 250;
	switch (c)
	{
		case 0:
			d = 0;
			break;
		case 1:
			d = 0.02;
			break;
		case 2:
		case 3:
			d = 0.05;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			d = 0.08;
			break;
		case 8:
		case 9:
		case 10:
		case 11:
			d = 0.1;
			break;
		default:
			d = 0.2;
	}
	f = p * w * s * (1 - d);
	printf("The gross freight is %.2f\n", f);*/

//第七题
	/*int score, a;
	printf("Please enter your score: ");
	scanf("%d", &score);
	a = score / 10;
	switch (a)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("E\n");
			break;
		case 6:
			printf("D\n");
			break;
		case 7:
			printf("C\n");
			break;
		case 8:
			printf("B\n");
			break;
		case 9:
		case 10:
			printf("A\n");
			break;
		default:
			printf("Input error!\n");
	}*/

//第八题
	/*int input;
	printf("Please enter a number: ");
	scanf("%d", &input);

	if ((input % 3 == 0) && (input % 5 == 0) && (input % 7 == 0))
		printf("%d can be divisible by 3, 5, 7\n", input);
	else if ((input % 5 == 0) && (input % 7 == 0))
		printf("%d can be divisible by 5, 7\n", input);
	else if ((input % 3 == 0) && (input % 7 == 0))
		printf("%d can be divisible by 3, 7\n", input);
	else if ((input % 3 == 0) && (input % 5 == 0))
		printf("%d can be divisible by 3, 5\n", input);
	else if (input % 3 == 0)
		printf("%d can be divisible by 3\n", input);
	else if (input % 5 == 0)
		printf("%d can be divisible by 5\n", input);
	else if (input % 7 == 0)
		printf("%d can be divisible by 7\n", input);
	else
		printf("%d can't be divisible by 3, 5, 7\n", input);*/

	return 0;
}