#include<stdio.h>

int C(int n, int m);

int main8_9()
{
	int m, n;
	printf("Please input m and n: ");
	scanf("%d %d", &m, &n);
	printf("C(%d %d) = %d", n, m, C(n, m));
	return 0;
}

int C(int n, int m)
{
	if (n > m || n < 1 ||m < 1)
		return(-1);
	if (n == m)
		return 1;

	return(m / (m - n) * C( n, m - 1));
}