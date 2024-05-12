#include<stdio.h>
float a,b;
float add(float a, float b)
{
    return a+b;
}

float subtract(float a, float b)
{
    return a-b;
}

float multiply(float a, float b)
{
    return a*b;
}

float divide(float a, float b)
{
    return a/b;
}

int main()
{
    printf("Enter a number: ");
    scanf("%f",&a);
    printf("Enter second number: ");
    scanf("%f",&b);
    printf("\n===========================================\n");
    printf("The addition value =%.2f\n",add(a,b));
    printf("The subtraction value =%.2f\n",subtract(a,b));
    printf("The multiplication value =%.2f\n",multiply(a,b));
    printf("The division value =%.2f\n",divide(a,b));
}