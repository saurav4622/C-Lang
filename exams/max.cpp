#include<stdio.h>
int main()
{
    float num1,num2;
    printf("Enter 2 numbers: ");
    scanf("%f%f",&num1,&num2);
    if (num1>num2)
    {
        printf("%.2f is greater than %.2f",num1,num2);
    }
    else if(num1==num2)
    {
        printf("both numbers are equal.");
    }
    else 
    {
        printf("%.2f is greater than %.2f",num2,num1);
    }
}