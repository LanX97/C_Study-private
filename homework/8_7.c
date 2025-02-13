#include<stdio.h>
#include<math.h>

int ADD(int k, int n);

int main8_7()
{
	int k, n;
	printf("Please input k and n: ");
	scanf("%d %d", &k, &n);
	printf("answer is %d", ADD(k, n));

	return 0;
}

int ADD(int k, int n)
{
	int sum;
	if (n == 1)
		return(1);
	sum = (int)pow(n, k) + ADD(k, n - 1);
	return(sum);
}