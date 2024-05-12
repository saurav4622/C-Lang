#include<stdio.h>
int main()
{
    int pos,neg,zero,input;
    printf("Enter your number here: ");
    scanf("%d",&input);
    if (input>0)
    {
        printf("The integer is positive.");
    }
    else if(input==0)
    {
        printf("The number is zero.");
    }
    else
    {
        printf("The number is negative.");
    }
}