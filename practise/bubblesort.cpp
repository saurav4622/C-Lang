#include<stdio.h>
#define len 15
int main()
{
    int element[len],i,j,temp;
    for (i=0;i<len;i++)
    {
        printf("enter your %dth element: ",i+1);
        scanf("%d",&element[i]);
    }
    for (i=0;i<len;i++)
    {
        for (j=0;j<len;j++)
        {
            if (element[j]>element[j+1])
            {
                temp =element[j];
                element[j]=element[j+1];
                element[j+1]=temp;
            }
        }
    }
    printf("\n\nThe sorted elements are:\n");
    for (i=0;i<len;i++)
    {
        printf("%d's element = %d\n",i+1,element[i]);
    }
}