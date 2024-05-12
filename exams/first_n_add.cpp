#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter the value of n-");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i);
        sum=sum+i;
        i++;       
    }
    printf("The sum of above numbers = %d",sum);
}