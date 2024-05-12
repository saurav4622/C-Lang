#include<stdio.h>

int add(int a,int b)
{
    int result = a+b;
    return result;
}
int sub(int a,int b)
{
    int result = a-b;
    return result;
}
int multi(int a,int b)
{
    int result = a*b;
    return result;
}
int div(int a,int b)
{
    int result = a/b;
    return result;
}
int main()
{
    int choice,a,b;
    printf("1.Addition \n2.Subtraction \n3.Multiplication \n4.Division\n");
    printf("Enter your choice from below: ");
    scanf("%d",&choice);
    printf("Enter 2 numbers simultaneuously: ");
    scanf("%d%d",&a,&b);
    switch(choice)
    {
        case 1:
            printf("The addition of %d + %d is %d",a,b,add(a,b));
            break;
        case 2:
            printf("The Subtraction of %d - %d is %d",a,b,sub(a,b));
            break;
        case 3:
            printf("The Multiplication of %d * %d is %d",a,b,multi(a,b));
            break;
        case 4:
            break;
        default:
            printf("Enter the valid choice.");
    }
}
