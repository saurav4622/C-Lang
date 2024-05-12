#include<stdio.h>
int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int ex(int a, int b)
{
    int sum=1;
    for (int i=1;i<=b;i++)
    {
        sum=sum*a;
    }
    return sum;
}
int main()
{
    int a,b;
    printf("Enter 2 digits =");
    scanf("%d%d",&a,&b);
    printf("sum = %d\ndifference = %d\nExponent = %d",add(a,b),sub(a,b),ex(a,b));
}