/*Function to find the factorial of Number*/
#include<stdio.h>
int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return(f);
}
int main()
{
    int x,fact;
    printf("Enter any number: ");
    scanf("%d",&x);
    fact=factorial(x);
    printf("factorial of %d is %d",x,fact);
}