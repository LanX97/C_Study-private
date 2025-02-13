#include<stdio.h>

int main9_3()
{
	char arr[10];
	char* p1, * p2;
	printf("Please input a string(len < 10):  ");
	gets(arr);
	p1 = arr;
	p2 = arr;
	while (*p2 != '\0')
		p2 += 1;
	p2--;
	int m = HWstring(p1, p2);
	if (m == 0)
		printf("NO");
	else
		printf("YES");

	return 0;
}

int HWstring(char* pstart, char* pend)
{
	while (pstart < pend)
	{
		if (*pstart != *pend)
			return 0;
		pstart++;
		pend--;
	}
	return 1;
}