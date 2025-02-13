#include<stdio.h>
#include<string.h>

char* substr(char* s, int startloc, int len);

int main9_4()
{
	char arr[80];
	int m, n;
	printf("Please input a string ");
	gets(arr);
	printf("Please input the startloc: ");
	scanf("%d", &m);
	printf("Please input the len: ");
	scanf("%d", &n);
	printf("%s", substr(arr, m, n));
	return 0;
}

char* substr(char* s, int startloc, int len)
{
	static char str[80];
	if (startloc < 0 || startloc >= strlen(s) || len < 0 || len > strlen(s) - startloc)
		return(NULL);
	for (int i = 0; i < len; i++)
		str[i] = s[startloc + i];
	str[len] = '\0';
	return (str);
}