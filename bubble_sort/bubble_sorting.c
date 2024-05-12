//trying bubble sorting for the first time. october,14,2023
#include<stdio.h>
int main()
{
    int arr[5] = {5,6,2,3,4};
    int temp[5] = { };
    int i=0;
    for(i=0;i<5;i++)
    {
         while(arr[i]>arr[i+1])
        {
            if(arr[i]<arr[i+1])
            {
                temp[i]=arr[i+1];
                arr[i+1] = arr[i];
                arr[i]=temp[i];
            }
            else if(arr[i]>arr[i+1])
            {
                temp[i]=arr[i+1];
                arr[i+1] = arr[i];
                arr[i]=temp[i];
            }
            else
                continue;
            i++;
        }
    }
    
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);

    }

}