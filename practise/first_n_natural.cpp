#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("enter your number here: ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        printf("%d\n",i);
        i++;
        
    }
    printf("the sum will be = %d",sum);
}