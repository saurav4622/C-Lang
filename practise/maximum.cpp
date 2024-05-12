#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter your first number: ");
    scanf("%d",&num1);
    printf("enter your second number: ");
    scanf("%d",&num2);
    printf("enter your third number: ");
    scanf("%d",&num3);
    if ((num1>num2)&&(num1>num3))
    {
        printf("MAX=%d",num1);
    }
    else if((num2>num1)&&(num2>num3))
    {
        printf("MAX=%d",num2);
    }
    else
    printf("MAX=%d",num3);
}