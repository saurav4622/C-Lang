#include<stdio.h>
int main()
{
    int n,fac,fact=1;
    printf("Enter your number:-");
    scanf("%d",&n);
    for (fac=n;fac>=1;fac--)
    {
        printf("%d\t",fac);
        fact=fact*fac;
    }
    printf("\n%d! = %d",n,fact);
}