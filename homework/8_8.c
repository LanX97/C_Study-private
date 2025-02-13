#include<stdio.h>

int F(int i);

int main8_8()
{
	int i;
	for (i = 1; i <= 40; i++)
	{
		printf("F[%2d] = %-9d", i, F(i));
		if (i % 4 == 0) {
			printf("\n");
		}
	}
	
	return 0;
}

int F(int i)
{
	if (i <= 2)
		return 1;

	return(F(i - 1) + F(i - 2));
}
