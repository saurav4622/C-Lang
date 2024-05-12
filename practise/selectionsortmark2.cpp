#include<stdio.h>
#define len 5
int main()
{
    int a[len],n,i,j,position,swap;
    for (i=0;i<len;i++)
    {
        printf("enter %d's element =",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<len;i++)
    {
        position=i;
        for (j=i+1;j<len;j++)
        {
            if(a[position]>a[j])
            {
                position=j;            }
        }
    }
    printf("Sorted Array:\n");
    for(i=0;i<len;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}