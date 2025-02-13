#include<stdio.h>
#include<memory.h>
#include<string.h>

int main7() {

	//char ch;
	//int a[26];
	//memset(a, 0, 26 * sizeof(int));
	//while((ch = getchar()) != '\n')			//逐个读取用户输入，直到遇到回车
	//{
	//	if (ch >= 'A' && ch <= 'Z')			//当ch是大写时对应的数组元素加一
	//	{
	//		a[ch - 'A']++;					//索引和字母的关系	ch = i + 'A'   
	//	}
	//}

	//for (int i = 0; i < 26; i++)			//数组遍历
	//{
	//	if (i % 9 == 0)
	//	{
	//		printf("\n");
	//	}
	//	printf("%c(%d)   ", i + 'A', a[i]);
	//}

//2.
//	int arr[10];
//	int i, j, m = 0, n = 9, count = 0, num;
//
//	printf("Please input ten numbers : ");
//	for (i = 1; i < 11; i++)		//循环十次
//	{
//		scanf("%d", &num);
//
//		if (num % 2 != 0)			//检验输入的数的奇偶性，赋值到数组两头
//		{
//			arr[m] = num;
//			m++;
//			count++;				//计算奇数个数
//		}else {
//			arr[n] = num;
//			n--;
//		}
//	}
//
//	int temp;
//
//	for (i = 0; i < count - 1; i++)			//奇数选择排序法
//	{
//		for (j = i + 1; j < count; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//
//	for (i = 0; i < 10 - 1 - count ; i++)				//偶数冒泡排序法
//	{
//		for (j = count; j < 10 - 1- i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++)				//遍历数组
//	{
//		printf("arr[%d] = %d\n", i, arr[i]);
//	}

//3.
//	int arr[10];
//	int i, j, max_num = 0, min_num = 0, num, temp;
//
//	printf("Please input 10 numbers: ");		
//	for (i = 0; i < 10; i++)				//输入数据，赋值数组
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	num = arr[0];
//	for (i = 1; i < 10; i++)				//找出最大值的索引
//	{
//		if (num < arr[i])
//		{
//			num = arr[i];
//			max_num = i;
//		}
//	}
//
//	num = arr[0];
//	for (j = 1; j < 10; j++)				//找出最小值的索引
//	{
//		if (num > arr[j])
//		{
//			num = arr[j];
//			min_num = j;
//		}
//	}
//
//	temp = arr[max_num];					//交换最大值和最小值
//	arr[max_num] = arr[min_num];
//	arr[min_num] = temp;
//
//	for (i = 0; i < 10; i++)				//遍历数组输出
//	{
//		printf("arr[%d] = %d\n", i, arr[i]);
//	}

//4.
	/*int arr[5][5];
	int i, j, sum1 = 0, sum2 = 0, sum3 = 1, sum4 = 1, sum = 0;

	printf("Please input 25 numbers:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0, j = 0; i < 5; i++, j++)
	{
		sum1 += arr[i][j];
	}

	for (i = 4, j = 0; j < 5; i--, j++)
	{
		sum2 += arr[i][j];
	}
	printf("sum = %d\n", sum2 + sum1 - arr[2][2]);
	sum = 0;

	for (i = 0, j = 0; i < 5; i += 2, j += 2)
	{
		sum3 *= arr[i][j];
	}

	for (i = 4, j = 0; j < 5; i -= 2, j += 2)
	{
		sum4 *= arr[i][j];
	}
	printf("sum = %d\n", sum3 * sum4 / arr[2][2]);*/

	//8.
	/*char str1[60], str2[60];
	int i, j = 0;

	printf("Please input a strings: ");
	gets(str1);

	for (i = 0; i < strlen(str1); i++)
	{
		if (str1[i] != 'c')
		{
			str2[j] = str1[i];
			j++;
		}
	}
	str2[j] = '\0';
	puts(str2);*/

//10.
	//char str1[60], str2[60];
	//int i, j = 0;

	//printf("Please input the frist string: ");
	//gets(str1);
	//printf("Please input the second string: ");
	//gets(str2);

	////printf("%d\n", strlen(str1) + strlen(str2));
	//

	//i = strlen(str1);				//找到str1的'\0'所在的位置
	//while (j < strlen(str2))		//逐个复制str2到str1
	//{
	//	str1[i] = str2[j];
	//	j++;
	//	i++;
	//}

	//str1[i] = '\0';

	//printf("%s", str1);
	//return 0;
}

