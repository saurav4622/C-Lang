#include<stdio.h>
int main()
{
    int num,sum=0,rem;
    printf("enter your number here: ");
    scanf("%d",&num);
    for( ;num>0; )
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("Sum of the digits = %d",sum);
}