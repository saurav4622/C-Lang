//Selection sort
#include<stdio.h>
int main()
{
    int arr[] = {5,6,8,1,2};
    int length = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0],temp = 0;
    for (int i=0;i<length-1;i++)
    {
        for (int j=0;j<length-1;j++)
        {
            if (min > arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = min;
                min = temp;
            }
        }
    }
    for (int i=0;i<length-1;i++)
    {
        printf("%d ",arr[i]);
    }
}