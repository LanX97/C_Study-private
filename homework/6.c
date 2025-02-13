#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define CHANGE 1

int main3()
{
//第一题(2550)
	/*int sum = 0, i;

	for (i = 2; i <= 100; i += 2)
	{
		sum += i;
	}
	printf("sum = %d", sum);*/

// 第二题
	/*int sum = 0, i;

	for (i = 1; i <= 99; i += 2)
	{
		sum += i*(i+1)*(i+2);
	}
	printf("sum = %d", sum);*/

//第三题
	/*int i = 1, n = 1, sum = 0, r = 1;

	while (i <= 10)
	{
		while (n <= i)
		{
			r *= n;
			n += 1;
		}
		sum += r;
		i += 1;
	}
	printf("sum = %d", sum);*/

//第四题
	/*int sum = 0, n, a, r, i, j;
	printf("Please enter n and a: ");
	scanf("%d %d", &n, &a);
	if (n <= 0 || a <= 0)
	{
		printf("input error!\n");
		exit(-1);
	}

	for (i = 1; i <= n; i++)
	{
		r = 1;
		for (j = 1; j <= i; j++)
		{
			r *= a;
		}
		sum += r;
	}

	printf("sum = %d a = %d n = %d\n", sum, a, n);
	return 0;*/

//第五题*
	/*float sum1 = 1, sum2 = 1, m, n;
	int i, j;

	m = 2;
	n = 1;
	for (i = 1; i <= 50; i++)
	{
		sum1 *= (float)m / n;
		m += 2;
		n += 2;
	}
	
	m = 2;
	n = 3;
	for (j = 1; j <= 50; j++)
	{
		sum2 *= (float)m / n;
		m += 2;
		n += 2;
	}

	printf("%f", 2*(sum1 * sum2));*/

//第六题*
	/*int i = 0, j = 1;
	float r = -1, sum = 0, x;

	printf("Please input a number: ");
	scanf("%f", &x);

	do{
		i++;
		while (j <= 2 * i - 1)
		{
			r *= x / j;
			j++;
		}
		r = -r;
		printf("%f\n", r);
		sum += r;
	} while (fabs(r) >= 1e-5);

	printf("sin(%d) = %f i = %d", x, sum, i-1);*/

//第七题*
	/*int i, a, sum, num;
	for (i = 100; i < 1000; i++)
	{
		num = i;
		sum = 0;
		while (num != 0)
		{
			a = num % 10;
			sum += a * a * a;
			num /= 10;
		}
		if (sum == i)
			printf("%d Yes\n", i);
	}*/

//第九题
	/*int x, a, sum = 0;

	printf("Please enter a number: ");
	scanf("%d", &x);

	while (x != 0)
	{
		a = x % 10;
		sum += a;
		x /= 10;
	}

	printf("sum = %d", sum);*/
	
//第十题*
	/*int i = 0, j, x, a, sum = 0, num, t = 1;

	printf("Please enter a number: ");
	scanf("%d", &x);

	num = x;
	while (num != 0)
	{
		num /= 10;
		i++;
	}
	printf("i = %d\n", i);

	num = x;
	while (num != 0)
	{
		t = 1;
		a = num % 10;
		for (j = 1; j <= i-1; j++)
		{
			t *= 10;
		}
		sum += t * a;
		num /= 10;
		i--;	
	}
	
	if (sum == x)
		printf("hui wen shu yes");
	else
		printf("hui wen shu no");*/

//第十三题
	/*int m, n, size, i, j, k;
	printf("Please input a number: ");
	scanf("%d", &size);

	if (size <= 0 || size % 2 == 0)
	{
		printf("input error!");
		exit(-1);
	}

	for (i = 1; i <= size; i++)
	{
		n = i <= (size + 1) / 2 ? size - 2*i + 2 : 2*i - size;
		m = (size - n) / 2 + 15;
		printf("%d %d", m, n);
		for (j = 1; j <= m; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= n; k++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	/*int size, i, j, m, k, r;

	printf("Please input size and r: ");
	scanf("%d %d", &size, &r);

	for (j = 1; j <= r; j++)
	{
		m = 2 * (r - 1) - 2 * (j - 1) + 15;
		for (i = 1; i <= m; i++)
		{
			printf(" ");
		}
		for (k = 1; k <= size; k++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	/*int r, i, m, j;
	printf("Please input r: ");
	scanf("%d", &r);

	for (i = 1; i <= r; i++)
	{
		m = 1 + 2 * (i - 1);
		for (j = 1; j <= m; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

//第十四题
	/*int c;
	while ((c = getchar()) != "\n")
	{
		if (CHANGE) {
			if (c >= 'a' && c <= 'x' || c >= 'A' && c <= 'X')
				c += 2;
			if (c == 'Y' || c == 'Z' || c == 'y' || c == 'z')
				c -= 24;
			putchar(c);
		}
	}
	printf("\n");*/

//第十五题
	/*int n, i;
	printf("Please input a number: ");;
	scanf("%d", &n);
	printf("%d =", n);
	for (i = 2; i <= n; i++) 
	{	
		while(n != i)
		if (n % i == 0)
		{
			printf("%d * ", i);
			n = n / i;
		}else {
			break;
		}
	}
	printf("%d\n", n);
	return 0;*/
}