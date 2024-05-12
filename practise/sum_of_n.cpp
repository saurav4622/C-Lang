#include<stdio.h>
int main()
{
    int in,i=1,j=1,k=2;
    int sum=0,sum2=0,sum3=0;
    printf("enter value of n: ");
    scanf("%d",&in);
    for(i=1;i<=in;i++)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("the sum will be = %d\n\n",sum);

    while(j<=in)
    {
        printf("%d\n",j);
        sum2=sum2+j;
        j=j+2;
    }
    printf("the sum of odd n numbers will be = %d\n\n",sum2);

    while(k<=in)
    {
        printf("%d\n",k);
        sum3=sum3+k;
        k=k+2;
    }
    printf("the sum of even n numbers will be =%d \n\n",sum3);
}