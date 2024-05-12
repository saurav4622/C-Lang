#include<stdio.h>
int main()
{
    int in,b,flag=0;
    printf("Enter positive integer:-");
    scanf("%d",&in);
    int i=2;
    for (i=2;i<=in;i++)
    {
        b=in%i;
        if (b==0)
        {
            flag++;
        }
    }
    if (flag>1)
    {
        printf("THE NUMBER IS composite.\nit is divisible by %d numbers",flag);
    }
    else if (flag==1)
    {
        printf("THE NUMBER IS PRIME.");
    }
    else if (in==1)
    {
        printf("The number is co-prime number.");
    }
}