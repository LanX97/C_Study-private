#include<stdio.h>

int exchange_arr(int arr1[], int arr2[], int len1, int len2);

int main9_1()
{
	int arr1[3] = { 1, 2, 3 };
	int arr2[3] = { 4, 5, 6 };
	int len1 = sizeof(arr1) / sizeof(int);
	int len2 = sizeof(arr2) / sizeof(int);
	int m = exchange_arr(arr1, arr2, len1, len2);
	int i, j;

	if (m == 1)
		printf("error!");
	else {
		for (i = 0; i < len1; i++)
			printf("%d ", arr1[i]);
		printf("\n");
		for (i = 0; i < len2; i++)
			printf("%d ", arr2[i]);
	}

	return 0;
}

int exchange_arr(int arr1[], int arr2[], int len1, int len2)
{	
	int i, m, temp;
	if (len1 != len2)
		return 1;

	for (i = 0; i < len1; i++)
	{
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	
	return 0;

}