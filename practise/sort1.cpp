#include<stdio.h>
#define len 15
int main()
{
    int element[len],arranged[len],i,j=0;
    for (i=0;i<len;i++)
    {
        printf("enter element %d:",i+1);
        scanf("%d",&element[i]);
    }
    for (i=0;i<len;i++)
    {
        if (element[i]>0)
        {
            arranged[j++]=element[i];
        }
    }
    for (i=0;i<len;i++)
    {
        if (element[i]==0)
        {
            arranged[j++]=element[i];
        }
    }
    for (i=0;i<len;i++)
    {
        if (element[i]<0)
        {
            arranged[j++]=element[i];
        }
    }
    printf("\n\nthe newly arranged elements are:\n\n");
    for (i=0;i<len;i++)
    {
        printf("%d's element=%d\n",i+1,arranged[i]);
    }
}