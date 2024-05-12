#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter your number here: ");
    scanf("%d",&num1);
    int div=num1%5,div2=num1%11;
    if (div==0&&div2==0)
    {
        printf("Number is divisble by 5 and 11");
    }
    else if (div==0&&div2!=0)
    {
        printf("Number is divisible by 5");
    }
    else if (div!=0&&div2==0)
    {
        printf("Number is divisible by 11");
    }
    else if (div!=0&&div2!=0)
    {
        printf("Number is neither divisible by 5 nor 11");
    }    
}