//code for spy number.
//the number whose sum and product of the digits are same are called spy number.
#include<stdio.h>
int main()
{
    int n,sum=0,prod=1;
    int d;
    printf("Enter the number: ");
    scanf("%d",&n);

    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        prod=prod*d;
        n=n/10;
    }
    if(sum==prod)
    {
        printf("Given number is Spy number");
    
    }
    else 
    {
        printf("Given number is not a spy number");
    }
    return 0;
}