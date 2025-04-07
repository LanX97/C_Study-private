#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int i, max, min, temp;
    for(i = 0;i < 10;i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for(i = 1;i < 10;i++)
    {
        if(arr[i] > max){
            max = arr[i];
            temp = i;
        }
    }
    arr[temp] = arr[0];
    arr[0] = max;

    min = arr[0];
    for(i = 1;i < 10;i++)
    {
        if(arr[i] < min){
            min = arr[i];
            temp = i;
        }
    }
    arr[temp] = arr[9];
    arr[9] = min;

    for(i = 0;i < 10;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
