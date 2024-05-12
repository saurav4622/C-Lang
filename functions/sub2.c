#include<stdio.h>
int a,b,c,d,e;
int add(int a, int b, int c, int d,int e)
{
    return a+b+c+d+e;
}
int main()
{
    printf("Enter 5 numbers:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf("The addition will be :%d",add(a,b,c,d,e));
}