#include<stdio.h>

void fun(int x, int y, int z, int n);

int main8_10()
{
	int x, y, z, n;
	printf("Please input the amount of red ,white ,black balls, and num: ");
	scanf("%d %d %d %d", &x, &y, &z, &n);
	fun(x, y, z, n);

	return 0;
}

void fun(int x, int y, int z, int n)
{
	int i, j, count = 0;
	if (n <= 2 || x <= 1 || y <= 1 || z <= 1)
		return;
	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= y; j++)
		{
			if (n - i - j >= 0 && z >= n - i - j)
			{
				printf("red = %d white = %d black = %d\n", i, j, n - i - j);
				count++;
			}
			if (i + j == n)
			{
				break;
			}

		}
		if (i == n)
		{
			break;
		}
	}

	printf("%d", count);
	return;
}
	