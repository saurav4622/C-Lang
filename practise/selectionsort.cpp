#include<stdio.h>
#include<conio.h>
#define len 5
int main()
{
    int element[len],i,j,temp;
    for (i=0;i<len;i++)
    {
        printf("enter your %d's element: ",i+1);
        scanf("%d",&element[i]);
    }
    for (i=0;i<len;i++)
    {
        for (j=1;j<len;j++)
        {
            if (element[j]>element[j+1])
            {
                temp=element[j];
                
            }
        }
    }
}