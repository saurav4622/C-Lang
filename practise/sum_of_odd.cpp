#include<stdio.h>
int main()
{
    int in,i,sum=0;
    printf("enter your number here: ");
    scanf("%d",&in);
    for (i=1;i<=in;i++)
    {
        if (i%2!=0)
        {
            sum=sum+i;
            printf("%d\n",i);   
        }
        else
        {
            continue;
        }
        
    }
    printf("the sum is = %d",sum);
}